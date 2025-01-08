# freecad_openfoam/visualization/visualization_types/surface_render.py

import numpy as np
import OpenGL.GL as gl
import OpenGL.GL.shaders as shaders
from typing import Dict, List, Optional, Tuple, Union
import logging
from dataclasses import dataclass
from scipy.spatial import Delaunay
import skimage.measure as measure

logger = logging.getLogger(__name__)

@dataclass
class SurfaceData:
    """Represents surface data for rendering."""
    vertices: np.ndarray
    normals: np.ndarray
    indices: np.ndarray
    values: Optional[np.ndarray] = None  # For coloring based on scalar field
    metadata: Optional[Dict] = None

class SurfaceRenderer:
    """Handles rendering of fluid surfaces and interfaces."""
    
    # Vertex shader for surface rendering
    SURFACE_VS = """
    #version 330
    layout(location = 0) in vec3 position;
    layout(location = 1) in vec3 normal;
    layout(location = 2) in float value;  // Optional scalar value for coloring
    
    uniform mat4 model;
    uniform mat4 view;
    uniform mat4 projection;
    uniform vec2 valueRange;
    uniform bool useValueColoring;
    
    out vec3 fragNormal;
    out vec3 fragPosition;
    out float fragValue;
    
    void main() {
        vec4 worldPos = model * vec4(position, 1.0);
        fragPosition = worldPos.xyz;
        fragNormal = mat3(transpose(inverse(model))) * normal;
        fragValue = value;
        
        gl_Position = projection * view * worldPos;
    }
    """
    
    # Fragment shader for surface rendering
    SURFACE_FS = """
    #version 330
    in vec3 fragNormal;
    in vec3 fragPosition;
    in float fragValue;
    
    uniform vec3 lightPos;
    uniform vec3 viewPos;
    uniform vec3 baseColor;
    uniform bool useValueColoring;
    uniform sampler1D colormap;
    uniform vec2 valueRange;
    uniform float opacity;
    uniform bool useFresnelEffect;
    
    out vec4 outColor;
    
    void main() {
        // Normalize vectors
        vec3 norm = normalize(fragNormal);
        vec3 lightDir = normalize(lightPos - fragPosition);
        vec3 viewDir = normalize(viewPos - fragPosition);
        
        // Base color determination
        vec4 color;
        if (useValueColoring) {
            float normalizedValue = (fragValue - valueRange.x) / (valueRange.y - valueRange.x);
            color = texture(colormap, normalizedValue);
        } else {
            color = vec4(baseColor, 1.0);
        }
        
        // Ambient
        float ambientStrength = 0.2;
        vec3 ambient = ambientStrength * color.rgb;
        
        // Diffuse
        float diff = max(dot(norm, lightDir), 0.0);
        vec3 diffuse = diff * color.rgb;
        
        // Specular
        float specularStrength = 0.5;
        vec3 reflectDir = reflect(-lightDir, norm);
        float spec = pow(max(dot(viewDir, reflectDir), 0.0), 32);
        vec3 specular = specularStrength * spec * vec3(1.0);
        
        // Fresnel effect for transparency
        float alpha = opacity;
        if (useFresnelEffect) {
            float fresnel = 1.0 - max(dot(viewDir, norm), 0.0);
            alpha *= mix(0.5, 1.0, fresnel * fresnel);
        }
        
        vec3 result = ambient + diffuse + specular;
        outColor = vec4(result, alpha);
    }
    """
    
    def __init__(self):
        self.shader_program = None
        self.vao = None
        self.vbo_positions = None
        self.vbo_normals = None
        self.vbo_values = None
        self.ebo = None
        self.colormap_texture = None
        
        # Rendering settings
        self.opacity = 0.8
        self.use_fresnel_effect = True
        self.base_color = np.array([0.2, 0.6, 1.0])  # Default blue color
        self.use_value_coloring = False
        
        # Initialize OpenGL resources
        self._initialize_gl()
        
    def _initialize_gl(self):
        """Initialize OpenGL resources and shaders."""
        try:
            # Compile shaders
            vertex_shader = shaders.compileShader(self.SURFACE_VS, gl.GL_VERTEX_SHADER)
            fragment_shader = shaders.compileShader(self.SURFACE_FS, gl.GL_FRAGMENT_SHADER)
            
            # Create shader program
            self.shader_program = shaders.compileProgram(vertex_shader, fragment_shader)
            
            # Create VAO
            self.vao = gl.glGenVertexArrays(1)
            gl.glBindVertexArray(self.vao)
            
            # Create VBOs
            self.vbo_positions = gl.glGenBuffers(1)
            self.vbo_normals = gl.glGenBuffers(1)
            self.vbo_values = gl.glGenBuffers(1)
            self.ebo = gl.glGenBuffers(1)
            
            # Create colormap texture
            self.colormap_texture = gl.glGenTextures(1)
            self._initialize_colormap()
            
            logger.info("Surface renderer initialized successfully")
            
        except Exception as e:
            logger.error(f"Failed to initialize surface renderer: {str(e)}")
            raise
    
    def _initialize_colormap(self):
        """Initialize the colormap texture."""
        # Create a default colormap (blue to red)
        colormap = np.zeros((256, 3), dtype=np.float32)
        for i in range(256):
            colormap[i] = [i/255, 0, 1.0 - i/255]
            
        gl.glBindTexture(gl.GL_TEXTURE_1D, self.colormap_texture)
        gl.glTexImage1D(gl.GL_TEXTURE_1D, 0, gl.GL_RGB32F, 256, 0,
                       gl.GL_RGB, gl.GL_FLOAT, colormap)
        gl.glTexParameteri(gl.GL_TEXTURE_1D, gl.GL_TEXTURE_MIN_FILTER, gl.GL_LINEAR)
        gl.glTexParameteri(gl.GL_TEXTURE_1D, gl.GL_TEXTURE_MAG_FILTER, gl.GL_LINEAR)
    
    def extract_surface(self, volume_data: np.ndarray, isovalue: float) -> SurfaceData:
        """Extract surface from volume data using marching cubes."""
        try:
            # Extract surface vertices and faces
            verts, faces, normals, values = measure.marching_cubes(
                volume_data, level=isovalue, spacing=(1.0, 1.0, 1.0)
            )
            
            # Create surface data
            return SurfaceData(
                vertices=verts.astype(np.float32),
                normals=normals.astype(np.float32),
                indices=faces.ravel().astype(np.uint32),
                values=values.astype(np.float32) if values is not None else None
            )
            
        except Exception as e:
            logger.error(f"Failed to extract surface: {str(e)}")
            raise
    
    def extract_interface_surface(self, phase1_data: np.ndarray,
                                phase2_data: np.ndarray,
                                threshold: float = 0.5) -> SurfaceData:
        """Extract interface surface between two phases."""
        try:
            # Calculate phase difference
            interface_field = phase1_data - phase2_data
            
            # Extract interface surface
            return self.extract_surface(interface_field, threshold)
            
        except Exception as e:
            logger.error(f"Failed to extract interface surface: {str(e)}")
            raise
    
    def update_surface_data(self, surface_data: SurfaceData):
        """Update surface mesh data in GPU buffers."""
        try:
            gl.glBindVertexArray(self.vao)
            
            # Update positions
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_positions)
            gl.glBufferData(gl.GL_ARRAY_BUFFER, surface_data.vertices.nbytes,
                          surface_data.vertices, gl.GL_STATIC_DRAW)
            gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
            gl.glEnableVertexAttribArray(0)
            
            # Update normals
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_normals)
            gl.glBufferData(gl.GL_ARRAY_BUFFER, surface_data.normals.nbytes,
                          surface_data.normals, gl.GL_STATIC_DRAW)
            gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
            gl.glEnableVertexAttribArray(1)
            
            # Update values if present
            if surface_data.values is not None:
                gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_values)
                gl.glBufferData(gl.GL_ARRAY_BUFFER, surface_data.values.nbytes,
                              surface_data.values, gl.GL_STATIC_DRAW)
                gl.glVertexAttribPointer(2, 1, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
                gl.glEnableVertexAttribArray(2)
            
            # Update indices
            gl.glBindBuffer(gl.GL_ELEMENT_ARRAY_BUFFER, self.ebo)
            gl.glBufferData(gl.GL_ELEMENT_ARRAY_BUFFER, surface_data.indices.nbytes,
                          surface_data.indices, gl.GL_STATIC_DRAW)
            
        except Exception as e:
            logger.error(f"Failed to update surface data: {str(e)}")
            raise
    
    def render(self, model_matrix: np.ndarray, view_matrix: np.ndarray,
              projection_matrix: np.ndarray, camera_position: np.ndarray,
              light_position: np.ndarray, surface_data: SurfaceData):
        """Render the surface."""
        gl.glUseProgram(self.shader_program)
        
        # Set uniforms
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "model"),
                            1, gl.GL_FALSE, model_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "view"),
                            1, gl.GL_FALSE, view_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "projection"),
                            1, gl.GL_FALSE, projection_matrix)
        
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "lightPos"),
                       1, light_position)
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "viewPos"),
                       1, camera_position)
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "baseColor"),
                       1, self.base_color)
        
        # Set rendering parameters
        gl.glUniform1f(gl.glGetUniformLocation(self.shader_program, "opacity"),
                     self.opacity)
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "useFresnelEffect"),
                     self.use_fresnel_effect)
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "useValueColoring"),
                     self.use_value_coloring)
        
        if surface_data.values is not None:
            gl.glUniform2fv(gl.glGetUniformLocation(self.shader_program, "valueRange"),
                          1, [np.min(surface_data.values), np.max(surface_data.values)])
        
        # Bind colormap texture
        gl.glActiveTexture(gl.GL_TEXTURE0)
        gl.glBindTexture(gl.GL_TEXTURE_1D, self.colormap_texture)
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "colormap"), 0)
        
        # Enable transparency
        gl.glEnable(gl.GL_BLEND)
        gl.glBlendFunc(gl.GL_SRC_ALPHA, gl.GL_ONE_MINUS_SRC_ALPHA)
        
        # Enable depth testing
        gl.glEnable(gl.GL_DEPTH_TEST)
        
        # Render surface
        gl.glBindVertexArray(self.vao)
        gl.glDrawElements(gl.GL_TRIANGLES, len(surface_data.indices),
                        gl.GL_UNSIGNED_INT, None)
        
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
        if self.vbo_normals:
            gl.glDeleteBuffers(1, [self.vbo_normals])
        if self.vbo_values:
            gl.glDeleteBuffers(1, [self.vbo_values])
        if self.ebo:
            gl.glDeleteBuffers(1, [self.ebo])
        if self.colormap_texture:
            gl.glDeleteTextures([self.colormap_texture])
    
    def update_settings(self, settings: Dict):
        """Update rendering settings."""
        if 'opacity' in settings:
            self.opacity = settings['opacity']
        if 'use_fresnel_effect' in settings:
            self.use_fresnel_effect = settings['use_fresnel_effect']
        if 'base_color' in settings:
            self.base_color = np.array(settings['base_color'])
        if 'use_value_coloring' in settings:
            self.use_value_coloring = settings['use_value_coloring']