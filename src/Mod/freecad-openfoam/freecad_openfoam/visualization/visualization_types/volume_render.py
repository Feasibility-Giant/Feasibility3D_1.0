# freecad_openfoam/visualization/visualization_types/volume_render.py

import numpy as np
import OpenGL.GL as gl
import OpenGL.GL.shaders as shaders
from typing import Dict, Optional, Tuple, List
import logging
from dataclasses import dataclass

logger = logging.getLogger(__name__)

@dataclass
class VolumeData:
    """Represents volumetric data for rendering."""
    data: np.ndarray  # 3D numpy array containing scalar field
    dimensions: Tuple[int, int, int]
    bounds: Tuple[np.ndarray, np.ndarray]  # (min_bound, max_bound)
    value_range: Tuple[float, float]
    
    # Optional fields for multi-field volumes
    velocity_field: Optional[np.ndarray] = None
    pressure_field: Optional[np.ndarray] = None
    temperature_field: Optional[np.ndarray] = None

class VolumeRenderer:
    """Handles volume rendering using 3D textures and ray marching."""
    
    # Vertex shader for volume rendering
    VOLUME_VS = """
    #version 330
    layout(location = 0) in vec3 position;
    
    uniform mat4 model;
    uniform mat4 view;
    uniform mat4 projection;
    
    out vec3 fragPosition;
    
    void main() {
        fragPosition = position;
        gl_Position = projection * view * model * vec4(position, 1.0);
    }
    """
    
    # Fragment shader for volume rendering using ray marching
    VOLUME_FS = """
    #version 330
    in vec3 fragPosition;
    
    uniform sampler3D volumeTexture;
    uniform vec3 volumeDimensions;
    uniform vec3 cameraPosition;
    uniform vec2 valueRange;
    uniform vec4 transferFunction[256];  // Color lookup table
    uniform float stepSize;
    uniform bool useGradientShading;
    
    out vec4 fragColor;
    
    // Transfer function lookup
    vec4 getColor(float value) {
        float normalizedValue = (value - valueRange.x) / (valueRange.y - valueRange.x);
        int index = int(normalizedValue * 255.0);
        return transferFunction[clamp(index, 0, 255)];
    }
    
    // Gradient computation for lighting
    vec3 calculateGradient(vec3 pos) {
        vec3 step = 1.0 / volumeDimensions;
        
        float gx = texture(volumeTexture, pos + vec3(step.x, 0, 0)).r -
                  texture(volumeTexture, pos - vec3(step.x, 0, 0)).r;
        float gy = texture(volumeTexture, pos + vec3(0, step.y, 0)).r -
                  texture(volumeTexture, pos - vec3(0, step.y, 0)).r;
        float gz = texture(volumeTexture, pos + vec3(0, 0, step.z)).r -
                  texture(volumeTexture, pos - vec3(0, 0, step.z)).r;
                  
        return normalize(vec3(gx, gy, gz));
    }
    
    void main() {
        // Ray setup
        vec3 rayOrigin = fragPosition;
        vec3 rayDirection = normalize(fragPosition - cameraPosition);
        
        // Ray marching
        vec4 result = vec4(0.0);
        vec3 position = rayOrigin;
        
        for(int i = 0; i < 512; i++) {  // Maximum number of steps
            // Check if ray has left volume
            if(any(lessThan(position, vec3(-1.0))) || any(greaterThan(position, vec3(1.0)))) {
                break;
            }
            
            // Convert position to texture coordinates
            vec3 texCoord = (position + 1.0) * 0.5;
            
            // Sample volume
            float value = texture(volumeTexture, texCoord).r;
            vec4 color = getColor(value);
            
            // Apply gradient-based shading if enabled
            if(useGradientShading && color.a > 0.01) {
                vec3 gradient = calculateGradient(texCoord);
                vec3 lightDir = normalize(vec3(1.0, 1.0, 1.0));
                float diffuse = max(dot(gradient, lightDir), 0.0);
                color.rgb *= (0.3 + 0.7 * diffuse);  // Ambient + diffuse
            }
            
            // Front-to-back composition
            color.rgb *= color.a;
            result = result + color * (1.0 - result.a);
            
            // Early ray termination
            if(result.a >= 0.95) {
                break;
            }
            
            // Step along ray
            position += rayDirection * stepSize;
        }
        
        fragColor = result;
    }
    """
    
    def __init__(self):
        self.shader_program = None
        self.vao = None
        self.vbo = None
        self.volume_texture = None
        
        # Rendering settings
        self.step_size = 0.01
        self.use_gradient_shading = True
        self.transfer_function = self._create_default_transfer_function()
        
        # Initialize OpenGL resources
        self._initialize_gl()
        
    def _initialize_gl(self):
        """Initialize OpenGL resources and shaders."""
        try:
            # Compile shaders
            vertex_shader = shaders.compileShader(self.VOLUME_VS, gl.GL_VERTEX_SHADER)
            fragment_shader = shaders.compileShader(self.VOLUME_FS, gl.GL_FRAGMENT_SHADER)
            
            # Create shader program
            self.shader_program = shaders.compileProgram(vertex_shader, fragment_shader)
            
            # Create cube vertices for volume bounds
            vertices = np.array([
                # Front face
                -1, -1, 1,
                1, -1, 1,
                1, 1, 1,
                -1, 1, 1,
                # Back face
                -1, -1, -1,
                1, -1, -1,
                1, 1, -1,
                -1, 1, -1
            ], dtype=np.float32)
            
            # Create VAO and VBO
            self.vao = gl.glGenVertexArrays(1)
            gl.glBindVertexArray(self.vao)
            
            self.vbo = gl.glGenBuffers(1)
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo)
            gl.glBufferData(gl.GL_ARRAY_BUFFER, vertices.nbytes, vertices, gl.GL_STATIC_DRAW)
            
            gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
            gl.glEnableVertexAttribArray(0)
            
            logger.info("Volume renderer initialized successfully")
            
        except Exception as e:
            logger.error(f"Failed to initialize volume renderer: {str(e)}")
            raise
            
    def _create_default_transfer_function(self) -> np.ndarray:
        """Create default transfer function for volume rendering."""
        transfer_function = np.zeros((256, 4), dtype=np.float32)
        
        # Create a rainbow-like gradient
        for i in range(256):
            if i < 64:  # Blue to cyan
                transfer_function[i] = [0, i/64, 1, i/64]
            elif i < 128:  # Cyan to green
                transfer_function[i] = [0, 1, 1-(i-64)/64, (i+64)/128]
            elif i < 192:  # Green to yellow
                transfer_function[i] = [(i-128)/64, 1, 0, (i+64)/256]
            else:  # Yellow to red
                transfer_function[i] = [1, 1-(i-192)/64, 0, 1]
                
        return transfer_function
        
    def set_transfer_function(self, colors: np.ndarray):
        """Set custom transfer function."""
        if colors.shape != (256, 4):
            raise ValueError("Transfer function must have shape (256, 4)")
        self.transfer_function = colors.astype(np.float32)
        
    def update_volume_data(self, volume_data: VolumeData):
        """Update the volume texture with new data."""
        try:
            # Create 3D texture if it doesn't exist
            if self.volume_texture is None:
                self.volume_texture = gl.glGenTextures(1)
                
            gl.glBindTexture(gl.GL_TEXTURE_3D, self.volume_texture)
            
            # Set texture parameters
            gl.glTexParameteri(gl.GL_TEXTURE_3D, gl.GL_TEXTURE_MIN_FILTER, gl.GL_LINEAR)
            gl.glTexParameteri(gl.GL_TEXTURE_3D, gl.GL_TEXTURE_MAG_FILTER, gl.GL_LINEAR)
            gl.glTexParameteri(gl.GL_TEXTURE_3D, gl.GL_TEXTURE_WRAP_S, gl.GL_CLAMP_TO_BORDER)
            gl.glTexParameteri(gl.GL_TEXTURE_3D, gl.GL_TEXTURE_WRAP_T, gl.GL_CLAMP_TO_BORDER)
            gl.glTexParameteri(gl.GL_TEXTURE_3D, gl.GL_TEXTURE_WRAP_R, gl.GL_CLAMP_TO_BORDER)
            
            # Upload volume data
            gl.glTexImage3D(gl.GL_TEXTURE_3D, 0, gl.GL_R32F,
                          volume_data.dimensions[0],
                          volume_data.dimensions[1],
                          volume_data.dimensions[2],
                          0, gl.GL_RED, gl.GL_FLOAT,
                          volume_data.data)
                          
        except Exception as e:
            logger.error(f"Failed to update volume texture: {str(e)}")
            raise
            
    def render(self, model_matrix: np.ndarray, view_matrix: np.ndarray,
              projection_matrix: np.ndarray, camera_position: np.ndarray,
              volume_data: VolumeData):
        """Render the volume."""
        gl.glUseProgram(self.shader_program)
        
        # Set uniforms
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "model"),
                            1, gl.GL_FALSE, model_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "view"),
                            1, gl.GL_FALSE, view_matrix)
        gl.glUniformMatrix4fv(gl.glGetUniformLocation(self.shader_program, "projection"),
                            1, gl.GL_FALSE, projection_matrix)
                            
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "cameraPosition"),
                       1, camera_position)
        gl.glUniform3fv(gl.glGetUniformLocation(self.shader_program, "volumeDimensions"),
                       1, volume_data.dimensions)
        gl.glUniform2fv(gl.glGetUniformLocation(self.shader_program, "valueRange"),
                       1, volume_data.value_range)
                       
        # Set transfer function
        gl.glUniform4fv(gl.glGetUniformLocation(self.shader_program, "transferFunction"),
                       256, self.transfer_function)
                       
        # Set rendering parameters
        gl.glUniform1f(gl.glGetUniformLocation(self.shader_program, "stepSize"),
                     self.step_size)
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "useGradientShading"),
                     self.use_gradient_shading)
                     
        # Bind volume texture
        gl.glActiveTexture(gl.GL_TEXTURE0)
        gl.glBindTexture(gl.GL_TEXTURE_3D, self.volume_texture)
        gl.glUniform1i(gl.glGetUniformLocation(self.shader_program, "volumeTexture"), 0)
        
        # Enable back-to-front rendering
        gl.glEnable(gl.GL_BLEND)
        gl.glBlendFunc(gl.GL_SRC_ALPHA, gl.GL_ONE_MINUS_SRC_ALPHA)
        
        # Render volume bounds
        gl.glBindVertexArray(self.vao)
        gl.glDrawArrays(gl.GL_TRIANGLE_FAN, 0, 4)  # Front face
        gl.glDrawArrays(gl.GL_TRIANGLE_FAN, 4, 4)  # Back face
        
        # Cleanup
        gl.glDisable(gl.GL_BLEND)
        gl.glUseProgram(0)
        
    def cleanup(self):
        """Clean up OpenGL resources."""
        if self.shader_program:
            gl.glDeleteProgram(self.shader_program)
        if self.vao:
            gl.glDeleteVertexArrays(1, [self.vao])
        if self.vbo:
            gl.glDeleteBuffers(1, [self.vbo])
        if self.volume_texture:
            gl.glDeleteTextures([self.volume_texture])

    def create_transfer_function_for_multiphase(self, phase_colors: Dict[str, np.ndarray]) -> np.ndarray:
        """Create a transfer function for multiphase visualization."""
        transfer_function = np.zeros((256, 4), dtype=np.float32)
        
        # Assign colors to different phases
        for phase_name, color in phase_colors.items():
            if phase_name == 'water':
                start_idx, end_idx = 0, 85
            elif phase_name == 'oil':
                start_idx, end_idx = 85, 170
            else:  # gas or other phases
                start_idx, end_idx = 170, 255
                
            # Create smooth transition
            for i in range(start_idx, end_idx + 1):
                alpha = (i - start_idx) / (end_idx - start_idx)
                transfer_function[i] = color * alpha
                transfer_function[i, 3] = alpha  # Set alpha
                
        return transfer_function
        
    def update_settings(self, settings: Dict):
        """Update rendering settings."""
        if 'step_size' in settings:
            self.step_size = settings['step_size']
        if 'use_gradient_shading' in settings:
            self.use_gradient_shading = settings['use_gradient_shading']