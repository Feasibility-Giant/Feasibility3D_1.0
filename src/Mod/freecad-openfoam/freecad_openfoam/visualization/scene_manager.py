# freecad_openfoam/visualization/scene_manager.py

import numpy as np
from typing import Dict, List, Optional, Union
import logging
from dataclasses import dataclass
from enum import Enum, auto
import uuid

logger = logging.getLogger(__name__)

class ObjectType(Enum):
    """Types of visual objects that can be managed in the scene."""
    FLUID = auto()
    SOLID = auto()
    PARTICLE_SYSTEM = auto()
    STREAMLINE = auto()
    BOUNDARY = auto()
    VECTOR_FIELD = auto()
    MESH = auto()

@dataclass
class Transform:
    """Represents position, rotation, and scale of scene objects."""
    position: np.ndarray = np.array([0.0, 0.0, 0.0])
    rotation: np.ndarray = np.array([0.0, 0.0, 0.0])  # Euler angles in degrees
    scale: np.ndarray = np.array([1.0, 1.0, 1.0])
    
    def get_matrix(self) -> np.ndarray:
        """Generate 4x4 transformation matrix."""
        # Translation matrix
        trans_mat = np.eye(4)
        trans_mat[:3, 3] = self.position
        
        # Rotation matrices (XYZ order)
        rot_x = np.eye(4)
        rot_y = np.eye(4)
        rot_z = np.eye(4)
        
        cx = np.cos(np.radians(self.rotation[0]))
        sx = np.sin(np.radians(self.rotation[0]))
        cy = np.cos(np.radians(self.rotation[1]))
        sy = np.sin(np.radians(self.rotation[1]))
        cz = np.cos(np.radians(self.rotation[2]))
        sz = np.sin(np.radians(self.rotation[2]))
        
        rot_x[1:3, 1:3] = np.array([[cx, -sx], [sx, cx]])
        rot_y[::2, ::2] = np.array([[cy, -sy], [sy, cy]])
        rot_z[:2, :2] = np.array([[cz, -sz], [sz, cz]])
        
        # Scale matrix
        scale_mat = np.diag(np.append(self.scale, 1.0))
        
        # Combined transformation
        return trans_mat @ rot_z @ rot_y @ rot_x @ scale_mat

class SceneNode:
    """Represents a node in the scene graph."""
    
    def __init__(self, 
                 name: str,
                 obj_type: ObjectType,
                 transform: Optional[Transform] = None,
                 parent: Optional['SceneNode'] = None):
        self.id = str(uuid.uuid4())
        self.name = name
        self.obj_type = obj_type
        self.transform = transform or Transform()
        self.parent = parent
        self.children: List[SceneNode] = []
        self.visible = True
        self.data: Dict = {}  # Store object-specific data
        
        # Rendering data
        self.vertex_buffer = None
        self.index_buffer = None
        self.normal_buffer = None
        self.color_buffer = None
        
    def add_child(self, child: 'SceneNode') -> None:
        """Add a child node to this node."""
        child.parent = self
        self.children.append(child)
        
    def remove_child(self, child: 'SceneNode') -> None:
        """Remove a child node from this node."""
        if child in self.children:
            child.parent = None
            self.children.remove(child)
            
    def get_world_transform(self) -> np.ndarray:
        """Calculate the world transformation matrix for this node."""
        local_matrix = self.transform.get_matrix()
        if self.parent is None:
            return local_matrix
        return self.parent.get_world_transform() @ local_matrix
    
    def update_buffers(self, vertices: np.ndarray, indices: np.ndarray,
                      normals: Optional[np.ndarray] = None,
                      colors: Optional[np.ndarray] = None) -> None:
        """Update the rendering buffers for this node."""
        self.vertex_buffer = vertices
        self.index_buffer = indices
        self.normal_buffer = normals
        self.color_buffer = colors

class SceneManager:
    """Manages the scene graph and rendering state."""
    
    def __init__(self):
        self.root = SceneNode("root", ObjectType.SOLID)
        self.nodes: Dict[str, SceneNode] = {}  # Map of node IDs to nodes
        self.active_camera_node: Optional[SceneNode] = None
        self.selected_node: Optional[SceneNode] = None
        
        # Render settings
        self.render_settings = {
            'wireframe': False,
            'show_normals': False,
            'show_grid': True,
            'background_color': np.array([0.2, 0.2, 0.2, 1.0]),
            'ambient_light': np.array([0.2, 0.2, 0.2]),
            'diffuse_light': np.array([0.7, 0.7, 0.7]),
            'specular_light': np.array([1.0, 1.0, 1.0])
        }
        
    def create_node(self, name: str, obj_type: ObjectType,
                   parent: Optional[SceneNode] = None,
                   transform: Optional[Transform] = None) -> SceneNode:
        """Create a new scene node."""
        if parent is None:
            parent = self.root
            
        node = SceneNode(name, obj_type, transform)
        parent.add_child(node)
        self.nodes[node.id] = node
        logger.info(f"Created scene node: {name} ({node.id})")
        return node
    
    def remove_node(self, node_id: str) -> None:
        """Remove a node from the scene."""
        if node_id in self.nodes:
            node = self.nodes[node_id]
            if node.parent:
                node.parent.remove_child(node)
            del self.nodes[node_id]
            logger.info(f"Removed scene node: {node.name} ({node_id})")
    
    def get_node(self, node_id: str) -> Optional[SceneNode]:
        """Get a node by its ID."""
        return self.nodes.get(node_id)
    
    def get_nodes_by_type(self, obj_type: ObjectType) -> List[SceneNode]:
        """Get all nodes of a specific type."""
        return [node for node in self.nodes.values() if node.obj_type == obj_type]
    
    def update_transform(self, node_id: str, transform: Transform) -> None:
        """Update a node's transform."""
        if node := self.nodes.get(node_id):
            node.transform = transform
            logger.debug(f"Updated transform for node: {node.name}")
    
    def set_camera(self, camera_node: SceneNode) -> None:
        """Set the active camera for rendering."""
        if camera_node.obj_type != ObjectType.CAMERA:
            raise ValueError("Node must be a camera type")
        self.active_camera_node = camera_node
        
    def get_visible_nodes(self) -> List[SceneNode]:
        """Get all visible nodes in the scene."""
        return [node for node in self.nodes.values() if node.visible]
    
    def update_render_settings(self, settings: Dict) -> None:
        """Update render settings."""
        self.render_settings.update(settings)
        logger.debug("Updated render settings")
        
    def create_fluid_node(self, name: str, parent: Optional[SceneNode] = None) -> SceneNode:
        """Create a node specifically for fluid visualization."""
        node = self.create_node(name, ObjectType.FLUID, parent)
        # Add fluid-specific data structures
        node.data.update({
            'density_field': None,
            'velocity_field': None,
            'pressure_field': None,
            'phase_field': None
        })
        return node
    
    def create_particle_system(self, name: str, parent: Optional[SceneNode] = None) -> SceneNode:
        """Create a particle system node."""
        node = self.create_node(name, ObjectType.PARTICLE_SYSTEM, parent)
        node.data.update({
            'particles': [],
            'max_particles': 10000,
            'particle_size': 0.1,
            'emission_rate': 100
        })
        return node
    
    def create_streamline_node(self, name: str, parent: Optional[SceneNode] = None) -> SceneNode:
        """Create a streamline visualization node."""
        node = self.create_node(name, ObjectType.STREAMLINE, parent)
        node.data.update({
            'start_points': [],
            'line_segments': [],
            'line_width': 1.0,
            'max_steps': 1000
        })
        return node
    
    def update_node_data(self, node_id: str, data: Dict) -> None:
        """Update node-specific data."""
        if node := self.nodes.get(node_id):
            node.data.update(data)
            logger.debug(f"Updated data for node: {node.name}")
    
    def traverse_scene(self, callback: callable, node: Optional[SceneNode] = None) -> None:
        """Traverse the scene graph and apply a callback to each node."""
        if node is None:
            node = self.root
            
        callback(node)
        for child in node.children:
            self.traverse_scene(callback, child)
    
    def cleanup(self) -> None:
        """Clean up resources used by the scene."""
        for node in self.nodes.values():
            node.vertex_buffer = None
            node.index_buffer = None
            node.normal_buffer = None
            node.color_buffer = None
        self.nodes.clear()
        self.root.children.clear()
        logger.info("Scene cleaned up")