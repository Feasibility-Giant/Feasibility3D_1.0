# freecad_openfoam/visualization/gl_renderer.py

import OpenGL.GL as gl
import OpenGL.GL.shaders as shaders
import numpy as np
from PySide2.QtOpenGL import QGLWidget
from PySide2.QtCore import Qt
import logging

logger = logging.getLogger(__name__)

class GLRenderer(QGLWidget):
    """
    Core OpenGL renderer for fluid visualization.
    Handles shader management, buffer operations, and render pipeline.
    """
    
    # Vertex shader for basic rendering
    VERTEX_SHADER = """
    #version 330
    layout(location = 0) in vec3 position;
    layout(location = 1) in vec3 normal;
    layout(location = 2) in vec4 color;
    
    uniform mat4 model;
    uniform mat4 view;
    uniform mat4 projection;
    
    out vec3 fragNormal;
    out vec4 fragColor;
    out vec3 fragPos;
    
    void main() {
        fragPos = vec3(model * vec4(position, 1.0));
        fragNormal = mat3(transpose(inverse(model))) * normal;
        fragColor = color;
        gl_Position = projection * view * model * vec4(position, 1.0);
    }
    """
    
    # Fragment shader for basic rendering
    FRAGMENT_SHADER = """
    #version 330
    in vec3 fragNormal;
    in vec4 fragColor;
    in vec3 fragPos;
    
    uniform vec3 lightPos;
    uniform vec3 viewPos;
    
    out vec4 outColor;
    
    void main() {
        // Ambient
        float ambientStrength = 0.2;
        vec3 ambient = ambientStrength * vec3(1.0);
        
        // Diffuse
        vec3 norm = normalize(fragNormal);
        vec3 lightDir = normalize(lightPos - fragPos);
        float diff = max(dot(norm, lightDir), 0.0);
        vec3 diffuse = diff * vec3(1.0);
        
        // Specular
        float specularStrength = 0.5;
        vec3 viewDir = normalize(viewPos - fragPos);
        vec3 reflectDir = reflect(-lightDir, norm);
        float spec = pow(max(dot(viewDir, reflectDir), 0.0), 32);
        vec3 specular = specularStrength * spec * vec3(1.0);
        
        vec3 result = (ambient + diffuse + specular) * fragColor.rgb;
        outColor = vec4(result, fragColor.a);
    }
    """
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.shader_program = None
        self.vao = None
        self.vbo = None
        self.ebo = None
        
        # View matrices
        self.model_matrix = np.identity(4, dtype=np.float32)
        self.view_matrix = np.identity(4, dtype=np.float32)
        self.projection_matrix = np.identity(4, dtype=np.float32)
        
        # Camera properties
        self.camera_position = np.array([0.0, 0.0, 5.0], dtype=np.float32)
        self.camera_target = np.array([0.0, 0.0, 0.0], dtype=np.float32)
        self.camera_up = np.array([0.0, 1.0, 0.0], dtype=np.float32)
        
        # Light properties
        self.light_position = np.array([5.0, 5.0, 5.0], dtype=np.float32)
        
    def initializeGL(self):
        """Initialize OpenGL context and shaders."""
        try:
            # Create and compile shaders
            vertex_shader = shaders.compileShader(self.VERTEX_SHADER, gl.GL_VERTEX_SHADER)
            fragment_shader = shaders.compileShader(self.FRAGMENT_SHADER, gl.GL_FRAGMENT_SHADER)
            
            # Create shader program
            self.shader_program = shaders.compileProgram(vertex_shader, fragment_shader)
            
            # Generate VAO
            self.vao = gl.glGenVertexArrays(1)
            gl.glBindVertexArray(self.vao)
            
            # Enable depth testing
            gl.glEnable(gl.GL_DEPTH_TEST)
            
            logger.info("OpenGL initialization successful")
            
        except Exception as e:
            logger.error(f"Failed to initialize OpenGL: {str(e)}")
            raise
            
    def resizeGL(self, width, height):
        """Handle window resize events."""
        gl.glViewport(0, 0, width, height)
        aspect_ratio = width / float(height)
        self.update_projection_matrix(45.0, aspect_ratio, 0.1, 100.0)
        
    def paintGL(self):
        """Main render function."""
        gl.glClear(gl.GL_COLOR_BUFFER_BIT | gl.GL_DEPTH_BUFFER_BIT)
        gl.glUseProgram(self.shader_program)
        
        # Update uniforms
        gl.glUniformMatrix4fv(
            gl.glGetUniformLocation(self.shader_program, "model"),
            1, gl.GL_FALSE, self.model_matrix
        )
        gl.glUniformMatrix4fv(
            gl.glGetUniformLocation(self.shader_program, "view"),
            1, gl.GL_FALSE, self.view_matrix
        )
        gl.glUniformMatrix4fv(
            gl.glGetUniformLocation(self.shader_program, "projection"),
            1, gl.GL_FALSE, self.projection_matrix
        )
        
        # Update lighting uniforms
        gl.glUniform3fv(
            gl.glGetUniformLocation(self.shader_program, "lightPos"),
            1, self.light_position
        )
        gl.glUniform3fv(
            gl.glGetUniformLocation(self.shader_program, "viewPos"),
            1, self.camera_position
        )
        
    def update_projection_matrix(self, fov, aspect, near, far):
        """Update the projection matrix."""
        self.projection_matrix = self.perspective_matrix(fov, aspect, near, far)
        
    def update_view_matrix(self):
        """Update the view matrix based on camera position."""
        self.view_matrix = self.look_at_matrix(
            self.camera_position,
            self.camera_target,
            self.camera_up
        )
        
    @staticmethod
    def perspective_matrix(fov, aspect, near, far):
        """Create a perspective projection matrix."""
        f = 1.0 / np.tan(np.radians(fov) / 2.0)
        matrix = np.zeros((4, 4), dtype=np.float32)
        
        matrix[0, 0] = f / aspect
        matrix[1, 1] = f
        matrix[2, 2] = (far + near) / (near - far)
        matrix[2, 3] = 2.0 * far * near / (near - far)
        matrix[3, 2] = -1.0
        
        return matrix
        
    @staticmethod
    def look_at_matrix(eye, target, up):
        """Create a view matrix."""
        z_axis = -normalize(target - eye)
        x_axis = normalize(np.cross(up, z_axis))
        y_axis = np.cross(z_axis, x_axis)
        
        matrix = np.identity(4, dtype=np.float32)
        matrix[0, :3] = x_axis
        matrix[1, :3] = y_axis
        matrix[2, :3] = z_axis
        matrix[0, 3] = -np.dot(x_axis, eye)
        matrix[1, 3] = -np.dot(y_axis, eye)
        matrix[2, 3] = -np.dot(z_axis, eye)
        
        return matrix
        
    def create_buffer(self, data, target):
        """Create an OpenGL buffer."""
        buffer = gl.glGenBuffers(1)
        gl.glBindBuffer(target, buffer)
        gl.glBufferData(target, data.nbytes, data, gl.GL_STATIC_DRAW)
        return buffer
        
    def update_buffer(self, buffer, data, target):
        """Update an existing OpenGL buffer."""
        gl.glBindBuffer(target, buffer)
        gl.glBufferData(target, data.nbytes, data, gl.GL_STATIC_DRAW)
        
def normalize(v):
    """Normalize a vector."""
    norm = np.linalg.norm(v)
    if norm == 0:
        return v
    return v / norm