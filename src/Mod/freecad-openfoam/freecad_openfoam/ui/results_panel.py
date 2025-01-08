# freecad_openfoam/ui/results_panel.py

from PySide2 import QtWidgets, QtCore
import FreeCAD as App
import FreeCADGui as Gui
from ..core.post_processor import PostProcessor
from ..core.state_manager import OpenFOAMStateManager  
from .style_utils import ThemeAwareWidget
from typing import Dict, Any, List, Optional
import subprocess
import os
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure


class ResultsPanelCommand:
    """Command class for Results main panel"""
    
    def __init__(self):
        self.panel = None
        self.state_manager = OpenFOAMStateManager()  # Add state manager reference
    
    def Activated(self):
        """Called when the command is run"""
        # Create new panel
        self.panel = ResultsPanel()
        
        # Get current case directory from state manager and set it
        case_dir = self.state_manager.get_case_directory()
        if case_dir:
            self.panel.set_case_directory(case_dir)
            
        self.panel.show()
    
    def GetResources(self):
        """Required method for FreeCAD commands"""
        return {
            'Pixmap': os.path.join(App.getHomePath(), "Mod", "freecad-openfoam", "freecad_openfoam", "icons", "Results.svg"),
            'MenuText': 'Results Control Panel',
            'ToolTip': 'Open the main Results control panel'
        }
    
    def IsActive(self):
        """Return True to enable the command, False to disable"""
        return True

class ResultsPanel(QtWidgets.QWidget):
    """Panel for visualizing and analyzing OpenFOAM results"""
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setAttribute(QtCore.Qt.WA_DeleteOnClose)
        self.state_manager = OpenFOAMStateManager()  
        self.post_processor = None
        self.case_dir = self.state_manager.get_case_directory()  
        self.current_field = None
        self.setup_ui()
        self.setup_matplotlib_style()
        
        # Initialize with current case directory
        if self.case_dir:
            print(f"Initializing panel with case directory: {self.case_dir}")
            self.post_processor = PostProcessor(self.case_dir)
            self.refresh_data()
        
        # Register as observer for state changes
        self.state_manager.add_observer(self)
        
        print(f"Panel initialized. Case dir: {self.case_dir}")
        if self.post_processor:
            print(f"Available fields: {self.post_processor.fields}")

    def load_case_if_exists(self):
        """Load case directory if it exists"""
        case_dir = self.state_manager.get_case_directory()
        if case_dir:
            print(f"Loading existing case: {case_dir}")
            self.set_case_directory(case_dir)
            # Update UI elements
            if hasattr(self, 'case_selector'):
                self.case_selector.setCurrentText(case_dir)
            self.refresh_data()
    
    def closeEvent(self, event):
        """Handle panel closure"""
        try:
            # Clean up resources
            if self.post_processor:
                self.post_processor = None
            
            # Remove self from state manager observers
            self.state_manager.remove_observer(self)
            
            # Reset variables
            self.case_dir = None
            self.current_field = None
            
            # Clear UI elements
            self.field_list.clear()
            self.time_selector.clear()
            
            # Accept the close event
            event.accept()
            
        except Exception as e:
            print(f"Error during panel cleanup: {e}")
            event.accept()
    
    def setup_matplotlib_style(self):
        palette = self.palette()
        if palette.color(palette.Window).lightness() < 128:  # Dark theme
            plt.style.use('dark_background')
        else:
            plt.style.use('default')
        
        # Additional matplotlib-specific styling
        additional_style = f"""
        FigureCanvas {{
            background-color: {palette.color(palette.Base).name()};
        }}
        """
        self.setStyleSheet(self.styleSheet() + additional_style)

    def setup_ui(self):
        """Create the results panel UI elements"""
        layout = QtWidgets.QVBoxLayout()

        # Time Selection
        time_group = QtWidgets.QGroupBox("Time Control")
        time_layout = QtWidgets.QHBoxLayout()
        
        self.time_selector = QtWidgets.QComboBox()
        self.time_selector.currentIndexChanged.connect(self.on_time_changed)
        time_layout.addWidget(self.time_selector)
        
        self.animate_button = QtWidgets.QPushButton("Animate")
        self.animate_button.setCheckable(True)
        self.animate_button.toggled.connect(self.toggle_animation)
        time_layout.addWidget(self.animate_button)
        
        time_group.setLayout(time_layout)
        layout.addWidget(time_group)

        # Field Selection and Visualization
        viz_splitter = QtWidgets.QSplitter(QtCore.Qt.Horizontal)
        
        # Left side - Field selection and controls
        left_widget = QtWidgets.QWidget()
        left_layout = QtWidgets.QVBoxLayout()
        
        field_group = QtWidgets.QGroupBox("Fields")
        field_layout = QtWidgets.QVBoxLayout()
        
        self.field_list = QtWidgets.QListWidget()
        self.field_list.itemSelectionChanged.connect(self.on_field_selected)
        field_layout.addWidget(self.field_list)
        
        field_group.setLayout(field_layout)
        left_layout.addWidget(field_group)
        
        # Visualization controls
        viz_group = QtWidgets.QGroupBox("Visualization")
        viz_layout = QtWidgets.QFormLayout()
        
        self.viz_type = QtWidgets.QComboBox()
        self.viz_type.addItems(["Contour", "Vector", "Surface", "Streamlines"])
        self.viz_type.currentTextChanged.connect(self.update_visualization)
        viz_layout.addRow("Type:", self.viz_type)
        
        self.color_map = QtWidgets.QComboBox()
        self.color_map.addItems(["jet", "viridis", "plasma", "coolwarm"])
        self.color_map.currentTextChanged.connect(self.update_visualization)
        viz_layout.addRow("Color Map:", self.color_map)
        
        viz_group.setLayout(viz_layout)
        left_layout.addWidget(viz_group)
        
        left_widget.setLayout(left_layout)
        viz_splitter.addWidget(left_widget)
        
        # Right side - Results visualization
        right_widget = QtWidgets.QWidget()
        right_layout = QtWidgets.QVBoxLayout()
        
        # Plot canvas
        self.figure = Figure()
        self.canvas = FigureCanvas(self.figure)
        right_layout.addWidget(self.canvas)
        
        right_widget.setLayout(right_layout)
        viz_splitter.addWidget(right_widget)
        
        layout.addWidget(viz_splitter)

        # Analysis Tools
        analysis_group = QtWidgets.QGroupBox("Analysis")
        analysis_layout = QtWidgets.QHBoxLayout()
        
        self.plot_residuals = QtWidgets.QPushButton("Plot Residuals")
        self.plot_residuals.clicked.connect(self.show_residuals)
        analysis_layout.addWidget(self.plot_residuals)
        
        self.plot_forces = QtWidgets.QPushButton("Plot Forces")
        self.plot_forces.clicked.connect(self.show_forces)
        analysis_layout.addWidget(self.plot_forces)
        
        self.calculate_stats = QtWidgets.QPushButton("Calculate Statistics")
        self.calculate_stats.clicked.connect(self.show_statistics)
        analysis_layout.addWidget(self.calculate_stats)
        
        analysis_group.setLayout(analysis_layout)
        layout.addWidget(analysis_group)

        # Add Case Directory Selection at the top
        case_group = QtWidgets.QGroupBox("Case Directory")
        case_layout = QtWidgets.QHBoxLayout()

        self.case_selector = QtWidgets.QComboBox()
        self.case_selector.setEditable(True)
        self.case_selector.currentTextChanged.connect(self.on_case_changed)
        case_layout.addWidget(self.case_selector)

        browse_button = QtWidgets.QPushButton("Browse...")
        browse_button.clicked.connect(self.browse_case_directory)
        case_layout.addWidget(browse_button)

        case_group.setLayout(case_layout)
        layout.insertWidget(0, case_group)  # Add at the top of the layout

        # Export Tools
        export_group = QtWidgets.QGroupBox("Export")
        export_layout = QtWidgets.QHBoxLayout()
        
        self.export_data = QtWidgets.QPushButton("Export Data")
        self.export_data.clicked.connect(self.export_results)
        export_layout.addWidget(self.export_data)
        
        self.generate_report = QtWidgets.QPushButton("Generate Report")
        self.generate_report.clicked.connect(self.create_report)
        export_layout.addWidget(self.generate_report)
        
        self.paraview_button = QtWidgets.QPushButton("Open in ParaView")
        self.paraview_button.clicked.connect(self.open_paraview)
        export_layout.addWidget(self.paraview_button)
        
        export_group.setLayout(export_layout)
        layout.addWidget(export_group)

        # Status Bar
        self.status_label = QtWidgets.QLabel()
        layout.addWidget(self.status_label)
        
        self.setLayout(layout)

        # Animation timer
        self.animation_timer = QtCore.QTimer()
        self.animation_timer.timeout.connect(self.advance_time)
        self.animation_timer.setInterval(1000)  # 1 second interval

    def set_case_directory(self, case_dir: str):
        """Set case directory and initialize post processor"""
        try:
            print(f"Setting case directory: {case_dir}")
            self.case_dir = case_dir
            self.post_processor = PostProcessor(case_dir)
            
            # Update UI
            if hasattr(self, 'case_selector'):
                self.case_selector.setCurrentText(case_dir)
            
            # Refresh available fields and times
            self.refresh_data()
            
            print(f"Case directory set successfully: {case_dir}")
            print(f"Available fields: {self.post_processor.fields}")
            print(f"Available times: {self.post_processor.time_dirs}")
            
            return True
        except Exception as e:
            print(f"Error setting case directory: {e}")
            return False

    
    def browse_case_directory(self):
        """Open file dialog to select case directory"""
        directory = QtWidgets.QFileDialog.getExistingDirectory(
            self,
            "Select OpenFOAM Case Directory",
            "",
            QtWidgets.QFileDialog.ShowDirsOnly
        )
        if directory:
            self.case_selector.addItem(directory)
            self.case_selector.setCurrentText(directory)

    def on_case_changed(self, case_dir):
        """Handle case directory selection change"""
        if case_dir and os.path.exists(case_dir):
            self.set_case_directory(case_dir)
            self.state_manager.add_recent_case(case_dir)
    
    def update_case_directory(self, new_path):
        """Observer method called when case directory changes"""
        if new_path != self.case_dir:
            self.set_case_directory(new_path)
    def visualize_results(self, results, mesh):
        """Visualize results on mesh"""
        try:
            doc = App.activeDocument()
            if not doc:
                return
                
            # Create results visualization
            vis_obj = self.create_results_visualization(results, mesh)
            
            # Update viewport
            Gui.activeDocument().ActiveView.fitAll()
            
        except Exception as e:
            self.status_label.setText(f"Visualization error: {str(e)}")
    
    def save_results_state(self):
        """Save current results view settings to state manager"""
        results_state = {
            "current_time": self.time_selector.currentText(),
            "current_field": self.current_field,
            "visualization": {
                "type": self.viz_type.currentText(),
                "colormap": self.color_map.currentText()
            }
        }
        self.state_manager.set_results_settings(results_state)

    def load_results_state(self):
        """Load results view settings from state manager"""
        results_state = self.state_manager.get_results_settings()
        if results_state:
            # Set time if available
            time_text = results_state.get("current_time")
            if time_text:
                index = self.time_selector.findText(time_text)
                if index >= 0:
                    self.time_selector.setCurrentIndex(index)
            
            # Set field if available
            field = results_state.get("current_field")
            if field:
                items = self.field_list.findItems(field, QtCore.Qt.MatchExactly)
                if items:
                    self.field_list.setCurrentItem(items[0])
                    self.current_field = field
            
            # Set visualization settings
            viz_settings = results_state.get("visualization", {})
            viz_type = viz_settings.get("type")
            if viz_type:
                self.viz_type.setCurrentText(viz_type)
            
            colormap = viz_settings.get("colormap")
            if colormap:
                self.color_map.setCurrentText(colormap)

    def refresh_data(self):
        """Refresh available times and fields"""
        if not self.post_processor:
            print("No post processor available")
            return

        try:
            # Update time selector
            self.time_selector.clear()
            time_dirs = ["0"] + [str(t) for t in self.post_processor.time_dirs if t != "0"]
            self.time_selector.addItems(time_dirs)
            
            # Update field list
            self.field_list.clear()
            self.field_list.addItems(self.post_processor.fields)
            print(f"Refreshed data - Fields: {self.post_processor.fields}")
            
            self.status_label.setText("Data refreshed successfully")
            
        except Exception as e:
            error_msg = f"Error refreshing data: {str(e)}"
            print(error_msg)
            self.status_label.setText(error_msg)

    def on_time_changed(self, index: int):
        """Handle time selection change"""
        if index >= 0 and self.current_field:
            self.update_visualization()

    def on_field_selected(self):
        """Handle field selection change"""
        items = self.field_list.selectedItems()
        if items:
            self.current_field = items[0].text()
            self.save_results_state()  # Add this line
            self.update_visualization()
        else:
            self.current_field = None

    def toggle_animation(self, checked):
        """Toggle animation playback"""
        if checked:
            if self.time_selector.count() > 1:
                self.animation_timer.setInterval(1000)  # 1 second interval
                self.animation_timer.start()
                self.animate_button.setText("Stop")
                print("Animation started")
            else:
                self.animate_button.setChecked(False)
                QtWidgets.QMessageBox.warning(
                    self,
                    "Animation Error",
                    "Not enough time steps for animation"
                )
        else:
            self.animation_timer.stop()
            self.animate_button.setText("Animate")
            print("Animation stopped")

    def advance_time(self):
        """Advance to next time step during animation"""
        if self.time_selector.count() > 0:
            current_index = self.time_selector.currentIndex()
            next_index = (current_index + 1) % self.time_selector.count()
            print(f"Advancing time from index {current_index} to {next_index}")
            self.time_selector.setCurrentIndex(next_index)
            
            # Update visualization for new time step
            if self.current_field:
                self.update_visualization()

    def update_visualization(self):
        """Update the visualization canvas"""
        if not self.current_field or not self.post_processor:
            return

        try:
            time = float(self.time_selector.currentText())
            field_data = self.post_processor.extract_field_data(
                self.current_field,
                time
            )
            
            if not field_data:
                return
                
            # Clear figure
            self.figure.clear()
            ax = self.figure.add_subplot(111)
            
            viz_type = self.viz_type.currentText()
            cmap = self.color_map.currentText()
            
            if self.current_field == "U" and viz_type in ["Vector", "Streamlines"]:
                if viz_type == "Vector":
                    self._plot_vector_field(ax, field_data, cmap)
                else:
                    self._plot_streamlines(ax, field_data, cmap)
            else:
                if viz_type == "Contour":
                    self._plot_contour(ax, field_data, cmap)
                elif viz_type == "Surface":
                    self._plot_surface(ax, field_data, cmap)
                    
            self.canvas.draw()
            
        except Exception as e:
            print(f"Error updating visualization: {str(e)}")
    
    def _plot_vector_field(self, ax, field_data: Dict[str, Any], cmap: str):
        """Plot vector field visualization"""
        try:
            values = np.array(field_data["values"])
            width = 40
            height = 30
            
            # Reshape the vectors into a grid
            U = values[:, 0].reshape(height, width)
            V = values[:, 1].reshape(height, width)
            
            # Create coordinate grids
            X, Y = np.meshgrid(np.linspace(0, 1, width), np.linspace(0, 1, height))
            
            # Create vector plot
            ax.quiver(X, Y, U, V)
            ax.set_title(f"{self.current_field} vector field at t={self.time_selector.currentText()}")
            ax.set_xlabel('X')
            ax.set_ylabel('Y')
            ax.grid(True)
            
        except Exception as e:
            print(f"Error in vector plot: {str(e)}")
            ax.text(0.5, 0.5, "Error plotting vector field", 
                    horizontalalignment='center')
    
    def on_time_changed(self, index: int):
        """Handle time selection change"""
        if index >= 0 and self.current_field:
            self.save_results_state()  # Add this line
            self.update_visualization()

    def _plot_contour(self, ax, field_data: Dict[str, Any], cmap: str):
        """Plot contour visualization"""
        try:
            values = np.array(field_data["values"])
            width = 40
            height = 30

            # Clear previous content
            ax.clear()
            
            # Handle field type-specific plotting
            if isinstance(values[0], (list, np.ndarray)):  # Check if vector data
                Z = np.array([np.sqrt(sum(x*x for x in v)) for v in values])  # Calculate magnitude safely
                title_suffix = "magnitude"
            else:  # Scalar fields
                Z = values.astype(float)
                title_suffix = "value"
                
            Z = Z[:width*height].reshape(height, width)
            X, Y = np.meshgrid(np.linspace(0, 1, width), np.linspace(0, 1, height))
            
            # Create contour plot
            im = ax.contourf(X, Y, Z, cmap=cmap, levels=20)
            self.figure.colorbar(im)
            ax.set_title(f"{self.current_field} {title_suffix} at t={self.time_selector.currentText()}")
            ax.set_xlabel('X')
            ax.set_ylabel('Y')
            ax.grid(True)
            
        except Exception as e:
            print(f"Error in contour plot for {self.current_field}: {str(e)}")
            print(f"Data shape: {values.shape if 'values' in locals() else 'No values'}")
            print(f"Data type: {type(values) if 'values' in locals() else 'No values'}")
            ax.clear()
            ax.text(0.5, 0.5, f"Error plotting {self.current_field}", 
                    horizontalalignment='center')

    def _plot_vector(self, ax, field_data: Dict[str, Any], cmap: str):
        """Plot vector visualization"""
        values = field_data["values"]
        if isinstance(values, list) and isinstance(values[0], list):
            # Calculate grid size from data
            total_cells = len(values)
            grid_size = int(np.sqrt(total_cells))
            
            # Reshape vector components
            U = np.array([v[0] for v in values]).reshape(grid_size, -1)
            V = np.array([v[1] for v in values]).reshape(grid_size, -1)
            
            # Create coordinate grids matching the data dimensions
            X, Y = np.meshgrid(np.linspace(0, 1, U.shape[1]), 
                            np.linspace(0, 1, U.shape[0]))
            
            # Create quiver plot
            ax.quiver(X, Y, U, V)
            ax.set_title(f"Vector plot of {self.current_field}")
            ax.set_xlabel('X')
            ax.set_ylabel('Y')
        else:
            ax.text(0.5, 0.5, "Not a vector field", 
                horizontalalignment='center')

    def _plot_surface(self, ax, field_data: Dict[str, Any], cmap: str):
        """Plot surface visualization"""
        try:
            values = np.array(field_data["values"])
            width = 40
            height = 30
            
            # Create 3D axes if not already
            if not hasattr(ax, 'get_zlim'):
                self.figure.delaxes(ax)
                # Add subplot with specific layout adjustments
                ax = self.figure.add_subplot(111, projection='3d', position=[0.1, 0.1, 0.7, 0.8])
                
            # Handle field type-specific plotting
            if isinstance(values[0], (list, np.ndarray)):  # Check if vector data
                Z = np.array([np.sqrt(sum(x*x for x in v)) for v in values])  # Calculate magnitude safely
                title_suffix = "magnitude"
            else:  # Scalar fields
                Z = values.astype(float)
                title_suffix = "value"
                
            Z = Z[:width*height].reshape(height, width)
            X, Y = np.meshgrid(np.linspace(0, 1, width), np.linspace(0, 1, height))
            
            # Clear previous content
            ax.clear()
            
            # Create surface plot
            surf = ax.plot_surface(X, Y, Z, cmap=cmap)
            
            # Add colorbar with specific position
            cbar = self.figure.colorbar(surf, ax=ax, shrink=0.8, pad=0.15)  # Adjust pad to move colorbar right
            
            ax.set_title(f"{self.current_field} {title_suffix}")
            ax.set_xlabel('X')
            ax.set_ylabel('Y')
            ax.set_zlabel(self.current_field)

            # Adjust layout to prevent overlap
            self.figure.tight_layout()

        except Exception as e:
            print(f"Error in surface plot for {self.current_field}: {str(e)}")
            print(f"Data shape: {values.shape if 'values' in locals() else 'No values'}")
            print(f"Data type: {type(values) if 'values' in locals() else 'No values'}")
            self.figure.delaxes(ax)
            ax = self.figure.add_subplot(111)
            ax.text(0.5, 0.5, f"Error plotting {self.current_field}", horizontalalignment='center')

    def _plot_streamlines(self, ax, field_data: Dict[str, Any], cmap: str):
        """Plot streamlines visualization"""
        try:
            values = np.array(field_data["values"])
            width = 40
            height = 30
            
            # Reshape the vectors into a grid
            U = values[:, 0].reshape(height, width)
            V = values[:, 1].reshape(height, width)
            
            # Create coordinate grids
            Y, X = np.mgrid[0:1:height*1j, 0:1:width*1j]
            
            # Create streamplot
            speed = np.sqrt(U*U + V*V)
            streamplot = ax.streamplot(X, Y, U, V, color=speed, cmap=cmap)
            self.figure.colorbar(streamplot.lines, label='Speed')
            
            ax.set_title(f"{self.current_field} streamlines at t={self.time_selector.currentText()}")
            ax.set_xlabel('X')
            ax.set_ylabel('Y')
            ax.grid(True)
            
        except Exception as e:
            print(f"Error in streamlines plot: {str(e)}")
            ax.text(0.5, 0.5, "Error plotting streamlines", 
                    horizontalalignment='center')

    def show_residuals(self):
        """Show solver residuals plot"""
        if not self.post_processor:
            return

        try:
            residuals = self.post_processor.calculate_residuals()
            
            self.figure.clear()
            ax = self.figure.add_subplot(111)
            
            # Check if we have residuals data
            if not residuals:
                ax.text(0.5, 0.5, "No residual data available", 
                    horizontalalignment='center')
                self.canvas.draw()
                return
                
            for field, data in residuals.items():
                if data:  # Only plot if we have data
                    times, values = zip(*data)
                    ax.semilogy(times, values, label=field, marker='o')
                    
            # Only add legend if we have plots
            if ax.get_lines():
                ax.legend()
                ax.set_xlabel('Time')
                ax.set_ylabel('Residual')
                ax.set_title('Solver Residuals')
                ax.grid(True)
            else:
                ax.text(0.5, 0.5, "No residual data available", 
                    horizontalalignment='center')
            
            self.canvas.draw()
            
        except Exception as e:
            print(f"Error plotting residuals: {str(e)}")
            self.status_label.setText(f"Error plotting residuals: {str(e)}")

    def show_forces(self):
        """Show force coefficients plot"""
        if not self.post_processor:
            return

        try:
            forces = self.post_processor.extract_force_coefficients()
            
            self.figure.clear()
            ax = self.figure.add_subplot(111)
            
            # Check if we have force data
            if not forces:
                ax.text(0.5, 0.5, "No force data available", 
                    horizontalalignment='center',
                    verticalalignment='center')
                self.canvas.draw()
                return
                
            has_data = False
            for coeff, data in forces.items():
                if data:  # Only plot if we have data
                    times, values = zip(*data)
                    ax.plot(times, values, label=coeff, marker='o', linestyle='-')
                    has_data = True
                    
            if has_data:
                ax.legend()
                ax.set_xlabel('Time')
                ax.set_ylabel('Force Coefficient')
                ax.set_title('Force Coefficients')
                ax.grid(True)
            else:
                ax.text(0.5, 0.5, "No force data available", 
                    horizontalalignment='center',
                    verticalalignment='center')
            
            self.canvas.draw()
            
        except Exception as e:
            error_msg = f"Error plotting forces: {str(e)}"
            print(error_msg)
            self.status_label.setText(error_msg)

    def show_statistics(self):
        """Show field statistics"""
        if not self.current_field or not self.post_processor:
            return

        try:
            stats = self.post_processor.calculate_statistics(self.current_field)
            
            message = (
                f"Statistics for {self.current_field}:\n\n"
                f"Minimum: {stats['min']:.6f}\n"
                f"Maximum: {stats['max']:.6f}\n"
                f"Mean: {stats['mean']:.6f}\n"
                f"Standard Deviation: {stats['std']:.6f}"
            )
            
            QtWidgets.QMessageBox.information(
                self,
                "Field Statistics",
                message
            )
            
        except Exception as e:
            self.status_label.setText(f"Error calculating statistics: {str(e)}")

    def export_results(self):
        """Export results to file"""
        if not self.post_processor:
            return

        try:
            filename, _ = QtWidgets.QFileDialog.getSaveFileName(
                self,
                "Export Results",
                "",
                "CSV Files (*.csv);;VTK Files (*.vtk)"
            )
            
            if not filename:
                return

            if filename.endswith('.csv'):
                self._export_csv(filename)
            else:
                self._export_vtk(filename)
                
            self.status_label.setText(f"Results exported to {filename}")
            
        except Exception as e:
            self.status_label.setText(f"Error exporting results: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to export results: {str(e)}"
            )

    def _export_csv(self, filename: str):
        """Export results to CSV format"""
        if not self.current_field:
            raise ValueError("No field selected")
            
        time = float(self.time_selector.currentText())
        field_data = self.post_processor.extract_field_data(
            self.current_field,
            time
        )
        
        import csv
        with open(filename, 'w', newline='') as f:
            writer = csv.writer(f)
            writer.writerow(["Time", "Location", "Value"])
            
            values = field_data["values"]
            if isinstance(values, list):
                for i, value in enumerate(values):
                    if isinstance(value, list):  # Vector
                        writer.writerow([time, i, f"({' '.join(map(str, value))})"])
                    else:  # Scalar
                        writer.writerow([time, i, value])
            else:  # Uniform value
                writer.writerow([time, "uniform", values])

    def _export_vtk(self, filename: str):
        """Export results to VTK format"""
        try:
            subprocess.run(
                ["foamToVTK", "-case", self.case_dir],
                check=True,
                capture_output=True,
                text=True
            )
            
            # Copy the generated VTK file
            vtk_dir = os.path.join(self.case_dir, "VTK")
            latest_vtk = sorted(os.listdir(vtk_dir))[-1]
            import shutil
            shutil.copy2(
                os.path.join(vtk_dir, latest_vtk),
                filename
            )
            
        except subprocess.CalledProcessError as e:
            raise Exception(f"VTK conversion failed: {e.stdout}")

    def create_report(self):
        """Generate comprehensive results report"""
        if not self.post_processor:
            return

        try:
            filename, _ = QtWidgets.QFileDialog.getSaveFileName(
                self,
                "Save Report",
                "",
                "HTML Files (*.html)"
            )
            
            if not filename:
                return
                
            # Generate report
            report_content = self._generate_report_content()
            
            with open(filename, 'w') as f:
                f.write(report_content)
                
            self.status_label.setText(f"Report generated: {filename}")
            
        except Exception as e:
            self.status_label.setText(f"Error generating report: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to generate report: {str(e)}"
            )

    def _generate_report_content(self) -> str:
        """Generate HTML report content"""
        # Basic HTML template
        html = """
        <html>
        <head>
            <title>OpenFOAM Simulation Report</title>
            <style>
                body { font-family: Arial, sans-serif; margin: 20px; }
                h1 { color: #333; }
                .section { margin: 20px 0; }
                table { border-collapse: collapse; width: 100%; }
                th, td { border: 1px solid #ddd; padding: 8px; text-align: left; }
                th { background-color: #f5f5f5; }
            </style>
        </head>
        <body>
        """
        
        # Add case information
        html += f"""
        <h1>OpenFOAM Simulation Report</h1>
        <div class="section">
            <h2>Case Information</h2>
            <p>Case Directory: {self.case_dir}</p>
            <p>Time Steps: {len(self.post_processor.time_dirs)}</p>
            <p>Available Fields: {', '.join(self.post_processor.fields)}</p>
        </div>
        """
        
        # Add field statistics
        html += """
        <div class="section">
            <h2>Field Statistics</h2>
            <table>
                <tr>
                    <th>Field</th>
                    <th>Minimum</th>
                    <th>Maximum</th>
                    <th>Mean</th>
                    <th>Std Dev</th>
                </tr>
        """
        
        for field in self.post_processor.fields:
            stats = self.post_processor.calculate_statistics(field)
            html += f"""
                <tr>
                    <td>{field}</td>
                    <td>{stats['min']:.6f}</td>
                    <td>{stats['max']:.6f}</td>
                    <td>{stats['mean']:.6f}</td>
                    <td>{stats['std']:.6f}</td>
                </tr>
            """
            
        html += """
            </table>
        </div>
        """
        
        # Add residuals plot
        residuals = self.post_processor.calculate_residuals()
        if residuals:
            html += """
            <div class="section">
                <h2>Solver Residuals</h2>
                <table>
                    <tr>
                        <th>Field</th>
                        <th>Initial Residual</th>
                        <th>Final Residual</th>
                        <th>Reduction</th>
                    </tr>
            """
            
            for field, data in residuals.items():
                initial = data[0][1]
                final = data[-1][1]
                reduction = initial / final if final != 0 else float('inf')
                html += f"""
                    <tr>
                        <td>{field}</td>
                        <td>{initial:.2e}</td>
                        <td>{final:.2e}</td>
                        <td>{reduction:.2f}</td>
                    </tr>
                """
                
            html += """
                </table>
            </div>
            """
        
        # Close HTML
        html += """
        </body>
        </html>
        """
        
        return html

    def open_paraview(self):
        """Open results in ParaView"""
        if not self.post_processor:
            return

        try:
            # Generate ParaView state file
            state_file = os.path.join(self.case_dir, "paraview_state.pvsm")
            self.post_processor.generate_paraview_state(state_file)
            
            # Launch ParaView
            subprocess.Popen(["paraview", "--state", state_file])
            
            self.status_label.setText("ParaView launched successfully")
            
        except Exception as e:
            self.status_label.setText(f"Error launching ParaView: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to launch ParaView: {str(e)}"
            )

# Register the panel as a FreeCAD dialog
Gui.addCommand('OpenFOAM_Results_Panel', ResultsPanelCommand())