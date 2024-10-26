# feasibility3d_cfd/core/animation.py
import os
import time
import vtk
from PySide import QtCore
from .vtk_handler import VtkHandler

class AnimationController(QtCore.QObject):
    """Controls the animation of CFD simulation timesteps"""
    
    timestep_changed = QtCore.Signal(int)  # Signal for updating UI
    animation_finished = QtCore.Signal()    # Signal when animation completes

    def __init__(self):
        super().__init__()
        self.vtk_handler = VtkHandler()
        self.timer = QtCore.QTimer()
        self.timer.timeout.connect(self.update_timestep)
        
        self.current_timestep = 0
        self.total_timesteps = 0
        self.timestep_files = []
        self.fps = 24  # Default frames per second
        self.is_playing = False
        self.actors = []

    def load_timestep_directory(self, directory):
        """Load all VTK files from a directory"""
        self.timestep_files = []
        for file in sorted(os.listdir(directory)):
            if file.endswith('.vtk'):
                self.timestep_files.append(os.path.join(directory, file))
        
        self.total_timesteps = len(self.timestep_files)
        self.current_timestep = 0
        return self.total_timesteps > 0

    def set_fps(self, fps):
        """Set animation frames per second"""
        self.fps = max(1, min(fps, 60))  # Limit FPS between 1 and 60
        if self.is_playing:
            self.timer.setInterval(1000 // self.fps)

    def play(self):
        """Start the animation"""
        if not self.is_playing and self.total_timesteps > 0:
            self.is_playing = True
            self.timer.start(1000 // self.fps)

    def pause(self):
        """Pause the animation"""
        self.is_playing = False
        self.timer.stop()

    def stop(self):
        """Stop the animation and reset to beginning"""
        self.pause()
        self.current_timestep = 0
        self.clear_visualization()
        self.timestep_changed.emit(0)

    def clear_visualization(self):
        """Remove all actors from the renderer"""
        for actor in self.actors:
            self.vtk_handler.renderer.RemoveActor(actor)
        self.actors.clear()
        self.vtk_handler.render_window.Render()

    def update_timestep(self):
        """Update the visualization for the current timestep"""
        if self.current_timestep >= self.total_timesteps:
            self.stop()
            self.animation_finished.emit()
            return

        # Clear previous timestep
        self.clear_visualization()

        # Load and visualize current timestep
        vtk_data = self.vtk_handler.load_vtk_file(self.timestep_files[self.current_timestep])
        
        # Create visualization elements for the current timestep
        self._visualize_timestep(vtk_data)
        
        # Update the display
        self.vtk_handler.render_window.Render()
        
        # Emit signal for UI update
        self.timestep_changed.emit(self.current_timestep)
        
        # Move to next timestep
        self.current_timestep += 1

    def _visualize_timestep(self, vtk_data):
        """Create visualization for a single timestep"""
        # Velocity vectors
        vectors = self.vtk_handler.create_velocity_vectors(vtk_data)
        vector_mapper = vtk.vtkPolyDataMapper()
        vector_mapper.SetInputData(vectors)
        vector_actor = vtk.vtkActor()
        vector_actor.SetMapper(vector_mapper)
        vector_actor.GetProperty().SetColor(1, 0, 0)  # Red vectors
        
        # Velocity magnitude contours
        contours = self._create_contours(vtk_data)
        contour_mapper = vtk.vtkPolyDataMapper()
        contour_mapper.SetInputData(contours)
        contour_actor = vtk.vtkActor()
        contour_actor.SetMapper(contour_mapper)
        contour_actor.GetProperty().SetOpacity(0.7)
        
        # Add actors to renderer and tracking list
        self.actors.extend([vector_actor, contour_actor])
        for actor in self.actors:
            self.vtk_handler.renderer.AddActor(actor)

    def _create_contours(self, vtk_data):
        """Create velocity magnitude contours"""
        # Calculate velocity magnitude
        calc = vtk.vtkArrayCalculator()
        calc.SetInputData(vtk_data)
        calc.AddVectorArrayName("Velocity")
        calc.SetFunction("mag(Velocity)")
        calc.SetResultArrayName("VelocityMagnitude")
        calc.Update()
        
        # Create contours
        contours = vtk.vtkContourFilter()
        contours.SetInputConnection(calc.GetOutputPort())
        contours.GenerateValues(10, 0, 100)  # 10 contour levels from 0 to 100 m/s
        contours.Update()
        
        return contours.GetOutput()

# Update PostProcessorTaskPanel to include animation controls
class AnimationControlWidget(QtGui.QWidget):
    def __init__(self, animation_controller):
        super().__init__()
        self.animation_controller = animation_controller
        self.setup_ui()
        
        # Connect signals
        self.animation_controller.timestep_changed.connect(self.update_timestep_display)
        self.animation_controller.animation_finished.connect(self.on_animation_finished)

    def setup_ui(self):
        layout = QtGui.QVBoxLayout(self)
        
        # Controls layout
        controls_layout = QtGui.QHBoxLayout()
        
        # Play/Pause button
        self.play_button = QtGui.QPushButton("Play")
        self.play_button.setCheckable(True)
        self.play_button.clicked.connect(self.toggle_play_pause)
        
        # Stop button
        self.stop_button = QtGui.QPushButton("Stop")
        self.stop_button.clicked.connect(self.animation_controller.stop)
        
        # FPS spinner
        fps_layout = QtGui.QHBoxLayout()
        fps_layout.addWidget(QtGui.QLabel("FPS:"))
        self.fps_spinner = QtGui.QSpinBox()
        self.fps_spinner.setRange(1, 60)
        self.fps_spinner.setValue(24)
        self.fps_spinner.valueChanged.connect(self.animation_controller.set_fps)
        fps_layout.addWidget(self.fps_spinner)
        
        # Progress bar
        self.progress_bar = QtGui.QProgressBar()
        self.progress_bar.setRange(0, 100)
        
        # Add widgets to layouts
        controls_layout.addWidget(self.play_button)
        controls_layout.addWidget(self.stop_button)
        controls_layout.addLayout(fps_layout)
        
        layout.addLayout(controls_layout)
        layout.addWidget(self.progress_bar)

    def toggle_play_pause(self, checked):
        if checked:
            self.play_button.setText("Pause")
            self.animation_controller.play()
        else:
            self.play_button.setText("Play")
            self.animation_controller.pause()

    def update_timestep_display(self, timestep):
        progress = (timestep / max(1, self.animation_controller.total_timesteps - 1)) * 100
        self.progress_bar.setValue(int(progress))

    def on_animation_finished(self):
        self.play_button.setChecked(False)
        self.play_button.setText("Play")