# freecad_openfoam/visualization/data_mapper.py

from typing import Dict, List, Tuple, Optional, Union, Any
import numpy as np
from enum import Enum, auto
import logging
from dataclasses import dataclass
import scipy.interpolate as interp

logger = logging.getLogger(__name__)

class FieldType(Enum):
    """Types of fields that can be visualized."""
    SCALAR = auto()
    VECTOR = auto()
    TENSOR = auto()

@dataclass
class VisualizationField:
    """Represents a field prepared for visualization."""
    name: str
    type: FieldType
    data: np.ndarray
    bounds: Tuple[float, float]
    metadata: Dict[str, Any] = None

class DataMapper:
    """Maps OpenFOAM solver data to visualization-ready formats."""
    
    def __init__(self):
        self.interpolators: Dict[str, Any] = {}
        self.cache: Dict[str, Any] = {}
        self.current_time: float = 0.0
        
        # Visualization settings
        self.settings = {
            'interpolation_method': 'linear',
            'vector_scale': 1.0,
            'scalar_range_padding': 0.05,
            'streamline_density': 1.0,
            'particle_density': 1.0
        }
    
    def map_scalar_field(self, field_data: np.ndarray, field_name: str,
                        mesh_points: np.ndarray) -> VisualizationField:
        """Map a scalar field to visualization format."""
        try:
            # Ensure data is in correct format
            field_data = np.asarray(field_data, dtype=np.float32)
            
            # Calculate field bounds with padding
            data_min = np.min(field_data)
            data_max = np.max(field_data)
            padding = (data_max - data_min) * self.settings['scalar_range_padding']
            bounds = (data_min - padding, data_max + padding)
            
            # Create interpolator if needed
            if field_name not in self.interpolators:
                self.interpolators[field_name] = self._create_interpolator(
                    mesh_points, field_data
                )
            
            return VisualizationField(
                name=field_name,
                type=FieldType.SCALAR,
                data=field_data,
                bounds=bounds,
                metadata={'mesh_points': mesh_points}
            )
            
        except Exception as e:
            logger.error(f"Error mapping scalar field {field_name}: {str(e)}")
            raise
    
    def map_vector_field(self, field_data: np.ndarray, field_name: str,
                        mesh_points: np.ndarray) -> VisualizationField:
        """Map a vector field to visualization format."""
        try:
            # Ensure data is in correct format
            field_data = np.asarray(field_data, dtype=np.float32)
            
            # Calculate vector magnitudes
            magnitudes = np.linalg.norm(field_data, axis=1)
            bounds = (np.min(magnitudes), np.max(magnitudes))
            
            # Scale vectors
            scaled_data = field_data * self.settings['vector_scale']
            
            return VisualizationField(
                name=field_name,
                type=FieldType.VECTOR,
                data=scaled_data,
                bounds=bounds,
                metadata={
                    'mesh_points': mesh_points,
                    'original_magnitudes': magnitudes
                }
            )
            
        except Exception as e:
            logger.error(f"Error mapping vector field {field_name}: {str(e)}")
            raise
    
    def generate_streamlines(self, vector_field: VisualizationField,
                           start_points: np.ndarray,
                           max_steps: int = 1000,
                           step_size: float = 0.1) -> np.ndarray:
        """Generate streamlines from a vector field."""
        try:
            mesh_points = vector_field.metadata['mesh_points']
            vector_data = vector_field.data
            
            streamlines = []
            for start_point in start_points:
                streamline = self._trace_streamline(
                    start_point, mesh_points, vector_data,
                    max_steps, step_size
                )
                streamlines.append(streamline)
            
            return np.array(streamlines)
            
        except Exception as e:
            logger.error(f"Error generating streamlines: {str(e)}")
            raise
    
    def generate_particle_positions(self, flow_field: VisualizationField,
                                  num_particles: int) -> np.ndarray:
        """Generate particle positions based on flow field."""
        try:
            mesh_points = flow_field.metadata['mesh_points']
            
            # Generate random initial positions
            bounds_min = np.min(mesh_points, axis=0)
            bounds_max = np.max(mesh_points, axis=0)
            
            positions = np.random.uniform(
                bounds_min, bounds_max,
                size=(num_particles, 3)
            )
            
            return positions
            
        except Exception as e:
            logger.error(f"Error generating particle positions: {str(e)}")
            raise
    
    def map_multiphase_data(self, phase_data: Dict[str, np.ndarray],
                           mesh_points: np.ndarray) -> Dict[str, VisualizationField]:
        """Map multiphase flow data to visualization format."""
        try:
            viz_fields = {}
            
            for phase_name, phase_fields in phase_data.items():
                phase_viz_fields = {}
                
                # Map each field for the phase
                for field_name, field_data in phase_fields.items():
                    if field_data.shape[-1] == 3:  # Vector field
                        viz_field = self.map_vector_field(
                            field_data, f"{phase_name}_{field_name}",
                            mesh_points
                        )
                    else:  # Scalar field
                        viz_field = self.map_scalar_field(
                            field_data, f"{phase_name}_{field_name}",
                            mesh_points
                        )
                    
                    phase_viz_fields[field_name] = viz_field
                
                viz_fields[phase_name] = phase_viz_fields
            
            return viz_fields
            
        except Exception as e:
            logger.error(f"Error mapping multiphase data: {str(e)}")
            raise
    
    def map_mesh_data(self, vertices: np.ndarray, faces: np.ndarray,
                     cell_data: Optional[Dict[str, np.ndarray]] = None) -> Dict:
        """Map mesh data to visualization format."""
        try:
            mesh_data = {
                'vertices': vertices.astype(np.float32),
                'faces': faces.astype(np.int32),
                'bounds': {
                    'min': np.min(vertices, axis=0),
                    'max': np.max(vertices, axis=0)
                }
            }
            
            if cell_data:
                mesh_data['cell_data'] = {}
                for name, data in cell_data.items():
                    if data.ndim == 2 and data.shape[1] == 3:
                        field = self.map_vector_field(data, name, vertices)
                    else:
                        field = self.map_scalar_field(data, name, vertices)
                    mesh_data['cell_data'][name] = field
            
            return mesh_data
            
        except Exception as e:
            logger.error(f"Error mapping mesh data: {str(e)}")
            raise
    
    def _create_interpolator(self, points: np.ndarray,
                           values: np.ndarray) -> Any:
        """Create an interpolator for field data."""
        method = self.settings['interpolation_method']
        
        if method == 'linear':
            return interp.LinearNDInterpolator(points, values)
        elif method == 'rbf':
            return interp.RBFInterpolator(points, values)
        else:
            raise ValueError(f"Unsupported interpolation method: {method}")
    
    def _trace_streamline(self, start_point: np.ndarray,
                         mesh_points: np.ndarray,
                         vector_data: np.ndarray,
                         max_steps: int,
                         step_size: float) -> np.ndarray:
        """Trace a single streamline through the vector field."""
        points = [start_point]
        point = start_point.copy()
        
        for _ in range(max_steps):
            # Find nearest mesh points and interpolate velocity
            distances = np.linalg.norm(mesh_points - point, axis=1)
            nearest_indices = np.argsort(distances)[:4]
            
            weights = 1.0 / (distances[nearest_indices] + 1e-10)
            weights /= np.sum(weights)
            
            velocity = np.sum(vector_data[nearest_indices] * weights[:, np.newaxis], axis=0)
            
            # Update position
            point = point + velocity * step_size
            points.append(point.copy())
            
            # Check if we've left the domain
            if not self._is_point_in_bounds(point, mesh_points):
                break
        
        return np.array(points)
    
    def _is_point_in_bounds(self, point: np.ndarray,
                           mesh_points: np.ndarray,
                           padding: float = 0.1) -> bool:
        """Check if a point is within the mesh bounds."""
        bounds_min = np.min(mesh_points, axis=0) - padding
        bounds_max = np.max(mesh_points, axis=0) + padding
        
        return np.all(point >= bounds_min) and np.all(point <= bounds_max)
    
    def update_settings(self, settings: Dict[str, Any]) -> None:
        """Update visualization settings."""
        self.settings.update(settings)
        
        # Clear cached interpolators if interpolation method changes
        if 'interpolation_method' in settings:
            self.interpolators.clear()
    
    def clear_cache(self) -> None:
        """Clear cached data."""
        self.cache.clear()
        self.interpolators.clear()

class PiggingDataMapper(DataMapper):
    """Specialized data mapper for pigging simulations."""
    
    def __init__(self):
        super().__init__()
        self.pig_trajectory = []
    
    def map_pig_data(self, position: np.ndarray, orientation: np.ndarray,
                     pig_geometry: Dict) -> Dict:
        """Map pig position and orientation data."""
        try:
            self.pig_trajectory.append(position.copy())
            
            return {
                'position': position,
                'orientation': orientation,
                'geometry': pig_geometry,
                'trajectory': np.array(self.pig_trajectory)
            }
            
        except Exception as e:
            logger.error(f"Error mapping pig data: {str(e)}")
            raise
    
    def clear_trajectory(self) -> None:
        """Clear the stored pig trajectory."""
        self.pig_trajectory.clear()

class SpillDataMapper(DataMapper):
    """Specialized data mapper for spill simulations."""
    
    def map_spill_data(self, spill_volume: np.ndarray,
                       crack_geometry: Dict,
                       surface_tension: Optional[np.ndarray] = None) -> Dict:
        """Map spill-specific data."""
        try:
            spill_data = {
                'volume': self.map_scalar_field(
                    spill_volume, 'spill_volume',
                    crack_geometry['vertices']
                ),
                'crack_geometry': crack_geometry
            }
            
            if surface_tension is not None:
                spill_data['surface_tension'] = self.map_scalar_field(
                    surface_tension, 'surface_tension',
                    crack_geometry['vertices']
                )
            
            return spill_data
            
        except Exception as e:
            logger.error(f"Error mapping spill data: {str(e)}")
            raise