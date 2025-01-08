# freecad_openfoam/visualization/visualization_types/particle_render.py

import numpy as np
import OpenGL.GL as gl
import OpenGL.GL.shaders as shaders
from typing import Dict, List, Optional, Tuple
import logging
from dataclasses import dataclass
import random

logger = logging.getLogger(__name__)

@dataclass
class ParticleSystem:
    """Represents a complete particle system."""
    positions: np.ndarray
    velocities: np.ndarray
    colors: np.ndarray
    sizes: np.ndarray
    lifetimes: np.ndarray
    max_particles: int
    
    # Emission properties
    emission_rate: float
    emission_points: np.ndarray
    
    # Physics properties
    gravity: np.ndarray = np.array([0.0, -9.81, 0.0])
    drag_coefficient: float = 0.5
    turbulence_strength: float = 0.1

class ParticleRenderer:
    """Handles rendering of particle systems using instanced rendering."""
    
    # Vertex shader for particle rendering
    PARTICLE_VS = """
    #version 330
    layout(location = 0) in vec3 position;      // Particle center position
    layout(location = 1) in vec4 color;         // Particle color
    layout(location = 2) in float size;         // Particle size
    layout(location = 3) in vec3 velocity;      // Particle velocity for motion blur
    
    uniform mat4 view;
    uniform mat4 projection;
    uniform float time;
    uniform vec3 cameraRight;
    uniform vec3 cameraUp;
    
    out vec4 particleColor;
    out vec2 texCoord;
    out float velocityFactor;
    
    void main() {
        particleColor = color;
        
        // Calculate billboard vertices
        vec3 vertexPosition = position;
        
        // Motion blur based on velocity
        float speed = length(velocity);
        velocityFactor = min(speed * 0.1, 1.0);  // Scale for visible effect
        
        // Add billboard offset based on gl_VertexID
        if(gl_VertexID == 0) {
            vertexPosition += (-cameraRight - cameraUp) * size;
            texCoord = vec2(0.0, 0.0);
        } else if(gl_VertexID == 1) {
            vertexPosition += (cameraRight - cameraUp) * size;
            texCoord = vec2(1.0, 0.0);
        } else if(gl_VertexID == 2) {
            vertexPosition += (-cameraRight + cameraUp) * size;
            texCoord = vec2(0.0, 1.0);
        } else {
            vertexPosition += (cameraRight + cameraUp) * size;
            texCoord = vec2(1.0, 1.0);
        }
        
        gl_Position = projection * view * vec4(vertexPosition, 1.0);
    }
    """
    
    # Fragment shader for particle rendering
    PARTICLE_FS = """
    #version 330
    in vec4 particleColor;
    in vec2 texCoord;
    in float velocityFactor;
    
    out vec4 fragColor;
    
    uniform sampler2D particleTexture;
    uniform bool useMotionBlur;
    
    void main() {
        // Basic particle texture
        vec4 texColor = texture(particleTexture, texCoord);
        
        // Apply motion blur if enabled
        if(useMotionBlur) {
            // Stretch particle based on velocity
            vec2 stretchedCoord = texCoord;
            stretchedCoord.x = mix(texCoord.x, 0.5, velocityFactor);
            texColor = texture(particleTexture, stretchedCoord);
        }
        
        // Soft particles with alpha blending
        fragColor = particleColor * texColor;
    }
    """
    
    def __init__(self):
        self.shader_program = None
        self.vao = None
        self.vbo_positions = None
        self.vbo_colors = None
        self.vbo_sizes = None
        self.vbo_velocities = None
        
        # Rendering settings
        self.use_motion_blur = True
        self.max_particles = 100000
        self.particle_size_range = (0.01, 0.05)
        
        # Initialize OpenGL resources
        self._initialize_gl()
        
    def _initialize_gl(self):
        """Initialize OpenGL resources and shaders."""
        try:
            # Compile shaders
            vertex_shader = shaders.compileShader(self.PARTICLE_VS, gl.GL_VERTEX_SHADER)
            fragment_shader = shaders.compileShader(self.PARTICLE_FS, gl.GL_FRAGMENT_SHADER)
            
            # Create shader program
            self.shader_program = shaders.compileProgram(vertex_shader, fragment_shader)
            
            # Create VAO
            self.vao = gl.glGenVertexArrays(1)
            gl.glBindVertexArray(self.vao)
            
            # Create VBOs
            self.vbo_positions = gl.glGenBuffers(1)
            self.vbo_colors = gl.glGenBuffers(1)
            self.vbo_sizes = gl.glGenBuffers(1)
            self.vbo_velocities = gl.glGenBuffers(1)
            
            # Initialize particle texture
            self._initialize_particle_texture()
            
            logger.info("Particle renderer initialized successfully")
            
        except Exception as e:
            logger.error(f"Failed to initialize particle renderer: {str(e)}")
            raise
            
    def _initialize_particle_texture(self):
        """Initialize the particle texture."""
        # Generate texture
        self.particle_texture = gl.glGenTextures(1)
        gl.glBindTexture(gl.GL_TEXTURE_2D, self.particle_texture)
        
        # Create a soft particle texture (radial gradient)
        size = 64
        data = np.zeros((size, size, 4), dtype=np.float32)
        center = size // 2
        
        for i in range(size):
            for j in range(size):
                dist = np.sqrt((i - center) ** 2 + (j - center) ** 2) / center
                alpha = max(0, 1 - dist)
                data[i, j] = [1, 1, 1, alpha]
        
        gl.glTexImage2D(gl.GL_TEXTURE_2D, 0, gl.GL_RGBA32F, size, size, 0,
                       gl.GL_RGBA, gl.GL_FLOAT, data)
        
        gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MIN_FILTER, gl.GL_LINEAR)
        gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MAG_FILTER, gl.GL_LINEAR)
        
    def update_particles(self, particle_system: ParticleSystem, delta_time: float):
        """Update particle positions and properties."""
        # Update positions based on velocity
        particle_system.positions += particle_system.velocities * delta_time
        
        # Apply gravity
        particle_system.velocities += particle_system.gravity * delta_time
        
        # Apply drag force
        velocities_mag = np.linalg.norm(particle_system.velocities, axis=1)
        drag = -particle_system.drag_coefficient * velocities_mag[:, np.newaxis] * particle_system.velocities
        particle_system.velocities += drag * delta_time
        
        # Apply turbulence
        turbulence = np.random.normal(0, particle_system.turbulence_strength,
                                    particle_system.velocities.shape)
        particle_system.velocities += turbulence * delta_time
        
        # Update lifetimes and remove dead particles
        particle_system.lifetimes -= delta_time
        alive_mask = particle_system.lifetimes > 0
        
        particle_system.positions = particle_system.positions[alive_mask]
        particle_system.velocities = particle_system.velocities[alive_mask]
        particle_system.colors = particle_system.colors[alive_mask]
        particle_system.sizes = particle_system.sizes[alive_mask]
        particle_system.lifetimes = particle_system.lifetimes[alive_mask]
        
        # Emit new particles
        self._emit_particles(particle_system, delta_time)
        
    def _emit_particles(self, particle_system: ParticleSystem, delta_time: float):
        """Emit new particles based on emission rate."""
        num_new = int(particle_system.emission_rate * delta_time)
        if num_new == 0:
            return
            
        # Ensure we don't exceed max particles
        available_slots = particle_system.max_particles - len(particle_system.positions)
        num_new = min(num_new, available_slots)
        
        if num_new <= 0:
            return
            
        # Generate emission points
        emission_indices = np.random.randint(0, len(particle_system.emission_points),
                                          size=num_new)
        new_positions = particle_system.emission_points[emission_indices]
        
        # Generate random velocities
        new_velocities = np.random.normal(0, 1, (num_new, 3))
        new_velocities = new_velocities / np.linalg.norm(new_velocities, axis=1)[:, np.newaxis]
        new_velocities *= np.random.uniform(1, 3, (num_new, 1))
        
        # Generate colors and sizes
        new_colors = np.random.uniform(0.5, 1.0, (num_new, 4))
        new_colors[:, 3] = 1.0  # Set alpha to 1
        new_sizes = np.random.uniform(*self.particle_size_range, num_new)
        
        # Generate lifetimes
        new_lifetimes = np.random.uniform(1.0, 3.0, num_new)
        
        # Add new particles
        particle_system.positions = np.vstack([particle_system.positions, new_positions])
        particle_system.velocities = np.vstack([particle_system.velocities, new_velocities])
        particle_system.colors = np.vstack([particle_system.colors, new_colors])
        particle_system.sizes = np.append(particle_system.sizes, new_sizes)
        particle_system.lifetimes = np.append(particle_system.lifetimes, new_lifetimes)
        
    def render(self, particle_system: ParticleSystem, view_matrix: np.ndarray,
              projection_matrix: np.ndarray, camera_position: np.ndarray):
        """Render the particle system."""
        gl.glUseProgram(self.shader_program)
        
        # Update uniforms
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "view"),
                            1, gl.GL_FALSE, view_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "projection"),
                            1, gl.GL_FALSE, projection_matrix)
        
        # Calculate camera vectors for billboarding
        view_right = view_matrix[0, :3]
        view_up = view_matrix[1, :3]
        
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "cameraRight"),
                       1, view_right)
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "cameraUp"),
                       1, view_up)
        
        # Update particle buffers
        gl.glBindVertexArray(self.vao)
        
        # Update position buffer
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_positions)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, particle_system.positions.nbytes,
                       particle_system.positions, gl.GL_STREAM_DRAW)
        gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(0)
        
        # Update color buffer
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_colors)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, particle_system.colors.nbytes,
                       particle_system.colors, gl.GL_STREAM_DRAW)
        gl.glVertexAttribPointer(1, 4, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(1)
        
        # Update size buffer
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_sizes)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, particle_system.sizes.nbytes,
                       particle_system.sizes, gl.GL_STREAM_DRAW)
        gl.glVertexAttribPointer(2, 1, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(2)
        
        # Update velocity buffer
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_velocities)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, particle_system.velocities.nbytes,
                       particle_system.velocities, gl.GL_STREAM_DRAW)
        gl.glVertexAttribPointer(3, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(3)
        
        # Set up blending
        gl.glEnable(gl.GL_BLEND)
        gl.glBlendFunc(gl.GL_SRC_ALPHA, gl.GL_ONE_MINUS_SRC_ALPHA)
        
        # Bind texture
        gl.glActiveTexture(gl.GL_TEXTURE0)
        gl.glBindTexture(gl.GL_TEXTURE_2D, self.particle_texture)
        
        # Draw particles
        gl.glDrawArraysInstanced(gl.GL_TRIANGLE_STRIP, 0, 4,
                               len(particle_system.positions))
        
        # Cleanup
        gl.glDisable(gl.GL_BLEND)
        gl.glUseProgram(0)
        
    def cleanup(self):
        """Clean up OpenGL resources."""
        if self.shader_program:
            gl.glDeleteProgram(self.shader_program)
        if self.vao:
            gl.glDeleteVertexArrays(1, [self.vao])
        if self.vbo_positions:
            gl.glDeleteBuffers(1, [self.vbo_positions])
        if self.vbo_colors:
            gl.glDeleteBuffers(1, [self.vbo_colors])
        if self.vbo_sizes:
            gl.glDeleteBuffers(1, [self.vbo_sizes])
        if self.vbo_velocities:
            gl.glDeleteBuffers(1, [self.vbo_velocities])
        if self.particle_texture:
            gl.glDeleteTextures([self.particle_texture])
            
    def create_multiphase_particle_system(self, num_particles: int, 
                                        phase_properties: Dict[str, Dict]) -> Dict[str, ParticleSystem]:
        """Create particle systems for multiphase flow visualization."""
        particle_systems = {}
        particles_per_phase = num_particles // len(phase_properties)
        
        for phase_name, properties in phase_properties.items():
            # Create emission points based on phase properties
            emission_points = np.random.uniform(
                properties.get('bounds_min', [-1, -1, -1]),
                properties.get('bounds_max', [1, 1, 1]),
                (particles_per_phase, 3)
            )
            
            # Initialize particle system for this phase
            particle_systems[phase_name] = ParticleSystem(
                positions=emission_points.copy(),
                velocities=np.zeros((particles_per_phase, 3)),
                colors=np.tile(properties.get('color', [1, 1, 1, 1]), (particles_per_phase, 1)),
                sizes=np.full(particles_per_phase, properties.get('size', 0.02)),
                lifetimes=np.random.uniform(1.0, 3.0, particles_per_phase),
                max_particles=particles_per_phase,
                emission_rate=properties.get('emission_rate', 100),
                emission_points=emission_points,
                gravity=properties.get('gravity', np.array([0.0, -9.81, 0.0])),
                drag_coefficient=properties.get('drag_coefficient', 0.5),
                turbulence_strength=properties.get('turbulence_strength', 0.1)
            )
            
        return particle_systems
    
    def create_pigging_particle_system(self, pig_position: np.ndarray, 
                                     flow_direction: np.ndarray,
                                     num_particles: int = 1000) -> ParticleSystem:
        """Create a particle system for visualizing flow around a pig."""
        # Create emission points in a ring around the pig
        radius = 0.2  # Radius of emission ring
        angles = np.linspace(0, 2*np.pi, num_particles)
        
        # Create ring of emission points
        emission_points = np.zeros((num_particles, 3))
        emission_points[:, 0] = pig_position[0] + radius * np.cos(angles)
        emission_points[:, 1] = pig_position[1] + radius * np.sin(angles)
        emission_points[:, 2] = pig_position[2]
        
        # Initialize particle system
        return ParticleSystem(
            positions=emission_points.copy(),
            velocities=np.tile(flow_direction, (num_particles, 1)),
            colors=np.tile([0.2, 0.6, 1.0, 0.7], (num_particles, 1)),  # Blue-ish particles
            sizes=np.full(num_particles, 0.015),
            lifetimes=np.random.uniform(0.5, 1.5, num_particles),
            max_particles=num_particles,
            emission_rate=500,
            emission_points=emission_points,
            turbulence_strength=0.2  # Higher turbulence for pig wake
        )
    
    def create_spill_particle_system(self, crack_position: np.ndarray,
                                   crack_normal: np.ndarray,
                                   pressure: float,
                                   num_particles: int = 2000) -> ParticleSystem:
        """Create a particle system for visualizing fluid spill from a crack."""
        # Create emission points along the crack
        emission_length = 0.3  # Length of crack
        t = np.linspace(-emission_length/2, emission_length/2, num_particles)
        
        # Create orthogonal vectors for crack direction
        crack_direction = np.array([crack_normal[1], -crack_normal[0], 0])
        if np.allclose(crack_direction, 0):
            crack_direction = np.array([1, 0, 0])
            
        emission_points = crack_position + np.outer(t, crack_direction)
        
        # Calculate initial velocity based on pressure
        initial_velocity = crack_normal * np.sqrt(2 * pressure / 1000)  # Simple pressure-velocity relation
        
        # Initialize particle system
        return ParticleSystem(
            positions=emission_points.copy(),
            velocities=np.tile(initial_velocity, (num_particles, 1)),
            colors=np.tile([0.7, 0.2, 0.2, 0.8], (num_particles, 1)),  # Reddish particles
            sizes=np.full(num_particles, 0.01),
            lifetimes=np.random.uniform(1.0, 2.0, num_particles),
            max_particles=num_particles,
            emission_rate=1000,
            emission_points=emission_points,
            drag_coefficient=0.3  # Lower drag for high-pressure spill
        )
    
    def update_settings(self, settings: Dict):
        """Update rendering settings."""
        if 'use_motion_blur' in settings:
            self.use_motion_blur = settings['use_motion_blur']
        if 'particle_size_range' in settings:
            self.particle_size_range = settings['particle_size_range']
        if 'max_particles' in settings:
            self.max_particles = settings['max_particles']