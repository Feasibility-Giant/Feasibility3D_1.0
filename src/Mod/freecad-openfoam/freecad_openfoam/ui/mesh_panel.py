# freecad_openfoam/ui/mesh_panel.py

from PySide2 import QtWidgets, QtCore
import FreeCAD as App
import FreeCADGui as Gui
from ..core.mesh_generator import MeshGenerator
import MeshPart
import Mesh
from .style_utils import ThemeAwareWidget
from typing import Dict, Any, Optional
from ..core.state_manager import OpenFOAMStateManager 
import os

class MeshPanelCommand:
    """Command class for Mesh main panel"""
    
    def GetResources(self):
        """Required method for FreeCAD commands"""
        return {
            'Pixmap': os.path.join(App.getHomePath(), "Mod", "freecad-openfoam", "freecad_openfoam", "icons", "Mesh.svg"),
            'MenuText': 'Mesh Control Panel',
            'ToolTip': 'Open the main Mesh control panel'
        }
    
    def Activated(self):
        """Called when the command is run"""
        self.panel = MeshPanel()
        self.panel.show()
    
    def IsActive(self):
        """Return True to enable the command, False to disable"""
        return True

class MeshPanel(QtWidgets.QWidget):
    """Panel for OpenFOAM mesh generation settings"""
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.state_manager = OpenFOAMStateManager()  
        self.mesh_generator = None
        self.case_dir = self.state_manager.get_case_directory()  
        self.setup_ui()
        self.load_case_if_exists()  
        self.state_manager.add_observer(self)  
    
    def load_case_if_exists(self):
        """Load case directory from state manager if it exists"""
        case_dir = self.state_manager.get_case_directory()
        if case_dir:
            self.set_case_directory(case_dir)

    def setup_ui(self):
        """Create the mesh panel UI elements"""
        layout = QtWidgets.QVBoxLayout()

        # Base Mesh Settings
        base_group = QtWidgets.QGroupBox("Base Mesh Settings")
        base_layout = QtWidgets.QFormLayout()
        
        # Cell counts
        self.cells_x = QtWidgets.QSpinBox()
        self.cells_x.setRange(1, 1000)
        self.cells_x.setValue(20)
        base_layout.addRow("Cells X:", self.cells_x)
        
        self.cells_y = QtWidgets.QSpinBox()
        self.cells_y.setRange(1, 1000)
        self.cells_y.setValue(20)
        base_layout.addRow("Cells Y:", self.cells_y)
        
        self.cells_z = QtWidgets.QSpinBox()
        self.cells_z.setRange(1, 1000)
        self.cells_z.setValue(20)
        base_layout.addRow("Cells Z:", self.cells_z)
        
        # Domain padding
        self.padding = QtWidgets.QDoubleSpinBox()
        self.padding.setRange(0, 100)
        self.padding.setValue(10)
        self.padding.setSuffix("%")
        base_layout.addRow("Domain Padding:", self.padding)
        
        base_group.setLayout(base_layout)
        layout.addWidget(base_group)

        # Snappy Settings
        snappy_group = QtWidgets.QGroupBox("SnappyHexMesh Settings")
        snappy_layout = QtWidgets.QFormLayout()
        
        # Feature angle
        self.feature_angle = QtWidgets.QDoubleSpinBox()
        self.feature_angle.setRange(0, 180)
        self.feature_angle.setValue(30)
        snappy_layout.addRow("Feature Angle:", self.feature_angle)
        
        # Refinement levels
        self.max_refinement = QtWidgets.QSpinBox()
        self.max_refinement.setRange(0, 10)
        self.max_refinement.setValue(2)
        snappy_layout.addRow("Max Refinement Level:", self.max_refinement)
        
        # Surface layers
        self.n_layers = QtWidgets.QSpinBox()
        self.n_layers.setRange(0, 20)
        self.n_layers.setValue(3)
        snappy_layout.addRow("Number of Layers:", self.n_layers)
        
        # Layer controls
        self.expansion_ratio = QtWidgets.QDoubleSpinBox()
        self.expansion_ratio.setRange(1, 2)
        self.expansion_ratio.setValue(1.2)
        self.expansion_ratio.setSingleStep(0.1)
        snappy_layout.addRow("Expansion Ratio:", self.expansion_ratio)
        
        snappy_group.setLayout(snappy_layout)
        layout.addWidget(snappy_group)

        # Quality Controls
        quality_group = QtWidgets.QGroupBox("Mesh Quality Controls")
        quality_layout = QtWidgets.QFormLayout()
        
        # Non-orthogonality
        self.max_non_ortho = QtWidgets.QSpinBox()
        self.max_non_ortho.setRange(0, 180)
        self.max_non_ortho.setValue(65)
        quality_layout.addRow("Max Non-Orthogonality:", self.max_non_ortho)
        
        # Skewness
        self.max_skewness = QtWidgets.QDoubleSpinBox()
        self.max_skewness.setRange(0, 1)
        self.max_skewness.setValue(0.4)
        self.max_skewness.setSingleStep(0.1)
        quality_layout.addRow("Max Skewness:", self.max_skewness)
        
        quality_group.setLayout(quality_layout)
        layout.addWidget(quality_group)

        # Region Refinement
        refinement_group = QtWidgets.QGroupBox("Region Refinement")
        refinement_layout = QtWidgets.QVBoxLayout()
        
        self.refinement_table = QtWidgets.QTableWidget()
        self.refinement_table.setColumnCount(3)
        self.refinement_table.setHorizontalHeaderLabels(["Region", "Level", "Mode"])
        self.refinement_table.horizontalHeader().setStretchLastSection(True)
        refinement_layout.addWidget(self.refinement_table)
        
        button_layout = QtWidgets.QHBoxLayout()
        add_button = QtWidgets.QPushButton("Add Region")
        add_button.clicked.connect(self.add_refinement_region)
        button_layout.addWidget(add_button)
        
        remove_button = QtWidgets.QPushButton("Remove Region")
        remove_button.clicked.connect(self.remove_refinement_region)
        button_layout.addWidget(remove_button)
        
        refinement_layout.addLayout(button_layout)
        refinement_group.setLayout(refinement_layout)
        layout.addWidget(refinement_group)

        # Progress and Status
        self.progress_bar = QtWidgets.QProgressBar()
        self.progress_bar.setVisible(False)
        layout.addWidget(self.progress_bar)
        
        self.status_label = QtWidgets.QLabel()
        layout.addWidget(self.status_label)

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

        # Connect parameter changes to preview updates
        self.cells_x.valueChanged.connect(self.on_parameter_changed)
        self.cells_y.valueChanged.connect(self.on_parameter_changed)
        self.cells_z.valueChanged.connect(self.on_parameter_changed)
        self.feature_angle.valueChanged.connect(self.on_parameter_changed)

        # Action Buttons
        button_layout = QtWidgets.QHBoxLayout()
        
        self.generate_button = QtWidgets.QPushButton("Generate Mesh")
        self.generate_button.clicked.connect(self.generate_mesh)
        button_layout.addWidget(self.generate_button)
        
        self.check_button = QtWidgets.QPushButton("Check Mesh")
        self.check_button.clicked.connect(self.check_mesh)
        self.check_button.setEnabled(False)
        button_layout.addWidget(self.check_button)
        
        self.clear_button = QtWidgets.QPushButton("Clear Mesh")
        self.clear_button.clicked.connect(self.clear_mesh)
        self.clear_button.setEnabled(False)
        button_layout.addWidget(self.clear_button)
        
        layout.addLayout(button_layout)
        
        self.setLayout(layout)


    def on_parameter_changed(self):
        """Handle parameter changes"""
        self.preview_mesh()

    def set_case_directory(self, case_dir: str):
        """Set the case directory and initialize mesh generator"""
        if case_dir != self.case_dir:  # Only update if different
            self.case_dir = case_dir
            self.mesh_generator = MeshGenerator(case_dir)
            self.state_manager.set_case_directory(case_dir, notify=False)  # Don't trigger notifications
            
            # Check if mesh exists and enable/disable buttons accordingly
            if os.path.exists(os.path.join(case_dir, "constant", "polyMesh")):
                self.check_button.setEnabled(True)
                self.clear_button.setEnabled(True)

    def update_case_directory(self, new_path):
        """Observer method called when case directory changes"""
        if new_path != self.case_dir:
            self.set_case_directory(new_path)
    
    
    def save_mesh_state(self):
        """Save current mesh settings to state manager"""
        mesh_state = {
            "base_cells": [
                self.cells_x.value(),
                self.cells_y.value(),
                self.cells_z.value()
            ],
            "padding": self.padding.value(),
            "feature_angle": self.feature_angle.value(),
            "max_refinement": self.max_refinement.value(),
            "n_layers": self.n_layers.value(),
            "expansion_ratio": self.expansion_ratio.value(),
            "max_non_ortho": self.max_non_ortho.value(),
            "max_skewness": self.max_skewness.value(),
            "refinement_regions": self._get_refinement_regions()
        }
        self.state_manager.set_mesh_settings(mesh_state)


    def load_mesh_state(self):
        """Load mesh settings from state manager"""
        mesh_state = self.state_manager.get_mesh_settings()
        if mesh_state:
            base_cells = mesh_state.get("base_cells", [20, 20, 20])
            self.cells_x.setValue(base_cells[0])
            self.cells_y.setValue(base_cells[1])
            self.cells_z.setValue(base_cells[2])
            
            self.padding.setValue(mesh_state.get("padding", 10))
            self.feature_angle.setValue(mesh_state.get("feature_angle", 30))
            self.max_refinement.setValue(mesh_state.get("max_refinement", 2))
            self.n_layers.setValue(mesh_state.get("n_layers", 3))
            self.expansion_ratio.setValue(mesh_state.get("expansion_ratio", 1.2))
            self.max_non_ortho.setValue(mesh_state.get("max_non_ortho", 65))
            self.max_skewness.setValue(mesh_state.get("max_skewness", 0.4))
            
            # Load refinement regions
            self.refinement_table.setRowCount(0)
            for region, settings in mesh_state.get("refinement_regions", {}).items():
                self.add_refinement_region(
                    region,
                    settings.get("level", 1),
                    settings.get("mode", "inside")
                )

    def add_refinement_region(self, name=None, level=1, mode="inside"):
        """Add new refinement region to table"""
        row = self.refinement_table.rowCount()
        self.refinement_table.insertRow(row)
        
        # Region name
        name_item = QtWidgets.QTableWidgetItem(name or f"region_{row}")
        self.refinement_table.setItem(row, 0, name_item)
        
        # Refinement level
        level_spin = QtWidgets.QSpinBox()
        level_spin.setRange(0, 10)
        level_spin.setValue(level)
        self.refinement_table.setCellWidget(row, 1, level_spin)
        
        # Refinement mode
        mode_combo = QtWidgets.QComboBox()
        mode_combo.addItems(["inside", "outside", "distance"])
        mode_combo.setCurrentText(mode)
        self.refinement_table.setCellWidget(row, 2, mode_combo)

    def remove_refinement_region(self):
        """Remove selected refinement region"""
        current_row = self.refinement_table.currentRow()
        if current_row >= 0:
            self.refinement_table.removeRow(current_row)
    
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

    def get_mesh_parameters(self):
        """Get current mesh parameters from UI"""
        params = {
            'max_edge_length': float(self.cells_x.value()),  # Base this on cell size
            'deflection': 0.1,  # Can be adjusted based on refinement level
            'fineness': self.max_refinement.value(),
            'base_cells': [
                self.cells_x.value(),
                self.cells_y.value(),
                self.cells_z.value()
            ],
            'padding': self.padding.value() / 100.0,
            'feature_angle': self.feature_angle.value(),
            'max_refinement_level': self.max_refinement.value(),
            'n_surface_layers': self.n_layers.value(),
            'expansion_ratio': self.expansion_ratio.value(),
            'max_non_ortho': self.max_non_ortho.value(),
            'max_skewness': self.max_skewness.value()
        }
        return params

    def _get_refinement_regions(self) -> Dict[str, Dict[str, Any]]:
        """Collect refinement region settings from table"""
        regions = {}
        for row in range(self.refinement_table.rowCount()):
            name = self.refinement_table.item(row, 0).text()
            level = self.refinement_table.cellWidget(row, 1).value()
            mode = self.refinement_table.cellWidget(row, 2).currentText()
            regions[name] = {
                "level": level,
                "mode": mode
            }
        return regions

    def generate_mesh(self):
        """Generate mesh with current settings"""
        if not self.mesh_generator:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "No case directory set"
            )
            return

        try:
            # Get active document shape
            doc = App.activeDocument()
            if not doc or not doc.ActiveObject:  # Add check for ActiveObject
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "No active object selected"
                )
                return

            if not hasattr(doc.ActiveObject, 'Shape'):  # Add check for Shape attribute
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "Selected object has no shape"
                )
                return

            shape = doc.ActiveObject.Shape
            params = self.get_mesh_parameters()

            # Show progress
            self.progress_bar.setVisible(True)
            self.progress_bar.setValue(0)  # Reset progress bar
            self.status_label.setText("Generating mesh...")
            self.generate_button.setEnabled(False)
            self.check_button.setEnabled(False)  # Disable during generation
            self.clear_button.setEnabled(False)  # Disable during generation

            # Generate mesh
            success = self.mesh_generator.generate_mesh(shape, params)
            self.save_mesh_state()

            if success:
                self.status_label.setText("Mesh generated successfully")
                self.check_button.setEnabled(True)
                self.clear_button.setEnabled(True)
                self.state_manager.set_mesh_status(True)
                
                QtWidgets.QMessageBox.information(
                    self,
                    "Success",
                    "Mesh generation completed successfully"
                )
            else:
                self.status_label.setText("Mesh generation failed")
                self.check_button.setEnabled(False)  # Disable if failed
                self.clear_button.setEnabled(False)  # Disable if failed
                QtWidgets.QMessageBox.critical(
                    self,
                    "Error",
                    "Mesh generation failed. Check OpenFOAM log for details."
                )

        except Exception as e:
            self.status_label.setText(f"Error: {str(e)}")  # Update status label
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to generate mesh: {str(e)}"
            )
        finally:
            self.progress_bar.setVisible(False)
            self.generate_button.setEnabled(True)
            QtWidgets.QApplication.processEvents()  # Ensure UI updates
            
    def check_mesh(self):
        """Check mesh quality"""
        if not self.mesh_generator:
            return

        try:
            metrics = self.mesh_generator.check_mesh_quality()
            
            if metrics:
                message = (
                    f"Mesh Statistics:\n\n"
                    f"Cells: {metrics.get('cell_count', 'N/A')}\n"
                    f"Points: {metrics.get('point_count', 'N/A')}\n"
                    f"Max non-orthogonality: {metrics.get('non_orthogonality', 'N/A'):.2f}\n"
                    f"Max skewness: {metrics.get('skewness', 'N/A'):.2f}\n"
                    f"Max aspect ratio: {metrics.get('max_aspect_ratio', 'N/A'):.2f}"
                )
                
                QtWidgets.QMessageBox.information(
                    self,
                    "Mesh Quality",
                    message
                )
            else:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "Failed to get mesh metrics"
                )

        except Exception as e:
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to check mesh: {str(e)}"
            )

    def clear_mesh(self):
        """Clear current mesh"""
        try:
            if os.path.exists(os.path.join(self.case_dir, "constant", "polyMesh")):
                import shutil
                shutil.rmtree(os.path.join(self.case_dir, "constant", "polyMesh"))
                
            self.status_label.setText("Mesh cleared")
            self.check_button.setEnabled(False)
            self.clear_button.setEnabled(False)
            
        except Exception as e:
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to clear mesh: {str(e)}"
            )
    def preview_mesh(self):
        """Show mesh preview in FreeCAD viewport"""
        try:
            doc = App.activeDocument()
            if not doc or not doc.ActiveObject:
                return

            # Create or get mesh preview object
            preview_name = "MeshPreview"
            preview = None
            
            # Try to get existing preview object
            if hasattr(doc, "Objects"):
                for obj in doc.Objects:
                    if obj.Name == preview_name:
                        preview = obj
                        break
            
            # Create new preview object if it doesn't exist
            if not preview:
                preview = doc.addObject("Mesh::Feature", preview_name)
                
            # Get current mesh parameters
            mesh_params = self.get_mesh_parameters()
            
            # Create temporary mesh object
            import MeshPart
            shape = doc.ActiveObject.Shape
            mesh = MeshPart.meshFromShape(
                Shape=shape,
                MaxLength=mesh_params.get('max_edge_length', float(shape.BoundBox.DiagonalLength/20)),
                Deflection=mesh_params.get('deflection', 0.1),
                Fineness=mesh_params.get('fineness', 2),
                SecondOrder=False,
                Optimize=True
            )
            
            # Update preview object
            preview.Mesh = mesh
            preview.ViewObject.DisplayMode = "Wireframe"
            preview.ViewObject.LineWidth = 1.0
            
            # Fit view
            if Gui.ActiveDocument:
                Gui.ActiveDocument.ActiveView.fitAll()
                
            doc.recompute()
            
        except Exception as e:
            print(f"Mesh preview failed: {str(e)}")

# Register the panel as a FreeCAD dialog
Gui.addCommand('OpenFOAM_Mesh_Panel', MeshPanelCommand())