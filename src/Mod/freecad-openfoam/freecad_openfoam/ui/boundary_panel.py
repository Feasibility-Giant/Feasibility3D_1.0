# freecad_openfoam/ui/boundary_panel.py

from PySide2 import QtWidgets, QtCore
import FreeCAD as App
import FreeCADGui as Gui
from typing import Dict, Any, List, Optional
from ..core.state_manager import OpenFOAMStateManager
import json
import os
from .style_utils import ThemeAwareWidget

class BoundaryPanelCommand:
    """Command class for Boundary main panel"""
    
    def GetResources(self):
        """Required method for FreeCAD commands"""
        return {
            'Pixmap': os.path.join(App.getHomePath(), "Mod", "freecad-openfoam", "freecad_openfoam", "icons", "Boundary.svg"),
            'MenuText': 'Boundary Control Panel',
            'ToolTip': 'Open the main Boundary control panel'
        }
    
    def Activated(self):
        """Called when the command is run"""
        self.panel = BoundaryPanel()
        self.panel.show()
    
    def IsActive(self):
        """Return True to enable the command, False to disable"""
        return True

class BoundaryPanel(QtWidgets.QWidget):
    """Panel for managing OpenFOAM boundary conditions"""
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.state_manager = OpenFOAMStateManager()  # Add this line
        self.case_dir = self.state_manager.get_case_directory()  # Update this line
        self.selected_patch = None
        self.boundary_types = self._get_boundary_types()
        self.setup_ui()
        self.load_case_if_exists()  # Add this line
        self.state_manager.add_observer(self)
    
    def load_case_if_exists(self):
        """Load case directory from state manager if it exists"""
        case_dir = self.state_manager.get_case_directory()
        if case_dir:
            self.set_case_directory(case_dir)
    
    def update_case_directory(self, new_path):
        """Observer method called when case directory changes"""
        if new_path != self.case_dir:
            self.set_case_directory(new_path)

    def _get_boundary_types(self) -> Dict[str, List[str]]:
        """Get available boundary types for different fields"""
        return {
            "velocity": [
                "fixedValue",
                "zeroGradient",
                "slip",
                "noSlip",
                "inletOutlet",
                "outletInlet",
                "pressureInletOutletVelocity"
            ],
            "pressure": [
                "fixedValue",
                "zeroGradient",
                "totalPressure",
                "fixedFluxPressure",
                "prghPressure"
            ],
            "temperature": [
                "fixedValue",
                "zeroGradient",
                "fixedGradient",
                "mixed",
                "convectiveHeatFlux"
            ],
            "turbulence": [
                "kqRWallFunction",
                "epsilonWallFunction",
                "omegaWallFunction",
                "fixedValue",
                "zeroGradient"
            ],
            "phase": [
                "fixedValue",
                "zeroGradient",
                "inletOutlet",
                "variableHeightFlowRate"
            ]
        }

    def setup_ui(self):
        """Create the boundary panel UI elements"""
        layout = QtWidgets.QVBoxLayout()

        # Patch Selection
        patch_group = QtWidgets.QGroupBox("Patch Selection")
        patch_layout = QtWidgets.QVBoxLayout()
        
        self.patch_list = QtWidgets.QListWidget()
        self.patch_list.itemSelectionChanged.connect(self.on_patch_selected)
        patch_layout.addWidget(self.patch_list)
        
        self.refresh_button = QtWidgets.QPushButton("Refresh Patches")
        self.refresh_button.clicked.connect(self.refresh_patches)
        patch_layout.addWidget(self.refresh_button)
        
        patch_group.setLayout(patch_layout)
        layout.addWidget(patch_group)

        # Boundary Type Settings
        settings_group = QtWidgets.QGroupBox("Boundary Settings")
        settings_layout = QtWidgets.QFormLayout()
        
        # Velocity Settings
        self.velocity_type = QtWidgets.QComboBox()
        self.velocity_type.addItems(self.boundary_types["velocity"])
        settings_layout.addRow("Velocity Type:", self.velocity_type)
        
        self.velocity_value = QtWidgets.QLineEdit()
        self.velocity_value.setPlaceholderText("e.g., (1 0 0)")
        settings_layout.addRow("Velocity Value:", self.velocity_value)
        
        # Pressure Settings
        self.pressure_type = QtWidgets.QComboBox()
        self.pressure_type.addItems(self.boundary_types["pressure"])
        settings_layout.addRow("Pressure Type:", self.pressure_type)
        
        self.pressure_value = QtWidgets.QLineEdit()
        self.pressure_value.setPlaceholderText("e.g., 0")
        settings_layout.addRow("Pressure Value:", self.pressure_value)
        
        # Temperature Settings
        self.temperature_type = QtWidgets.QComboBox()
        self.temperature_type.addItems(self.boundary_types["temperature"])
        settings_layout.addRow("Temperature Type:", self.temperature_type)
        
        self.temperature_value = QtWidgets.QLineEdit()
        self.temperature_value.setPlaceholderText("e.g., 300")
        settings_layout.addRow("Temperature Value:", self.temperature_value)
        
        # Turbulence Settings
        self.turbulence_type = QtWidgets.QComboBox()
        self.turbulence_type.addItems(self.boundary_types["turbulence"])
        settings_layout.addRow("Turbulence Type:", self.turbulence_type)
        
        self.k_value = QtWidgets.QLineEdit()
        self.k_value.setPlaceholderText("Turbulent k")
        settings_layout.addRow("k Value:", self.k_value)
        
        self.epsilon_value = QtWidgets.QLineEdit()
        self.epsilon_value.setPlaceholderText("Turbulent ε")
        settings_layout.addRow("ε Value:", self.epsilon_value)
        
        self.omega_value = QtWidgets.QLineEdit()
        self.omega_value.setPlaceholderText("Turbulent ω")
        settings_layout.addRow("ω Value:", self.omega_value)
        
        # Phase Settings (for multiphase)
        self.phase_type = QtWidgets.QComboBox()
        self.phase_type.addItems(self.boundary_types["phase"])
        settings_layout.addRow("Phase Type:", self.phase_type)
        
        self.phase_value = QtWidgets.QLineEdit()
        self.phase_value.setPlaceholderText("e.g., 1")
        settings_layout.addRow("Phase Value:", self.phase_value)
        
        settings_group.setLayout(settings_layout)
        layout.addWidget(settings_group)

        # Advanced Settings
        advanced_group = QtWidgets.QGroupBox("Advanced Settings")
        advanced_layout = QtWidgets.QFormLayout()
        
        self.wall_function = QtWidgets.QCheckBox()
        advanced_layout.addRow("Use Wall Functions:", self.wall_function)
        
        self.non_uniform = QtWidgets.QCheckBox()
        advanced_layout.addRow("Non-Uniform Values:", self.non_uniform)
        
        advanced_group.setLayout(advanced_layout)
        layout.addWidget(advanced_group)

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

        # Action Buttons
        button_layout = QtWidgets.QHBoxLayout()
        
        self.apply_button = QtWidgets.QPushButton("Apply Settings")
        self.apply_button.clicked.connect(self.apply_settings)
        button_layout.addWidget(self.apply_button)
        
        self.save_button = QtWidgets.QPushButton("Save Settings")
        self.save_button.clicked.connect(self.save_settings)
        button_layout.addWidget(self.save_button)
        
        self.load_button = QtWidgets.QPushButton("Load Settings")
        self.load_button.clicked.connect(self.load_settings)
        button_layout.addWidget(self.load_button)
        
        layout.addLayout(button_layout)
        
        # Status Label
        self.status_label = QtWidgets.QLabel()
        layout.addWidget(self.status_label)
        
        self.setLayout(layout)

    def set_case_directory(self, case_dir: str):
        """Set case directory and refresh patches"""
        if case_dir != self.case_dir:  # Only update if different
            self.case_dir = case_dir
            self.state_manager.set_case_directory(case_dir, notify=False)  # Don't trigger notifications
            self.refresh_patches()
    
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

    def refresh_patches(self):
        """Refresh list of boundary patches"""
        if not self.case_dir:
            case_dir = self.state_manager.get_case_directory()  # Add this line
            if case_dir:
                self.case_dir = case_dir
            else:
                self.status_label.setText("No case directory found. Please set up a case first.")
                return

        try:
            constant_dir = os.path.join(self.case_dir, "constant", "polyMesh")
            boundary_file = os.path.join(constant_dir, "boundary")
            
            if not os.path.exists(boundary_file):
                self.status_label.setText("No boundary file found. Please generate mesh first.")
                return
                
            patches = self._read_boundary_file(boundary_file)
            
            self.patch_list.clear()
            self.patch_list.addItems(patches)
            
        except Exception as e:
            self.status_label.setText(f"Error refreshing patches: {str(e)}")

    def _read_boundary_file(self, filename: str) -> List[str]:
        """Read boundary patches from OpenFOAM boundary file"""
        patches = []
        try:
            with open(filename, 'r') as f:
                content = f.read()
                # Parse OpenFOAM dictionary format
                in_boundary = False
                current_patch = None
                
                for line in content.split('\n'):
                    line = line.strip()
                    if line.startswith('{'):
                        in_boundary = True
                    elif line.startswith('}'):
                        in_boundary = False
                    elif in_boundary and line and not line.startswith('//'):
                        if not line.startswith('{') and not line.startswith('}'):
                            patches.append(line.split()[0])
                            
        except Exception as e:
            self.status_label.setText(f"Error reading boundary file: {str(e)}")
            
        return patches

    def on_patch_selected(self):
        """Handle patch selection change"""
        items = self.patch_list.selectedItems()
        if items:
            self.selected_patch = items[0].text()
            self.load_patch_settings(self.selected_patch)
        else:
            self.selected_patch = None

    def load_patch_settings(self, patch_name: str):
        """Load settings for selected patch"""
        if not self.case_dir or not patch_name:
            return

        try:
            # Load U (velocity) settings
            self._load_field_settings("U", patch_name, self.velocity_type, self.velocity_value)
            
            # Load p (pressure) settings
            self._load_field_settings("p", patch_name, self.pressure_type, self.pressure_value)
            
            # Load T (temperature) settings if exists
            self._load_field_settings("T", patch_name, self.temperature_type, self.temperature_value)
            
            # Load turbulence settings
            self._load_field_settings("k", patch_name, self.turbulence_type, self.k_value)
            self._load_field_settings("epsilon", patch_name, None, self.epsilon_value)
            self._load_field_settings("omega", patch_name, None, self.omega_value)
            
            # Load phase settings if exists
            self._load_field_settings("alpha.water", patch_name, self.phase_type, self.phase_value)
            
        except Exception as e:
            self.status_label.setText(f"Error loading patch settings: {str(e)}")

    def _load_field_settings(self, field_name: str, patch_name: str, 
                           type_widget: Optional[QtWidgets.QComboBox], 
                           value_widget: QtWidgets.QLineEdit):
        """Load settings for specific field"""
        field_file = os.path.join(self.case_dir, "0", field_name)
        if not os.path.exists(field_file):
            return
            
        try:
            with open(field_file, 'r') as f:
                content = f.read()
                # Parse boundary conditions
                in_boundary_field = False
                in_patch = False
                
                for line in content.split('\n'):
                    line = line.strip()
                    if line.startswith('boundaryField'):
                        in_boundary_field = True
                    elif line.startswith(patch_name) and in_boundary_field:
                        in_patch = True
                    elif in_patch:
                        if line.startswith('type'):
                            if type_widget:
                                type_value = line.split()[1].strip(';')
                                type_widget.setCurrentText(type_value)
                        elif line.startswith('value'):
                            value = line.split('value')[1].strip(' ;')
                            value_widget.setText(value)
                            
        except Exception as e:
            print(f"Error loading {field_name} settings: {str(e)}")

    def apply_settings(self):
        """Apply boundary settings to selected patch"""
        if not self.selected_patch:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "No patch selected"
            )
            return

        try:
            self._apply_field_settings("U", self.velocity_type.currentText(),
                                     self.velocity_value.text())
            
            self._apply_field_settings("p", self.pressure_type.currentText(),
                                     self.pressure_value.text())
            
            self._apply_field_settings("T", self.temperature_type.currentText(),
                                     self.temperature_value.text())
            
            self._apply_field_settings("k", self.turbulence_type.currentText(),
                                     self.k_value.text())
            
            if self.epsilon_value.text():
                self._apply_field_settings("epsilon", self.turbulence_type.currentText(),
                                         self.epsilon_value.text())
                
            if self.omega_value.text():
                self._apply_field_settings("omega", self.turbulence_type.currentText(),
                                         self.omega_value.text())
                
            self._apply_field_settings("alpha.water", self.phase_type.currentText(),
                                     self.phase_value.text())
            
            self.save_state()
            self.status_label.setText("Settings applied successfully")
            
        except Exception as e:
            self.status_label.setText(f"Error applying settings: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to apply settings: {str(e)}"
            )

    def _apply_field_settings(self, field_name: str, bc_type: str, value: str):
        """Apply settings for specific field"""
        if not value:
            return
            
        field_file = os.path.join(self.case_dir, "0", field_name)
        if not os.path.exists(field_file):
            return
            
        try:
            # Read existing content
            with open(field_file, 'r') as f:
                lines = f.readlines()
                
            # Modify content
            new_lines = []
            in_boundary_field = False
            in_patch = False
            patch_modified = False
            
            for line in lines:
                if 'boundaryField' in line:
                    in_boundary_field = True
                elif in_boundary_field and self.selected_patch in line:
                    in_patch = True
                    patch_modified = True
                elif in_patch and '}' in line:
                    in_patch = False
                
                if in_patch:
                    if 'type' in line:
                        new_lines.append(f'        type            {bc_type};\n')
                    elif 'value' in line:
                        new_lines.append(f'        value           {value};\n')
                    else:
                        new_lines.append(line)
                else:
                    new_lines.append(line)
            
            # Write modified content
            with open(field_file, 'w') as f:
                f.writelines(new_lines)
                
        except Exception as e:
            raise Exception(f"Error applying {field_name} settings: {str(e)}")

    def save_settings(self):
        """Save boundary settings to file"""
        if not self.selected_patch:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "No patch selected"
            )
            return

        try:
            filename, _ = QtWidgets.QFileDialog.getSaveFileName(
                self,
                "Save Boundary Settings",
                "",
                "JSON Files (*.json)"
            )
            
            if not filename:
                return
                
            settings = {
                "patch_name": self.selected_patch,
                "velocity": {
                    "type": self.velocity_type.currentText(),
                    "value": self.velocity_value.text()
                },
                "pressure": {
                    "type": self.pressure_type.currentText(),
                    "value": self.pressure_value.text()
                },
                "temperature": {
                    "type": self.temperature_type.currentText(),
                    "value": self.temperature_value.text()
                },
                "turbulence": {
                    "type": self.turbulence_type.currentText(),
                    "k": self.k_value.text(),
                    "epsilon": self.epsilon_value.text(),
                    "omega": self.omega_value.text()
                },
                "phase": {
                    "type": self.phase_type.currentText(),
                    "value": self.phase_value.text()
                },
                "advanced": {
                    "wall_functions": self.wall_function.isChecked(),
                    "non_uniform": self.non_uniform.isChecked()
                }
            }
            
            with open(filename, 'w') as f:
                json.dump(settings, f, indent=4)
                
            self.status_label.setText(f"Settings saved to {filename}")
            
        except Exception as e:
            self.status_label.setText(f"Error saving settings: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to save settings: {str(e)}"
            )

    def load_settings(self):
        """Load boundary settings from file"""
        try:
            filename, _ = QtWidgets.QFileDialog.getOpenFileName(
                self,
                "Load Boundary Settings",
                "",
                "JSON Files (*.json)"
            )
            
            if not filename:
                return
                
            with open(filename, 'r') as f:
                settings = json.load(f)
                
            # Find and select the patch
            patch_name = settings.get("patch_name")
            if patch_name:
                items = self.patch_list.findItems(patch_name, QtCore.Qt.MatchExactly)
                if items:
                    self.patch_list.setCurrentItem(items[0])
            
            # Apply velocity settings
            velocity = settings.get("velocity", {})
            self.velocity_type.setCurrentText(velocity.get("type", ""))
            self.velocity_value.setText(velocity.get("value", ""))
            
            # Apply pressure settings
            pressure = settings.get("pressure", {})
            self.pressure_type.setCurrentText(pressure.get("type", ""))
            self.pressure_value.setText(pressure.get("value", ""))
            
            # Apply temperature settings
            temperature = settings.get("temperature", {})
            self.temperature_type.setCurrentText(temperature.get("type", ""))
            self.temperature_value.setText(temperature.get("value", ""))
            
            # Apply turbulence settings
            turbulence = settings.get("turbulence", {})
            self.turbulence_type.setCurrentText(turbulence.get("type", ""))
            self.k_value.setText(turbulence.get("k", ""))
            self.epsilon_value.setText(turbulence.get("epsilon", ""))
            self.omega_value.setText(turbulence.get("omega", ""))
            
            # Apply phase settings
            phase = settings.get("phase", {})
            self.phase_type.setCurrentText(phase.get("type", ""))
            self.phase_value.setText(phase.get("value", ""))
            
            # Apply advanced settings
            advanced = settings.get("advanced", {})
            self.wall_function.setChecked(advanced.get("wall_functions", False))
            self.non_uniform.setChecked(advanced.get("non_uniform", False))
            
            self.status_label.setText(f"Settings loaded from {filename}")
            
        except Exception as e:
            self.status_label.setText(f"Error loading settings: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to load settings: {str(e)}"
            )
    
    def save_state(self):
        """Save current boundary settings to state manager"""
        if self.selected_patch:
            boundary_state = {
                "selected_patch": self.selected_patch,
                "velocity": {
                    "type": self.velocity_type.currentText(),
                    "value": self.velocity_value.text()
                },
                "pressure": {
                    "type": self.pressure_type.currentText(),
                    "value": self.pressure_value.text()
                },
                # ... add other settings ...
            }
            self.state_manager.set_boundary_settings(boundary_state)

    def load_state(self):
        """Load boundary settings from state manager"""
        boundary_state = self.state_manager.get_boundary_settings()
        if boundary_state:
            # Find and select the patch
            patch_name = boundary_state.get("selected_patch")
            if patch_name:
                items = self.patch_list.findItems(patch_name, QtCore.Qt.MatchExactly)
                if items:
                    self.patch_list.setCurrentItem(items[0])
            
            # Load velocity settings
            velocity = boundary_state.get("velocity", {})
            self.velocity_type.setCurrentText(velocity.get("type", ""))
            self.velocity_value.setText(velocity.get("value", ""))
            
            # Load pressure settings
            pressure = boundary_state.get("pressure", {})
            self.pressure_type.setCurrentText(pressure.get("type", ""))
            self.pressure_value.setText(pressure.get("value", ""))
            
            # ... load other settings ...

    def validate_settings(self) -> bool:
        """Validate boundary settings"""
        try:
            # Validate velocity value format
            if self.velocity_value.text():
                vel_text = self.velocity_value.text().strip('()')
                try:
                    vel_values = [float(x) for x in vel_text.split()]
                    if len(vel_values) != 3:
                        raise ValueError("Velocity must have 3 components")
                except ValueError:
                    raise ValueError("Invalid velocity format")
            
            # Validate pressure value
            if self.pressure_value.text():
                try:
                    float(self.pressure_value.text())
                except ValueError:
                    raise ValueError("Invalid pressure value")
            
            # Validate temperature value
            if self.temperature_value.text():
                try:
                    float(self.temperature_value.text())
                except ValueError:
                    raise ValueError("Invalid temperature value")
            
            # Validate turbulence values
            if self.k_value.text():
                try:
                    float(self.k_value.text())
                except ValueError:
                    raise ValueError("Invalid k value")
                    
            if self.epsilon_value.text():
                try:
                    float(self.epsilon_value.text())
                except ValueError:
                    raise ValueError("Invalid epsilon value")
                    
            if self.omega_value.text():
                try:
                    float(self.omega_value.text())
                except ValueError:
                    raise ValueError("Invalid omega value")
            
            # Validate phase value
            if self.phase_value.text():
                try:
                    value = float(self.phase_value.text())
                    if not 0 <= value <= 1:
                        raise ValueError("Phase value must be between 0 and 1")
                except ValueError:
                    raise ValueError("Invalid phase value")
            
            return True
            
        except ValueError as e:
            self.status_label.setText(f"Validation error: {str(e)}")
            QtWidgets.QMessageBox.warning(
                self,
                "Validation Error",
                str(e)
            )
            return False

# Register the panel as a FreeCAD dialog
Gui.addCommand('OpenFOAM_Boundary_Panel', BoundaryPanelCommand())