from PySide2 import QtWidgets, QtCore
from PySide2.QtWidgets import QTreeWidget, QTreeWidgetItem, QGroupBox, QVBoxLayout, QHBoxLayout, QLabel, QComboBox
import FreeCAD as App
import FreeCADGui as Gui
from ..core.openfoam_interface import OpenFOAMInterface
from ..core.state_manager import OpenFOAMStateManager
from .style_utils import ThemeAwareWidget
import os


class OpenFOAMPanelCommand:
    """Command class for OpenFOAM main panel"""
    
    def GetResources(self):
        """Required method for FreeCAD commands"""
        return {
            'Pixmap': os.path.join(App.getHomePath(), "Mod", "freecad-openfoam", "freecad_openfoam", "icons", "OpenFOAMMain.svg"),
            'MenuText': 'OpenFOAM Control Panel',
            'ToolTip': 'Open the main OpenFOAM control panel'
        }
    
    def Activated(self):
        """Called when the command is run"""
        self.panel = OpenFOAMPanel()
        self.panel.show()
    
    def IsActive(self):
        """Return True to enable the command, False to disable"""
        return True


class OpenFOAMPanel(QtWidgets.QWidget):
    """Main OpenFOAM control panel"""
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.openfoam = OpenFOAMInterface()
        self.state_manager = OpenFOAMStateManager()
        self.setup_ui()
        self.current_case = None
        self.update_from_state()
        self.refresh_components()

    def setup_ui(self):
        """Create the main UI elements"""
        layout = QtWidgets.QVBoxLayout()

        # Case Configuration
        case_group = QtWidgets.QGroupBox("Case Configuration")
        case_layout = QtWidgets.QFormLayout()
        
        self.case_name = QtWidgets.QLineEdit()
        case_layout.addRow("Case Name:", self.case_name)
        
        self.case_type = QtWidgets.QComboBox()
        self.case_type.addItems([
            "Single Phase Flow",
            "Multiphase Flow",
            "Pigging Simulation",
            "Spill Analysis",
            "Heat Transfer",
            "Species Transport"
        ])
        self.case_type.currentIndexChanged.connect(self.on_case_type_changed)
        case_layout.addRow("Simulation Type:", self.case_type)
        
        case_group.setLayout(case_layout)
        layout.addWidget(case_group)

        # Solver Configuration
        solver_group = QtWidgets.QGroupBox("Solver Settings")
        solver_layout = QtWidgets.QFormLayout()
        
        self.solver_type = QtWidgets.QComboBox()
        self.solver_type.addItems(self.openfoam.available_solvers)
        solver_layout.addRow("Solver:", self.solver_type)
        
        self.start_time = QtWidgets.QDoubleSpinBox()
        self.start_time.setRange(0, 1000000)
        solver_layout.addRow("Start Time:", self.start_time)
        
        self.end_time = QtWidgets.QDoubleSpinBox()
        self.end_time.setRange(0, 1000000)
        self.end_time.setValue(1000)
        solver_layout.addRow("End Time:", self.end_time)
        
        self.delta_t = QtWidgets.QDoubleSpinBox()
        self.delta_t.setRange(0.000001, 1000)
        self.delta_t.setValue(0.001)
        self.delta_t.setDecimals(6)
        solver_layout.addRow("Time Step:", self.delta_t)
        
        solver_group.setLayout(solver_layout)
        layout.addWidget(solver_group)

        # Advanced Settings
        advanced_group = QtWidgets.QGroupBox("Advanced Settings")
        advanced_layout = QtWidgets.QFormLayout()
        
        self.parallel = QtWidgets.QCheckBox()
        self.parallel.stateChanged.connect(self.on_parallel_changed)
        advanced_layout.addRow("Parallel Execution:", self.parallel)
        
        self.num_processors = QtWidgets.QSpinBox()
        self.num_processors.setRange(1, 64)
        self.num_processors.setValue(4)
        self.num_processors.setEnabled(False)
        advanced_layout.addRow("Number of Processors:", self.num_processors)
        
        advanced_group.setLayout(advanced_layout)
        layout.addWidget(advanced_group)

        # Component Selection
        component_group = QtWidgets.QGroupBox("Model Components")
        component_layout = QtWidgets.QVBoxLayout()

        # Tree widget for showing FreeCAD model structure
        self.component_tree = QtWidgets.QTreeWidget()
        self.component_tree.setHeaderLabels(["Component", "Type"])
        self.component_tree.setSelectionMode(QtWidgets.QTreeWidget.ExtendedSelection)
        component_layout.addWidget(self.component_tree)

        # Component type assignment
        type_layout = QtWidgets.QHBoxLayout()
        self.type_selector = QtWidgets.QComboBox()
        self.type_selector.addItems([
            "PIPE",
            "PIG",
            "INLET",
            "OUTLET",
            "JUNCTION",
            "VALVE",
            "HEAT_SOURCE",
            "HEAT_SINK",
            "SPECIES_SOURCE",
            "SPILL_POINT",
            "VULNERABLE_AREA",
            "PHASE_INTERFACE",
            "MONITORING_POINT"
        ])
        assign_button = QtWidgets.QPushButton("Assign Type")
        assign_button.clicked.connect(self.assign_component_type)
        type_layout.addWidget(self.type_selector)
        type_layout.addWidget(assign_button)
        component_layout.addLayout(type_layout)

        # Refresh button
        refresh_button = QtWidgets.QPushButton("Refresh Components")
        refresh_button.clicked.connect(self.refresh_components)
        component_layout.addWidget(refresh_button)

        component_group.setLayout(component_layout)
        layout.addWidget(component_group)

        # Progress Indicator
        self.progress_bar = QtWidgets.QProgressBar()
        self.progress_bar.setVisible(False)
        layout.addWidget(self.progress_bar)

        # Status Label
        self.status_label = QtWidgets.QLabel()
        layout.addWidget(self.status_label)

        # Buttons
        button_layout = QtWidgets.QHBoxLayout()
        
        self.setup_button = QtWidgets.QPushButton("Setup Case")
        self.setup_button.clicked.connect(self.setup_case)
        button_layout.addWidget(self.setup_button)
        
        self.run_button = QtWidgets.QPushButton("Run Simulation")
        self.run_button.clicked.connect(self.run_simulation)
        self.run_button.setEnabled(False)
        button_layout.addWidget(self.run_button)
        
        self.stop_button = QtWidgets.QPushButton("Stop Simulation")
        self.stop_button.clicked.connect(self.stop_simulation)
        self.stop_button.setEnabled(False)
        button_layout.addWidget(self.stop_button)
        
        self.view_results_button = QtWidgets.QPushButton("View Results")
        self.view_results_button.clicked.connect(self.view_results)
        self.view_results_button.setEnabled(False)
        button_layout.addWidget(self.view_results_button)
        
        layout.addLayout(button_layout)
        
        self.setLayout(layout)

    def on_case_type_changed(self, index):
        """Handle case type change"""
        case_type = self.case_type.currentText()
        # Update available solvers based on case type
        self.solver_type.clear()
        if case_type == "Multiphase Flow":
            solvers = [s for s in self.openfoam.available_solvers if "Multi" in s or "Inter" in s]
        elif case_type == "Pigging Simulation":
            solvers = [s for s in self.openfoam.available_solvers if "Pig" in s or "Dynamic" in s]
        else:
            solvers = self.openfoam.available_solvers
        self.solver_type.addItems(solvers)
    
    def refresh_components(self):
        """Refresh the component tree with current document objects"""
        self.component_tree.clear()
        doc = App.activeDocument()
        if not doc:
            return
            
        # Add all objects from document
        for obj in doc.Objects:
            if hasattr(obj, 'Shape'):  # Only add objects with shapes
                item = QtWidgets.QTreeWidgetItem(self.component_tree)
                item.setText(0, obj.Label)
                item.setText(1, getattr(obj, 'ComponentType', ''))
                
                # Store the FreeCAD object reference
                item.setData(0, QtCore.Qt.UserRole, obj)

    def assign_component_type(self):
        """Assign selected type to selected components"""
        selected_items = self.component_tree.selectedItems()
        if not selected_items:
            return
            
        component_type = self.type_selector.currentText()
        
        for item in selected_items:
            # Update tree item
            item.setText(1, component_type)
            
            # Update FreeCAD object
            obj = item.data(0, QtCore.Qt.UserRole)
            if obj:
                setattr(obj, 'ComponentType', component_type)

    def get_simulation_components(self):
        """Get dictionary of components by type"""
        components = {
            'PIPE': [],
            'PIG': [],
            'INLET': [],
            'OUTLET': [],
            'JUNCTION': [],
            'VALVE': [],
            'HEAT_SOURCE': [],
            'HEAT_SINK': [],
            'SPECIES_SOURCE': [],
            'SPILL_POINT': [],
            'VULNERABLE_AREA': [],
            'PHASE_INTERFACE': [],
            'MONITORING_POINT': []
        }
        
        root = self.component_tree.invisibleRootItem()
        for i in range(root.childCount()):
            item = root.child(i)
            comp_type = item.text(1)
            if comp_type in components:
                obj = item.data(0, QtCore.Qt.UserRole)
                if obj:
                    components[comp_type].append(obj)
        
        return components

    def validate_component_selection(self):
        """Validate that required components are selected based on simulation type"""
        components = self.get_simulation_components()
        simulation_type = self.case_type.currentText()
        
        # Common validation for all types - need inlet and outlet
        if not components['INLET'] or not components['OUTLET']:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "Both inlet and outlet must be selected for all simulation types"
            )
            return False

        # Specific validations based on simulation type
        if simulation_type == "Pigging Simulation":
            if not components['PIPE']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "At least one pipe component must be selected"
                )
                return False
                
            if not components['PIG']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "A pig component must be selected"
                )
                return False
                
        elif simulation_type == "Multiphase Flow":
            if not components['PIPE']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "At least one pipe component must be selected"
                )
                return False
            # You might want to add specific multiphase requirements
            
        elif simulation_type == "Single Phase Flow":
            if not components['PIPE']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "At least one pipe component must be selected"
                )
                return False

        elif simulation_type == "Spill Analysis":
            if not components['PIPE']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "At least one pipe component must be selected for spill analysis"
                )
                return False
            # Might want to validate spill points or vulnerable areas

        elif simulation_type == "Heat Transfer":
            if not components['PIPE']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "At least one pipe component must be selected"
                )
                return False
            # Might want to validate heat sources/sinks

        elif simulation_type == "Species Transport":
            if not components['PIPE']:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "At least one pipe component must be selected"
                )
                return False
            # Might want to validate species injection points
        
        return True

    def on_parallel_changed(self, state):
        """Handle parallel execution checkbox change"""
        self.num_processors.setEnabled(state == QtCore.Qt.Checked)

    def setup_case(self):
        """Set up new OpenFOAM case"""
        case_name = self.case_name.text()
        if not case_name:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "Please enter a case name"
            )
            return
        
        if not self.validate_component_selection():
            return
                
        try:
            components = self.get_simulation_components()
            case_dir = self.openfoam.create_case(
                path=case_name,
                case_type=self.case_type.currentText(),
                components=components
            )

            # Update state manager FIRST
            self.state_manager.set_case_directory(case_dir, notify=True)  # Add notify=True to ensure other panels are notified
            
            # Configure solver
            self.openfoam.configure_solver(
                self.solver_type.currentText(),
                {
                    "start_time": self.start_time.value(),
                    "end_time": self.end_time.value(),
                    "delta_t": self.delta_t.value()
                }
            )
            
            self.current_case = case_dir
            self.state_manager.set_case_directory(case_dir)
            self.state_manager.set_solver_settings({
                "solver_type": self.solver_type.currentText(),
                "start_time": self.start_time.value(),
                "end_time": self.end_time.value(),
                "delta_t": self.delta_t.value(),
                "parallel": self.parallel.isChecked(),
                "num_processors": self.num_processors.value()
            })
            
            self.run_button.setEnabled(True)
            self.status_label.setText(f"Case created at: {case_dir}")
            
            QtWidgets.QMessageBox.information(
                self,
                "Success",
                f"Case created successfully at {case_dir}"
            )
            
        except Exception as e:
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to create case: {str(e)}"
            )

    
    def update_from_state(self):
        """Update panel based on state manager"""
        case_dir = self.state_manager.get_case_directory()
        if case_dir:
            self.current_case = case_dir
            self.run_button.setEnabled(True)
            self.status_label.setText(f"Case loaded: {case_dir}")
            
            # Update solver settings if available
            solver_settings = self.state_manager.get_solver_settings()
            if solver_settings:
                self.solver_type.setCurrentText(solver_settings.get("solver_type", ""))
                self.start_time.setValue(solver_settings.get("start_time", 0))
                self.end_time.setValue(solver_settings.get("end_time", 1000))
                self.delta_t.setValue(solver_settings.get("delta_t", 0.001))
                self.parallel.setChecked(solver_settings.get("parallel", False))
                self.num_processors.setValue(solver_settings.get("num_processors", 4))

    def run_simulation(self):
        """Run OpenFOAM simulation"""
        if not self.current_case:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "Please set up a case first"
            )
            return

        try:
            self.progress_bar.setVisible(True)
            self.progress_bar.setRange(0, 0)  # Indeterminate progress
            self.status_label.setText("Running simulation...")
            self.run_button.setEnabled(False)
            self.stop_button.setEnabled(True)
            self.setup_button.setEnabled(False)

            success = self.openfoam.run_simulation(
                parallel=self.parallel.isChecked(),
                np=self.num_processors.value()
            )
            
            if success:
                self.progress_bar.setRange(0, 100)
                self.progress_bar.setValue(100)
                self.status_label.setText("Simulation completed successfully")
                self.view_results_button.setEnabled(True)
                QtWidgets.QMessageBox.information(
                    self,
                    "Success",
                    "Simulation completed successfully!"
                )
            else:
                self.status_label.setText("Simulation failed")
                QtWidgets.QMessageBox.critical(
                    self,
                    "Error",
                    "Simulation failed. Check OpenFOAM log for details."
                )
                
        except Exception as e:
            self.status_label.setText("Simulation failed")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Simulation error: {str(e)}"
            )
        
        finally:
            self.progress_bar.setVisible(False)
            self.run_button.setEnabled(True)
            self.stop_button.setEnabled(False)
            self.setup_button.setEnabled(True)

    def stop_simulation(self):
        """Stop running simulation"""
        try:
            self.openfoam.stop_simulation()
            self.status_label.setText("Simulation stopped by user")
            self.stop_button.setEnabled(False)
            self.run_button.setEnabled(True)
            self.setup_button.setEnabled(True)
        except Exception as e:
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to stop simulation: {str(e)}"
            )

    def view_results(self):
        """Open results visualization"""
        if not self.current_case:
            return
            
        try:
            # Launch paraFoam for visualization
            import subprocess
            subprocess.Popen(['paraFoam', '-case', self.current_case])
        except Exception as e:
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to open ParaView: {str(e)}"
            )

# Register the panel as a FreeCAD dialog
Gui.addCommand('OpenFOAM_Main_Panel', OpenFOAMPanelCommand())