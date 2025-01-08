# freecad_openfoam/visualization/visualization_types/streamline_render.py

import numpy as np
import OpenGL.GL as gl
import OpenGL.GL.shaders as shaders
from typing import Dict, List, Optional, Tuple, Union
import logging
from dataclasses import dataclass
from scipy.interpolate import RegularGridInterpolator

logger = logging.getLogger(__name__)

@dataclass
class StreamlineData:
    """Represents streamline data for rendering."""
    points: List[np.ndarray]  # List of point arrays for each streamline
    velocities: List[np.ndarray]  # Corresponding velocities at each point
    colors: Optional[List[np.ndarray]] = None  # Optional colors for each streamline
    widths: Optional[List[float]] = None  # Optional widths for each streamline
    metadata: Optional[Dict] = None

class StreamlineRenderer:
    """Handles rendering of streamlines for flow visualization."""
    
    # Vertex shader for streamline rendering
    STREAMLINE_VS = """
    #version 330
    layout(location = 0) in vec3 position;
    layout(location = 1) in vec3 velocity;
    layout(location = 2) in vec4 color;
    layout(location = 3) in float width;
    layout(location = 4) in vec3 previous;
    layout(location = 5) in vec3 next;
    
    uniform mat4 model;
    uniform mat4 view;
    uniform mat4 projection;
    uniform float maxVelocity;
    uniform bool useVelocityColor;
    
    out vec4 fragColor;
    out float velocityFactor;
    out vec2 texCoord;
    
    void main() {
        vec3 direction = normalize(next - previous);
        vec3 cameraPos = vec3(inverse(view)[3]);
        vec3 cameraDir = normalize(cameraPos - position);
        
        // Create basis for line expansion
        vec3 right = normalize(cross(direction, cameraDir));
        
        // Calculate offset position for line width
        vec3 offset = right * width * (gl_VertexID % 2 == 0 ? -1.0 : 1.0);
        vec3 finalPos = position + offset;
        
        // Calculate velocity factor for coloring
        float speed = length(velocity);
        velocityFactor = speed / maxVelocity;
        
        // Set color based on velocity or input color
        if (useVelocityColor) {
            // Create color gradient based on velocity
            vec3 slowColor = vec3(0.0, 0.0, 1.0);  // Blue for slow
            vec3 fastColor = vec3(1.0, 0.0, 0.0);  // Red for fast
            fragColor = vec4(mix(slowColor, fastColor, velocityFactor), 1.0);
        } else {
            fragColor = color;
        }
        
        // Set texture coordinates for line pattern
        texCoord = vec2(float(gl_VertexID / 2) / 100.0, gl_VertexID % 2);
        
        gl_Position = projection * view * model * vec4(finalPos, 1.0);
    }
    """
    
    # Fragment shader for streamline rendering
    STREAMLINE_FS = """
    #version 330
    in vec4 fragColor;
    in float velocityFactor;
    in vec2 texCoord;
    
    uniform bool useAnimation;
    uniform float animationTime;
    uniform bool useDashPattern;
    uniform float dashLength;
    uniform float gapLength;
    
    out vec4 outColor;
    
    void main() {
        float alpha = 1.0;
        
        if (useDashPattern) {
            // Calculate pattern position with optional animation
            float patternPos = texCoord.x;
            if (useAnimation) {
                patternPos = fract(patternPos - animationTime * velocityFactor);
            }
            
            // Create dash pattern
            float totalLength = dashLength + gapLength;
            float pattern = fract(patternPos / totalLength);
            
            if (pattern > dashLength / totalLength) {
                discard;
            }
            
            // Fade edges of dashes
            float edgeDist = min(pattern * totalLength, dashLength - pattern * totalLength);
            alpha *= smoothstep(0.0, 0.1, edgeDist);
        }
        
        // Apply velocity-based transparency
        alpha *= mix(0.3, 1.0, velocityFactor);
        
        outColor = vec4(fragColor.rgb, fragColor.a * alpha);
    }
    """
    
    def __init__(self):
        self.shader_program = None
        self.vao = None
        self.vbo_positions = None
        self.vbo_velocities = None
        self.vbo_colors = None
        self.vbo_widths = None
        self.vbo_previous = None
        self.vbo_next = None
        self.ebo = None
        
        # Rendering settings
        self.use_velocity_color = True
        self.use_animation = True
        self.use_dash_pattern = True
        self.dash_length = 0.3
        self.gap_length = 0.2
        self.base_width = 0.02
        self.animation_speed = 1.0
        self.animation_time = 0.0
        
        # Initialize OpenGL resources
        self._initialize_gl()
        
    def _initialize_gl(self):
        """Initialize OpenGL resources and shaders."""
        try:
            # Compile shaders
            vertex_shader = shaders.compileShader(self.STREAMLINE_VS, gl.GL_VERTEX_SHADER)
            fragment_shader = shaders.compileShader(self.STREAMLINE_FS, gl.GL_FRAGMENT_SHADER)
            
            # Create shader program
            self.shader_program = shaders.compileProgram(vertex_shader, fragment_shader)
            
            # Create VAO and VBOs
            self.vao = gl.glGenVertexArrays(1)
            gl.glBindVertexArray(self.vao)
            
            self.vbo_positions = gl.glGenBuffers(1)
            self.vbo_velocities = gl.glGenBuffers(1)
            self.vbo_colors = gl.glGenBuffers(1)
            self.vbo_widths = gl.glGenBuffers(1)
            self.vbo_previous = gl.glGenBuffers(1)
            self.vbo_next = gl.glGenBuffers(1)
            self.ebo = gl.glGenBuffers(1)
            
            logger.info("Streamline renderer initialized successfully")
            
        except Exception as e:
            logger.error(f"Failed to initialize streamline renderer: {str(e)}")
            raise
            
    def generate_streamlines(self, velocity_field: np.ndarray,
                           grid_points: Tuple[np.ndarray, np.ndarray, np.ndarray],
                           seed_points: np.ndarray,
                           max_steps: int = 1000,
                           step_size: float = 0.1,
                           min_velocity: float = 1e-6) -> StreamlineData:
        """Generate streamlines from velocity field."""
        try:
            # Create interpolator for velocity field
            x, y, z = grid_points
            interpolator = RegularGridInterpolator(
                (x, y, z),
                velocity_field,
                bounds_error=False,
                fill_value=None
            )
            
            streamlines = []
            velocities = []
            
            for seed in seed_points:
                points = [seed]
                vels = []
                point = seed.copy()
                
                for _ in range(max_steps):
                    # Get interpolated velocity
                    vel = interpolator([point[0], point[1], point[2]])
                    speed = np.linalg.norm(vel)
                    
                    # Stop if velocity is too low
                    if speed < min_velocity:
                        break
                        
                    # Store velocity
                    vels.append(vel)
                    
                    # Update position using RK4
                    k1 = vel
                    k2 = interpolator([point[0] + k1[0]*step_size/2,
                                     point[1] + k1[1]*step_size/2,
                                     point[2] + k1[2]*step_size/2])
                    k3 = interpolator([point[0] + k2[0]*step_size/2,
                                     point[1] + k2[1]*step_size/2,
                                     point[2] + k2[2]*step_size/2])
                    k4 = interpolator([point[0] + k3[0]*step_size,
                                     point[1] + k3[1]*step_size,
                                     point[2] + k3[2]*step_size])
                    
                    # Update position
                    point = point + (step_size/6) * (k1 + 2*k2 + 2*k3 + k4)
                    points.append(point.copy())
                    
                    # Check if streamline has left the domain
                    if (point < [x[0], y[0], z[0]]).any() or \
                       (point > [x[-1], y[-1], z[-1]]).any():
                        break
                
                if len(points) > 1:
                    streamlines.append(np.array(points))
                    velocities.append(np.array(vels))
            
            return StreamlineData(
                points=streamlines,
                velocities=velocities
            )
            
        except Exception as e:
            logger.error(f"Failed to generate streamlines: {str(e)}")
            raise
            
    def prepare_render_data(self, streamline_data: StreamlineData) -> Tuple[np.ndarray, np.ndarray]:
        """Prepare data for rendering."""
        vertices = []
        indices = []
        vertex_count = 0
        
        for i, (points, velocities) in enumerate(zip(streamline_data.points,
                                                   streamline_data.velocities)):
            # Create line strip vertices
            for j in range(len(points)):
                # Add two vertices for each point (for line width)
                vertices.extend([points[j], velocities[j] if j < len(velocities) else velocities[-1]])
                
                if j > 0:
                    # Create indices for line strip
                    indices.extend([vertex_count - 2, vertex_count - 1,
                                 vertex_count, vertex_count + 1])
                    
                vertex_count += 2
        
        return np.array(vertices, dtype=np.float32), np.array(indices, dtype=np.uint32)
        
    def update_streamline_data(self, streamline_data: StreamlineData):
        """Update streamline mesh data in GPU buffers."""
        try:
            vertices, indices = self.prepare_render_data(streamline_data)
            
            gl.glBindVertexArray(self.vao)
            
            # Update positions
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_positions)
            gl.glBufferData(gl.GL_ARRAY_BUFFER, vertices[:, 0:3].nbytes,
                          vertices[:, 0:3], gl.GL_STATIC_DRAW)
            gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
            gl.glEnableVertexAttribArray(0)
            
            # Update velocities
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_velocities)
            gl.glBufferData(gl.GL_ARRAY_BUFFER, vertices[:, 3:6].nbytes,
                          vertices[:, 3:6], gl.GL_STATIC_DRAW)
            gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
            gl.glEnableVertexAttribArray(1)
            
            # Update indices
            gl.glBindBuffer(gl.GL_ELEMENT_ARRAY_BUFFER, self.ebo)
            gl.glBufferData(gl.GL_ELEMENT_ARRAY_BUFFER, indices.nbytes,
                          indices, gl.GL_STATIC_DRAW)
            
            self.num_indices = len(indices)
            
        except Exception as e:
            logger.error(f"Failed to update streamline data: {str(e)}")
            raise
            
    def render(self, model_matrix: np.ndarray, view_matrix: np.ndarray,
              projection_matrix: np.ndarray, max_velocity: float):
        """Render the streamlines."""
        gl.glUseProgram(self.shader_program)
        
        # Update uniforms
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "model"),
                            1, gl.GL_FALSE, model_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "view"),
                            1, gl.GL_FALSE, view_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "projection"),
                            1, gl.GL_FALSE, projection_matrix)
        
        gl.glUniform1f(gl.glGetUniformLocation(self.shader_program, "maxVelocity"),
                     max_velocity)
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "useVelocityColor"),
                     self.use_velocity_color)
        
        # Animation uniforms
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "useAnimation"),
                     self.use_animation)
        gl.glUniform1f(gl.glGetUniformLocation(self.shader_program, "animationTime"),
                     self.animation_time)
        
        # Line pattern uniforms
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "useDashPattern"),
                     self.use_dash_pattern)
        gl.glUniform1f(gl.glGetUniformLocation(self.shader_program, "dashLength"),
                     self.dash_length)
        gl.glUniform1f(gl.glGetUniformLocation(self.shader_program, "gapLength"),
                     self.gap_length)
        
        # Enable blending for transparency
        gl.glEnable(gl.GL_BLEND)
        gl.glBlendFunc(gl.GL_SRC_ALPHA, gl.GL_ONE_MINUS_SRC_ALPHA)
        
        # Enable line smoothing
        gl.glEnable(gl.GL_LINE_SMOOTH)
        gl.glHint(gl.GL_LINE_SMOOTH_HINT, gl.GL_NICEST)
        
        # Render streamlines
        gl.glBindVertexArray(self.vao)
        gl.glDrawElements(gl.GL_LINES_ADJACENCY, self.num_indices,
                        gl.GL_UNSIGNED_INT, None)
        
        # Cleanup
        gl.glDisable(gl.GL_BLEND)
        gl.glDisable(gl.GL_LINE_SMOOTH)
        gl.glUseProgram(0)

    def update_animation(self, delta_time: float):
        """Update animation time."""
        self.animation_time += delta_time * self.animation_speed
        if self.animation_time > 1.0:
            self.animation_time -= 1.0

    def generate_seed_points(self, bounds: Tuple[np.ndarray, np.ndarray],
                           num_points: int,
                           method: str = 'uniform') -> np.ndarray:
        """Generate seed points for streamlines."""
        min_bound, max_bound = bounds
        
        if method == 'uniform':
            # Generate uniform grid of seed points
            points_per_dim = int(np.ceil(np.cbrt(num_points)))
            x = np.linspace(min_bound[0], max_bound[0], points_per_dim)
            y = np.linspace(min_bound[1], max_bound[1], points_per_dim)
            z = np.linspace(min_bound[2], max_bound[2], points_per_dim)
            
            X, Y, Z = np.meshgrid(x, y, z)
            seeds = np.column_stack((X.ravel(), Y.ravel(), Z.ravel()))
            
            # Take only required number of points
            return seeds[:num_points]
            
        elif method == 'random':
            # Generate random seed points
            return np.random.uniform(min_bound, max_bound, (num_points, 3))
            
        elif method == 'planar':
            # Generate points in a plane (useful for cross-section visualization)
            points_per_dim = int(np.ceil(np.sqrt(num_points)))
            x = np.linspace(min_bound[0], max_bound[0], points_per_dim)
            y = np.linspace(min_bound[1], max_bound[1], points_per_dim)
            
            X, Y = np.meshgrid(x, y)
            Z = np.full_like(X, (min_bound[2] + max_bound[2]) / 2)
            
            seeds = np.column_stack((X.ravel(), Y.ravel(), Z.ravel()))
            return seeds[:num_points]
            
        else:
            raise ValueError(f"Unknown seeding method: {method}")

    def adaptive_streamline_spacing(self, velocity_field: np.ndarray, 
                                  seed_point: np.ndarray,
                                  min_spacing: float = 0.1,
                                  max_spacing: float = 1.0) -> float:
        """Calculate adaptive spacing based on local velocity magnitude."""
        # Get local velocity magnitude
        local_velocity = np.linalg.norm(velocity_field[
            tuple(np.floor(seed_point).astype(int))
        ])
        
        # Scale spacing inversely with velocity
        max_velocity = np.max(np.linalg.norm(velocity_field, axis=-1))
        relative_velocity = local_velocity / max_velocity
        
        # Calculate adaptive spacing
        spacing = min_spacing + (max_spacing - min_spacing) * (1 - relative_velocity)
        return spacing

    def cleanup(self):
        """Clean up OpenGL resources."""
        if self.shader_program:
            gl.glDeleteProgram(self.shader_program)
        if self.vao:
            gl.glDeleteVertexArrays(1, [self.vao])
        if self.vbo_positions:
            gl.glDeleteBuffers(1, [self.vbo_positions])
        if self.vbo_velocities:
            gl.glDeleteBuffers(1, [self.vbo_velocities])
        if self.vbo_colors:
            gl.glDeleteBuffers(1, [self.vbo_colors])
        if self.vbo_widths:
            gl.glDeleteBuffers(1, [self.vbo_widths])
        if self.vbo_previous:
            gl.glDeleteBuffers(1, [self.vbo_previous])
        if self.vbo_next:
            gl.glDeleteBuffers(1, [self.vbo_next])
        if self.ebo:
            gl.glDeleteBuffers(1, [self.ebo])

    def update_settings(self, settings: Dict):
        """Update rendering settings."""
        if 'use_velocity_color' in settings:
            self.use_velocity_color = settings['use_velocity_color']
        if 'use_animation' in settings:
            self.use_animation = settings['use_animation']
        if 'use_dash_pattern' in settings:
            self.use_dash_pattern = settings['use_dash_pattern']
        if 'dash_length' in settings:
            self.dash_length = settings['dash_length']
        if 'gap_length' in settings:
            self.gap_length = settings['gap_length']
        if 'base_width' in settings:
            self.base_width = settings['base_width']
        if 'animation_speed' in settings:
            self.animation_speed = settings['animation_speed']

    def compute_streamline_width(self, velocity: np.ndarray) -> float:
        """Compute streamline width based on velocity magnitude."""
        speed = np.linalg.norm(velocity)
        # Width decreases with increasing velocity
        return self.base_width * (1.0 - 0.5 * np.tanh(speed / 10.0))

    def set_colors_by_velocity(self, streamline_data: StreamlineData):
        """Set streamline colors based on velocity magnitude."""
        colors = []
        max_velocity = 0
        
        # Find maximum velocity
        for velocities in streamline_data.velocities:
            speeds = np.linalg.norm(velocities, axis=1)
            max_velocity = max(max_velocity, np.max(speeds))
        
        # Generate colors
        for velocities in streamline_data.velocities:
            speeds = np.linalg.norm(velocities, axis=1)
            normalized_speeds = speeds / max_velocity
            
            # Create color gradient (blue to red)
            colors_array = np.zeros((len(speeds), 4))
            colors_array[:, 0] = normalized_speeds  # Red
            colors_array[:, 2] = 1 - normalized_speeds  # Blue
            colors_array[:, 3] = 1.0  # Alpha
            
            colors.append(colors_array)
        
        streamline_data.colors = colors

    def compute_streamline_opacity(self, camera_position: np.ndarray, 
                                 streamline_position: np.ndarray,
                                 base_opacity: float = 0.8) -> float:
        """Compute opacity based on distance from camera."""
        distance = np.linalg.norm(camera_position - streamline_position)
        return base_opacity * (1.0 - np.tanh(distance / 20.0))

    def detect_critical_points(self, velocity_field: np.ndarray, 
                             threshold: float = 1e-3) -> List[Tuple[np.ndarray, str]]:
        """Detect critical points in the velocity field."""
        critical_points = []
        
        # Compute velocity magnitude
        velocity_magnitude = np.linalg.norm(velocity_field, axis=-1)
        
        # Find local minima in velocity magnitude
        local_minima = (velocity_magnitude < threshold)
        
        # Get coordinates of critical points
        critical_coords = np.where(local_minima)
        
        for coord in zip(*critical_coords):
            # Analyze local velocity field
            local_velocities = velocity_field[
                max(0, coord[0]-1):coord[0]+2,
                max(0, coord[1]-1):coord[1]+2,
                max(0, coord[2]-1):coord[2]+2
            ]
            
            # Classify critical point type (simplified)
            if np.all(local_velocities > 0):
                point_type = "source"
            elif np.all(local_velocities < 0):
                point_type = "sink"
            else:
                point_type = "saddle"
            
            critical_points.append((np.array(coord), point_type))
        
        return critical_points