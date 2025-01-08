# freecad_openfoam/ui/visualization_panel.py

import FreeCAD as App
import FreeCADGui as Gui
from PySide2.QtWidgets import (QWidget, QVBoxLayout, QHBoxLayout, QTabWidget,
                              QPushButton, QLabel, QSpinBox, QDoubleSpinBox,
                              QComboBox, QCheckBox, QSlider, QGroupBox,
                              QColorDialog, QFileDialog)
from PySide2.QtCore import Qt, QTimer
from PySide2.QtOpenGL import QGLWidget
import numpy as np
from typing import Dict, Optional
import logging

from ..visualization.gl_renderer import GLRenderer
from ..visualization.scene_manager import SceneManager
from ..visualization.animation_controller import AnimationController
from ..visualization.data_mapper import DataMapper
from ..visualization.visualization_types.particle_render import ParticleRenderer
from ..visualization.visualization_types.volume_render import VolumeRenderer
from ..visualization.visualization_types.surface_render import SurfaceRenderer
from ..visualization.visualization_types.streamline_render import StreamlineRenderer

logger = logging.getLogger(__name__)

class VisualizationPanel:
    """Main visualization panel for OpenFOAM workbench."""
    
    def __init__(self):
        self.form = QWidget()
        self.form.setWindowTitle("Flow Visualization")
        
        # Initialize visualization components
        self.scene_manager = SceneManager()
        self.animation_controller = AnimationController(self.scene_manager)
        self.data_mapper = DataMapper()
        
        # Initialize renderers
        self.gl_renderer = GLRenderer()
        self.particle_renderer = ParticleRenderer()
        self.volume_renderer = VolumeRenderer()
        self.surface_renderer = SurfaceRenderer()
        self.streamline_renderer = StreamlineRenderer()
        
        # Setup UI
        self.setup_ui()
        
        # Animation timer
        self.animation_timer = QTimer()
        self.animation_timer.timeout.connect(self.update_animation)
        self.last_frame_time = 0
        
        # Current visualization state
        self.current_visualization = None
        self.visualization_settings = {
            'particle': {},
            'volume': {},
            'surface': {},
            'streamline': {}
        }
        
    def setup_ui(self):
        """Setup the user interface."""
        main_layout = QVBoxLayout(self.form)
        
        # OpenGL Widget
        self.gl_widget = QGLWidget()
        main_layout.addWidget(self.gl_widget, stretch=1)
        
        # Tabs for different controls
        tabs = QTabWidget()
        main_layout.addWidget(tabs)
        
        # General controls
        general_tab = self._create_general_controls()
        tabs.addTab(general_tab, "General")
        
        # Visualization-specific controls
        particle_tab = self._create_particle_controls()
        tabs.addTab(particle_tab, "Particles")
        
        volume_tab = self._create_volume_controls()
        tabs.addTab(volume_tab, "Volume")
        
        surface_tab = self._create_surface_controls()
        tabs.addTab(surface_tab, "Surface")
        
        streamline_tab = self._create_streamline_controls()
        tabs.addTab(streamline_tab, "Streamlines")
        
        # Timeline controls at bottom
        timeline_controls = self._create_timeline_controls()
        main_layout.addLayout(timeline_controls)
        
    def _create_general_controls(self) -> QWidget:
        """Create general visualization controls."""
        widget = QWidget()
        layout = QVBoxLayout(widget)
        
        # View controls group
        view_group = QGroupBox("View Controls")
        view_layout = QVBoxLayout(view_group)
        
        # Camera controls
        camera_layout = QHBoxLayout()
        camera_layout.addWidget(QLabel("Camera:"))
        camera_preset = QComboBox()
        camera_preset.addItems(["Front", "Top", "Side", "Isometric"])
        camera_preset.currentTextChanged.connect(self.set_camera_preset)
        camera_layout.addWidget(camera_preset)
        view_layout.addLayout(camera_layout)
        
        # Background color
        bg_color_btn = QPushButton("Background Color")
        bg_color_btn.clicked.connect(self.change_background_color)
        view_layout.addWidget(bg_color_btn)
        
        layout.addWidget(view_group)
        
        # Data controls group
        data_group = QGroupBox("Data Controls")
        data_layout = QVBoxLayout(data_group)
        
        # Visualization type
        viz_type = QComboBox()
        viz_type.addItems(["Particles", "Volume", "Surface", "Streamlines"])
        viz_type.currentTextChanged.connect(self.change_visualization_type)
        data_layout.addWidget(viz_type)
        
        # Data range controls
        range_layout = QHBoxLayout()
        range_layout.addWidget(QLabel("Data Range:"))
        self.min_range = QDoubleSpinBox()
        self.max_range = QDoubleSpinBox()
        range_layout.addWidget(self.min_range)
        range_layout.addWidget(self.max_range)
        data_layout.addLayout(range_layout)
        
        layout.addWidget(data_group)
        
        return widget
        
    def _create_particle_controls(self) -> QWidget:
        """Create particle visualization controls."""
        widget = QWidget()
        layout = QVBoxLayout(widget)
        
        # Particle system controls
        particle_group = QGroupBox("Particle System")
        particle_layout = QVBoxLayout(particle_group)
        
        # Number of particles
        num_particles_layout = QHBoxLayout()
        num_particles_layout.addWidget(QLabel("Number of Particles:"))
        num_particles = QSpinBox()
        num_particles.setRange(100, 1000000)
        num_particles.setValue(10000)
        num_particles.valueChanged.connect(
            lambda v: self.update_visualization_settings('particle', {'num_particles': v})
        )
        num_particles_layout.addWidget(num_particles)
        particle_layout.addLayout(num_particles_layout)
        
        # Particle size
        size_layout = QHBoxLayout()
        size_layout.addWidget(QLabel("Particle Size:"))
        particle_size = QDoubleSpinBox()
        particle_size.setRange(0.001, 1.0)
        particle_size.setValue(0.02)
        particle_size.valueChanged.connect(
            lambda v: self.update_visualization_settings('particle', {'particle_size': v})
        )
        size_layout.addWidget(particle_size)
        particle_layout.addLayout(size_layout)
        
        # Motion blur
        motion_blur = QCheckBox("Motion Blur")
        motion_blur.setChecked(True)
        motion_blur.stateChanged.connect(
            lambda v: self.update_visualization_settings('particle', {'use_motion_blur': bool(v)})
        )
        particle_layout.addWidget(motion_blur)
        
        layout.addWidget(particle_group)
        
        return widget
        
    def _create_volume_controls(self) -> QWidget:
        """Create volume visualization controls."""
        widget = QWidget()
        layout = QVBoxLayout(widget)
        
        # Volume rendering controls
        volume_group = QGroupBox("Volume Rendering")
        volume_layout = QVBoxLayout(volume_group)
        
        # Transfer function
        transfer_btn = QPushButton("Edit Transfer Function")
        transfer_btn.clicked.connect(self.edit_transfer_function)
        volume_layout.addWidget(transfer_btn)
        
        # Quality controls
        quality_layout = QHBoxLayout()
        quality_layout.addWidget(QLabel("Quality:"))
        quality = QComboBox()
        quality.addItems(["Low", "Medium", "High"])
        quality.setCurrentText("Medium")
        quality.currentTextChanged.connect(
            lambda v: self.update_visualization_settings('volume', {'quality': v})
        )
        quality_layout.addWidget(quality)
        volume_layout.addLayout(quality_layout)
        
        # Gradient shading
        gradient_shading = QCheckBox("Gradient Shading")
        gradient_shading.setChecked(True)
        gradient_shading.stateChanged.connect(
            lambda v: self.update_visualization_settings('volume', {'use_gradient_shading': bool(v)})
        )
        volume_layout.addWidget(gradient_shading)
        
        layout.addWidget(volume_group)
        
        return widget
        
    def _create_surface_controls(self) -> QWidget:
        """Create surface visualization controls."""
        widget = QWidget()
        layout = QVBoxLayout(widget)
        
        # Surface rendering controls
        surface_group = QGroupBox("Surface Rendering")
        surface_layout = QVBoxLayout(surface_group)
        
        # Opacity control
        opacity_layout = QHBoxLayout()
        opacity_layout.addWidget(QLabel("Opacity:"))
        opacity = QSlider(Qt.Horizontal)
        opacity.setRange(0, 100)
        opacity.setValue(80)
        opacity.valueChanged.connect(
            lambda v: self.update_visualization_settings('surface', {'opacity': v/100})
        )
        opacity_layout.addWidget(opacity)
        surface_layout.addLayout(opacity_layout)
        
        # Fresnel effect
        fresnel = QCheckBox("Fresnel Effect")
        fresnel.setChecked(True)
        fresnel.stateChanged.connect(
            lambda v: self.update_visualization_settings('surface', {'use_fresnel_effect': bool(v)})
        )
        surface_layout.addWidget(fresnel)
        
        # Surface color
        color_btn = QPushButton("Surface Color")
        color_btn.clicked.connect(
            lambda: self.change_surface_color()
        )
        surface_layout.addWidget(color_btn)
        
        layout.addWidget(surface_group)
        
        return widget
        
    def _create_streamline_controls(self) -> QWidget:
        """Create streamline visualization controls."""
        widget = QWidget()
        layout = QVBoxLayout(widget)
        
        # Streamline controls
        streamline_group = QGroupBox("Streamlines")
        streamline_layout = QVBoxLayout(streamline_group)
        
        # Number of streamlines
        num_lines_layout = QHBoxLayout()
        num_lines_layout.addWidget(QLabel("Number of Streamlines:"))
        num_lines = QSpinBox()
        num_lines.setRange(10, 1000)
        num_lines.setValue(100)
        num_lines.valueChanged.connect(
            lambda v: self.update_visualization_settings('streamline', {'num_streamlines': v})
        )
        num_lines_layout.addWidget(num_lines)
        streamline_layout.addLayout(num_lines_layout)
        
        # Seeding method
        seed_layout = QHBoxLayout()
        seed_layout.addWidget(QLabel("Seeding Method:"))
        seed_method = QComboBox()
        seed_method.addItems(["Uniform", "Random", "Planar"])
        seed_method.currentTextChanged.connect(
            lambda v: self.update_visualization_settings('streamline', {'seeding_method': v})
        )
        seed_layout.addWidget(seed_method)
        streamline_layout.addLayout(seed_layout)
        
        # Animation controls
        animation = QCheckBox("Animate Streamlines")
        animation.setChecked(True)
        animation.stateChanged.connect(
            lambda v: self.update_visualization_settings('streamline', {'use_animation': bool(v)})
        )
        streamline_layout.addWidget(animation)
        
        layout.addWidget(streamline_group)
        
        return widget
        
    def _create_timeline_controls(self) -> QHBoxLayout:
        """Create timeline and animation controls."""
        layout = QHBoxLayout()
        
        # Playback controls
        self.play_button = QPushButton("Play")
        self.play_button.setCheckable(True)
        self.play_button.clicked.connect(self.toggle_animation)
        layout.addWidget(self.play_button)
        
        reset_button = QPushButton("Reset")
        reset_button.clicked.connect(self.reset_animation)
        layout.addWidget(reset_button)
        
        # Timeline slider
        self.timeline_slider = QSlider(Qt.Horizontal)
        self.timeline_slider.setRange(0, 100)
        self.timeline_slider.valueChanged.connect(self.timeline_changed)
        layout.addWidget(self.timeline_slider)
        
        # Time display
        self.time_label = QLabel("0.00 s")
        layout.addWidget(self.time_label)
        
        return layout
        
    def toggle_animation(self):
        """Toggle animation playback."""
        if self.play_button.isChecked():
            self.animation_timer.start(16)  # ~60 FPS
        else:
            self.animation_timer.stop()
            
    def reset_animation(self):
        """Reset animation to start."""
        self.animation_controller.stop()
        self.timeline_slider.setValue(0)
        self.update_visualization()
        
    def timeline_changed(self, value):
        """Handle timeline slider value change."""
        time = value / 100.0 * self.animation_controller.end_time
        self.animation_controller.seek(time)
        self.time_label.setText(f"{time:.2f} s")
        self.update_visualization()
        
    def update_animation(self):
        """Update animation frame."""
        current_time = App.getSystem().getClockTime()
        delta_time = current_time - self.last_frame_time
        self.last_frame_time = current_time
        
        self.animation_controller.update_animation(delta_time)
        self.timeline_slider.setValue(
            int(self.animation_controller.current_time / 
                self.animation_controller.end_time * 100)
        )
        self.update_visualization()
        
    def update_visualization(self):
        """Update the current visualization."""
        if self.current_visualization == "Particles":
            self._update_particle_visualization()
        elif self.current_visualization == "Volume":
            self._update_volume_visualization()
        elif self.current_visualization == "Surface":
            self._update_surface_visualization()
        elif self.current_visualization == "Streamlines":
            self._update_streamline_visualization()
        
        self.gl_widget.update()
        
    def _update_particle_visualization(self):
        """Update particle visualization."""
        settings = self.visualization_settings['particle']
        self.particle_renderer.update_settings(settings)
        if 'particle_system' in self.scene_manager.nodes:
            self.particle_renderer.update_particles(
                self.scene_manager.nodes['particle_system'].data['particles'],
                self.animation_controller.delta_time
            )
            
    def _update_volume_visualization(self):
        """Update volume visualization."""
        settings = self.visualization_settings['volume']
        self.volume_renderer.update_settings(settings)
        if 'volume_data' in self.scene_manager.nodes:
            self.volume_renderer.update_volume_data(
                self.scene_manager.nodes['volume_data'].data['volume']
            )

    def _update_surface_visualization(self):
        """Update surface visualization."""
        settings = self.visualization_settings['surface']
        self.surface_renderer.update_settings(settings)
        if 'surface_data' in self.scene_manager.nodes:
            self.surface_renderer.update_surface_data(
                self.scene_manager.nodes['surface_data'].data['surface']
            )

    def _update_streamline_visualization(self):
        """Update streamline visualization."""
        settings = self.visualization_settings['streamline']
        self.streamline_renderer.update_settings(settings)
        if 'velocity_field' in self.scene_manager.nodes:
            velocity_data = self.scene_manager.nodes['velocity_field'].data
            
            if 'num_streamlines' in settings:
                # Generate new seed points
                seeds = self.streamline_renderer.generate_seed_points(
                    velocity_data['bounds'],
                    settings['num_streamlines'],
                    settings.get('seeding_method', 'uniform')
                )
                
                # Generate new streamlines
                streamlines = self.streamline_renderer.generate_streamlines(
                    velocity_data['field'],
                    velocity_data['grid_points'],
                    seeds
                )
                
                self.streamline_renderer.update_streamline_data(streamlines)

    def change_visualization_type(self, viz_type: str):
        """Change the current visualization type."""
        self.current_visualization = viz_type
        self.update_visualization()

    def update_visualization_settings(self, viz_type: str, settings: Dict):
        """Update settings for a specific visualization type."""
        self.visualization_settings[viz_type].update(settings)
        if viz_type == self.current_visualization:
            self.update_visualization()

    def set_camera_preset(self, preset: str):
        """Set camera to a preset position."""
        if preset == "Front":
            self.gl_renderer.set_camera_position(np.array([0, 0, 5]))
        elif preset == "Top":
            self.gl_renderer.set_camera_position(np.array([0, 5, 0]))
        elif preset == "Side":
            self.gl_renderer.set_camera_position(np.array([5, 0, 0]))
        elif preset == "Isometric":
            self.gl_renderer.set_camera_position(np.array([3, 3, 3]))

    def change_background_color(self):
        """Change the background color using color picker."""
        color = QColorDialog.getColor()
        if color.isValid():
            self.gl_renderer.set_background_color(
                np.array([color.red(), color.green(), color.blue()]) / 255.0
            )
            self.gl_widget.update()

    def edit_transfer_function(self):
        """Open transfer function editor."""
        # This would open a separate dialog for editing the transfer function
        # Implementation depends on specific requirements
        pass

    def change_surface_color(self):
        """Change the surface color using color picker."""
        color = QColorDialog.getColor()
        if color.isValid():
            self.update_visualization_settings('surface', {
                'base_color': [
                    color.red() / 255.0,
                    color.green() / 255.0,
                    color.blue() / 255.0
                ]
            })

    def load_data(self, data_type: str, file_path: Optional[str] = None):
        """Load data for visualization."""
        if file_path is None:
            file_path, _ = QFileDialog.getOpenFileName(
                self.form,
                "Load Data",
                "",
                "OpenFOAM Data (*.foam);;All Files (*.*)"
            )
            if not file_path:
                return

        try:
            if data_type == "Particles":
                self._load_particle_data(file_path)
            elif data_type == "Volume":
                self._load_volume_data(file_path)
            elif data_type == "Surface":
                self._load_surface_data(file_path)
            elif data_type == "Streamlines":
                self._load_velocity_data(file_path)
                
        except Exception as e:
            logger.error(f"Error loading {data_type} data: {str(e)}")
            # Show error message to user

    def _load_particle_data(self, file_path: str):
        """Load particle data from file."""
        # Implementation depends on file format and data structure
        pass

    def _load_volume_data(self, file_path: str):
        """Load volume data from file."""
        # Implementation depends on file format and data structure
        pass

    def _load_surface_data(self, file_path: str):
        """Load surface data from file."""
        # Implementation depends on file format and data structure
        pass

    def _load_velocity_data(self, file_path: str):
        """Load velocity field data from file."""
        # Implementation depends on file format and data structure
        pass

    def closeEvent(self, event):
        """Handle panel close event."""
        # Stop animation
        self.animation_timer.stop()
        
        # Cleanup renderers
        self.particle_renderer.cleanup()
        self.volume_renderer.cleanup()
        self.surface_renderer.cleanup()
        self.streamline_renderer.cleanup()
        self.gl_renderer.cleanup()
        
        # Accept the close event
        event.accept()
    
    def _load_particle_data(self, file_path: str):
        """Load particle data from OpenFOAM lagrangian data."""
        try:
            # Create OpenFOAM case reader
            from ..core.openfoam_interface import OpenFOAMCase
            case = OpenFOAMCase(file_path)
            
            # Get time directories
            time_dirs = case.get_time_dirs()
            if not time_dirs:
                raise ValueError("No time directories found")
            
            # Initialize particle data structures
            particle_data = {
                'positions': [],
                'velocities': [],
                'diameters': [],
                'densities': [],
                'phases': []
            }
            
            # Read particle data for each time step
            for time_dir in time_dirs:
                clouds = case.get_lagrangian_clouds(time_dir)
                for cloud in clouds:
                    positions = cloud.positions
                    velocities = cloud.velocities
                    diameters = cloud.diameters
                    densities = cloud.densities
                    phases = cloud.phases
                    
                    particle_data['positions'].append(positions)
                    particle_data['velocities'].append(velocities)
                    particle_data['diameters'].append(diameters)
                    particle_data['densities'].append(densities)
                    particle_data['phases'].append(phases)
            
            # Create particle system node
            node = self.scene_manager.create_node(
                'particle_system',
                'PARTICLE_SYSTEM'
            )
            
            # Store particle data in node
            node.data['particles'] = particle_data
            node.data['time_steps'] = time_dirs
            
            # Initialize particle renderer
            max_particles = max(len(pos) for pos in particle_data['positions'])
            self.visualization_settings['particle'].update({
                'num_particles': max_particles,
                'particle_size': 0.02
            })
            
            logger.info(f"Loaded particle data from {file_path}")
            self.update_visualization()
            
        except Exception as e:
            logger.error(f"Error loading particle data: {str(e)}")
            raise

    def _load_volume_data(self, file_path: str):
        """Load volume field data from OpenFOAM case."""
        try:
            from ..core.openfoam_interface import OpenFOAMCase
            case = OpenFOAMCase(file_path)
            
            # Get time directories
            time_dirs = case.get_time_dirs()
            if not time_dirs:
                raise ValueError("No time directories found")
            
            # Get mesh data
            mesh = case.get_mesh()
            cell_centers = mesh.cell_centers
            
            # Initialize volume data structures
            volume_data = {
                'scalar_fields': {},
                'vector_fields': {}
            }
            
            # Read field data for each time step
            for time_dir in time_dirs:
                # Read scalar fields (e.g., pressure, temperature)
                scalar_fields = case.get_scalar_fields(time_dir)
                for name, field in scalar_fields.items():
                    if name not in volume_data['scalar_fields']:
                        volume_data['scalar_fields'][name] = []
                    volume_data['scalar_fields'][name].append(field)
                
                # Read vector fields (e.g., velocity)
                vector_fields = case.get_vector_fields(time_dir)
                for name, field in vector_fields.items():
                    if name not in volume_data['vector_fields']:
                        volume_data['vector_fields'][name] = []
                    volume_data['vector_fields'][name].append(field)
            
            # Create volume data node
            node = self.scene_manager.create_node(
                'volume_data',
                'VOLUME'
            )
            
            # Store volume data in node
            node.data['volume'] = volume_data
            node.data['mesh'] = mesh
            node.data['time_steps'] = time_dirs
            node.data['bounds'] = {
                'min': np.min(cell_centers, axis=0),
                'max': np.max(cell_centers, axis=0)
            }
            
            # Initialize volume renderer settings
            self.visualization_settings['volume'].update({
                'quality': 'Medium',
                'use_gradient_shading': True
            })
            
            logger.info(f"Loaded volume data from {file_path}")
            self.update_visualization()
            
        except Exception as e:
            logger.error(f"Error loading volume data: {str(e)}")
            raise

    def _load_surface_data(self, file_path: str):
        """Load surface field data from OpenFOAM case."""
        try:
            from ..core.openfoam_interface import OpenFOAMCase
            case = OpenFOAMCase(file_path)
            
            # Get time directories
            time_dirs = case.get_time_dirs()
            if not time_dirs:
                raise ValueError("No time directories found")
            
            # Get mesh data
            mesh = case.get_mesh()
            boundary_patches = mesh.boundary_patches
            
            # Initialize surface data structures
            surface_data = {
                'patches': {},
                'fields': {}
            }
            
            # Read surface data for each time step
            for time_dir in time_dirs:
                # Read patch field data
                for patch_name, patch in boundary_patches.items():
                    if patch_name not in surface_data['patches']:
                        surface_data['patches'][patch_name] = {
                            'faces': patch.faces,
                            'points': patch.points,
                            'normals': patch.face_normals
                        }
                    
                    # Read field values on patches
                    field_data = case.get_boundary_fields(time_dir, patch_name)
                    for field_name, values in field_data.items():
                        if field_name not in surface_data['fields']:
                            surface_data['fields'][field_name] = {}
                        if patch_name not in surface_data['fields'][field_name]:
                            surface_data['fields'][field_name][patch_name] = []
                        surface_data['fields'][field_name][patch_name].append(values)
            
            # Create surface data node
            node = self.scene_manager.create_node(
                'surface_data',
                'SURFACE'
            )
            
            # Store surface data in node
            node.data['surface'] = surface_data
            node.data['time_steps'] = time_dirs
            
            # Calculate bounds
            all_points = np.concatenate([patch['points'] 
                                       for patch in surface_data['patches'].values()])
            node.data['bounds'] = {
                'min': np.min(all_points, axis=0),
                'max': np.max(all_points, axis=0)
            }
            
            # Initialize surface renderer settings
            self.visualization_settings['surface'].update({
                'opacity': 0.8,
                'use_fresnel_effect': True,
                'base_color': [0.2, 0.6, 1.0]
            })
            
            logger.info(f"Loaded surface data from {file_path}")
            self.update_visualization()
            
        except Exception as e:
            logger.error(f"Error loading surface data: {str(e)}")
            raise

    def _load_velocity_data(self, file_path: str):
        """Load velocity field data for streamline visualization."""
        try:
            from ..core.openfoam_interface import OpenFOAMCase
            case = OpenFOAMCase(file_path)
            
            # Get time directories
            time_dirs = case.get_time_dirs()
            if not time_dirs:
                raise ValueError("No time directories found")
            
            # Get mesh data
            mesh = case.get_mesh()
            cell_centers = mesh.cell_centers
            
            # Initialize velocity data structure
            velocity_data = []
            
            # Read velocity field for each time step
            for time_dir in time_dirs:
                U = case.get_vector_field(time_dir, 'U')  # Velocity field
                velocity_data.append(U)
            
            # Create regular grid for interpolation
            x_unique = np.unique(cell_centers[:, 0])
            y_unique = np.unique(cell_centers[:, 1])
            z_unique = np.unique(cell_centers[:, 2])
            
            # Create velocity field node
            node = self.scene_manager.create_node(
                'velocity_field',
                'VECTOR_FIELD'
            )
            
            # Store velocity data in node
            node.data['field'] = np.array(velocity_data)
            node.data['grid_points'] = (x_unique, y_unique, z_unique)
            node.data['time_steps'] = time_dirs
            node.data['bounds'] = {
                'min': np.min(cell_centers, axis=0),
                'max': np.max(cell_centers, axis=0)
            }
            
            # Initialize streamline renderer settings
            self.visualization_settings['streamline'].update({
                'num_streamlines': 100,
                'seeding_method': 'uniform',
                'use_animation': True
            })
            
            logger.info(f"Loaded velocity data from {file_path}")
            self.update_visualization()
            
        except Exception as e:
            logger.error(f"Error loading velocity data: {str(e)}")
            raise