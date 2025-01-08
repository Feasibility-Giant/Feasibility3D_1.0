# freecad_openfoam/visualization/__init__.py

from .gl_renderer import GLRenderer
from .scene_manager import SceneManager
from .animation_controller import AnimationController
from .data_mapper import DataMapper

__all__ = ['GLRenderer', 'SceneManager', 'AnimationController', 'DataMapper']

# Version info
__version__ = '0.1.0'

# Initialize logging
import logging
logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)

# Handler for logging
handler = logging.StreamHandler()
handler.setLevel(logging.INFO)
formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
handler.setFormatter(formatter)
logger.addHandler(handler)

def initialize_visualization():
    """Initialize the visualization system."""
    logger.info("Initializing OpenFOAM visualization system...")
    try:
        # Check OpenGL support
        from OpenGL import GL
        logger.info(f"OpenGL Version: {GL.glGetString(GL.GL_VERSION)}")
    except ImportError:
        logger.error("OpenGL not available. Visualization system cannot be initialized.")
        return False
    
    return True
