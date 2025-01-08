# freecad_openfoam/ui/solver_panel.py

from PySide2 import QtWidgets, QtCore
import FreeCAD as App
import FreeCADGui as Gui
from ..core.solver_manager import SolverManager, SolverType
from ..core.state_manager import OpenFOAMStateManager
from .style_utils import ThemeAwareWidget
from typing import Dict, Any, Optional
import json
import os


class SolverPanelCommand:
    """Command class for Solver main panel"""
    
    def GetResources(self):
        """Required method for FreeCAD commands"""
        return {
            'Pixmap': os.path.join(App.getHomePath(), "Mod", "freecad-openfoam", "freecad_openfoam", "icons", "Solver.svg"),
            'MenuText': 'Solver Control Panel',
            'ToolTip': 'Open the main Solver control panel'
        }
    
    def Activated(self):
        """Called when the command is run"""
        self.panel = SolverPanel()
        self.panel.show()
    
    def IsActive(self):
        """Return True to enable the command, False to disable"""
        return True

class SolverPanel(QtWidgets.QWidget):
    """Panel for OpenFOAM solver configuration"""
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.state_manager = OpenFOAMStateManager()  
        self.solver_manager = None
        self.case_dir = None  # Changed from directly accessing state_manager
        self.current_solver_type = None
        self.setup_ui()
        
        # Initialize case directory from state manager
        case_dir = self.state_manager.get_case_directory()
        if case_dir and os.path.exists(case_dir):
            print(f"Loading existing case: {case_dir}")
            self.set_case_directory(case_dir)
            self.case_selector.addItem(case_dir)
            self.case_selector.setCurrentText(case_dir)
        
        # Get recent cases
        recent_cases = self.state_manager.get_recent_cases()
        for case in recent_cases:
            if case != case_dir and os.path.exists(case):
                self.case_selector.addItem(case)
        
        self.state_manager.add_observer(self)

    def load_case_if_exists(self):
        """Load case directory if it exists"""
        case_dir = self.state_manager.get_case_directory()
        if case_dir:
            self.set_case_directory(case_dir)
            self.update_solver_state()
    
    def update_solver_state(self):
        """Update UI based on current solver settings"""
        if self.case_dir:
            solver_settings = self.state_manager.get_solver_settings()
            if solver_settings:
                # Update UI elements with saved settings
                self.solver_type.setCurrentText(solver_settings.get("solver_type", ""))
                # Update other UI elements based on settings

    def setup_ui(self):
        """Create the solver panel UI elements"""
        layout = QtWidgets.QVBoxLayout()

        # In setup_ui, modify the solver type section:
        type_group = QtWidgets.QGroupBox("Solver Type")
        type_layout = QtWidgets.QVBoxLayout()

        # Main solver type selection
        self.solver_type = QtWidgets.QComboBox()
        self.solver_type.addItems([
            "Single Phase Flow",
            "Multiphase Flow",
            "Pigging Simulation",
            "Spill Analysis",
            "Heat Transfer",
            "Species Transport"
        ])
        self.solver_type.currentTextChanged.connect(self.on_solver_type_changed)
        type_layout.addWidget(self.solver_type)

        # Add specific solver selection
        self.specific_solver = QtWidgets.QComboBox()
        type_layout.addWidget(self.specific_solver)

        type_group.setLayout(type_layout)
        layout.addWidget(type_group)

        # Solver Settings Stack
        self.settings_stack = QtWidgets.QStackedWidget()
        
        # Single Phase Settings
        self.single_phase_widget = self.create_single_phase_settings()
        self.settings_stack.addWidget(self.single_phase_widget)
        
        # Multiphase Settings
        self.multiphase_widget = self.create_multiphase_settings()
        self.settings_stack.addWidget(self.multiphase_widget)
        
        # Pigging Settings
        self.pigging_widget = self.create_pigging_settings()
        self.settings_stack.addWidget(self.pigging_widget)
        
        # Spill Settings
        self.spill_widget = self.create_spill_settings()
        self.settings_stack.addWidget(self.spill_widget)
        
        layout.addWidget(self.settings_stack)

        # Numerical Schemes
        schemes_group = QtWidgets.QGroupBox("Numerical Schemes")
        schemes_layout = QtWidgets.QFormLayout()
        
        self.time_scheme = QtWidgets.QComboBox()
        self.time_scheme.addItems(["Euler", "backward", "CrankNicolson"])
        schemes_layout.addRow("Time Scheme:", self.time_scheme)
        
        self.grad_scheme = QtWidgets.QComboBox()
        self.grad_scheme.addItems(["Gauss linear", "leastSquares", "Gauss cubic"])
        schemes_layout.addRow("Gradient Scheme:", self.grad_scheme)
        
        self.div_scheme = QtWidgets.QComboBox()
        self.div_scheme.addItems(["Gauss upwind", "Gauss linear", "Gauss limitedLinear"])
        schemes_layout.addRow("Divergence Scheme:", self.div_scheme)
        
        schemes_group.setLayout(schemes_layout)
        layout.addWidget(schemes_group)

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

        # Solution Controls
        solution_group = QtWidgets.QGroupBox("Solution Controls")
        solution_layout = QtWidgets.QFormLayout()
        
        self.n_correctors = QtWidgets.QSpinBox()
        self.n_correctors.setRange(1, 10)
        self.n_correctors.setValue(3)
        solution_layout.addRow("Number of Correctors:", self.n_correctors)
        
        self.n_non_ortho = QtWidgets.QSpinBox()
        self.n_non_ortho.setRange(0, 5)
        self.n_non_ortho.setValue(1)
        solution_layout.addRow("Non-Orthogonal Correctors:", self.n_non_ortho)
        
        self.relaxation_p = QtWidgets.QDoubleSpinBox()
        self.relaxation_p.setRange(0, 1)
        self.relaxation_p.setValue(0.3)
        self.relaxation_p.setSingleStep(0.1)
        solution_layout.addRow("Pressure Relaxation:", self.relaxation_p)
        
        self.relaxation_U = QtWidgets.QDoubleSpinBox()
        self.relaxation_U.setRange(0, 1)
        self.relaxation_U.setValue(0.7)
        self.relaxation_U.setSingleStep(0.1)
        solution_layout.addRow("Velocity Relaxation:", self.relaxation_U)
        
        solution_group.setLayout(solution_layout)
        layout.addWidget(solution_group)

        # Parallel Execution
        parallel_group = QtWidgets.QGroupBox("Parallel Execution")
        parallel_layout = QtWidgets.QFormLayout()
        
        self.parallel_enable = QtWidgets.QCheckBox()
        self.parallel_enable.stateChanged.connect(self.on_parallel_changed)
        parallel_layout.addRow("Enable Parallel:", self.parallel_enable)
        
        self.n_processors = QtWidgets.QSpinBox()
        self.n_processors.setRange(1, 64)
        self.n_processors.setValue(4)
        self.n_processors.setEnabled(False)
        parallel_layout.addRow("Number of Processors:", self.n_processors)
        
        self.decomp_method = QtWidgets.QComboBox()
        self.decomp_method.addItems(["scotch", "simple", "hierarchical"])
        self.decomp_method.setEnabled(False)
        parallel_layout.addRow("Decomposition Method:", self.decomp_method)
        
        parallel_group.setLayout(parallel_layout)
        layout.addWidget(parallel_group)

        # Action Buttons
        button_layout = QtWidgets.QHBoxLayout()
        
        self.configure_button = QtWidgets.QPushButton("Configure Solver")
        self.configure_button.clicked.connect(self.configure_solver)
        button_layout.addWidget(self.configure_button)
        
        self.reset_button = QtWidgets.QPushButton("Reset Settings")
        self.reset_button.clicked.connect(self.reset_settings)
        button_layout.addWidget(self.reset_button)
        
        layout.addLayout(button_layout)
        
        # Status Label
        self.status_label = QtWidgets.QLabel()
        layout.addWidget(self.status_label)
        
        self.setLayout(layout)

    def create_single_phase_settings(self) -> QtWidgets.QWidget:
        """Create settings widget for single phase flow"""
        widget = QtWidgets.QWidget()
        layout = QtWidgets.QFormLayout()
        
        self.turb_model_single = QtWidgets.QComboBox()
        self.turb_model_single.addItems([
            "laminar",
            "kEpsilon",
            "kOmega",
            "SpalartAllmaras"
        ])
        layout.addRow("Turbulence Model:", self.turb_model_single)
        
        self.viscosity = QtWidgets.QDoubleSpinBox()
        self.viscosity.setRange(1e-6, 1e3)
        self.viscosity.setValue(1e-5)
        self.viscosity.setDecimals(6)
        layout.addRow("Kinematic Viscosity:", self.viscosity)
        
        widget.setLayout(layout)
        return widget
    
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

    def create_multiphase_settings(self) -> QtWidgets.QWidget:
        """Create settings widget for multiphase flow"""
        widget = QtWidgets.QWidget()
        layout = QtWidgets.QFormLayout()
        
        self.n_phases = QtWidgets.QSpinBox()
        self.n_phases.setRange(2, 5)
        self.n_phases.setValue(2)
        layout.addRow("Number of Phases:", self.n_phases)
        
        self.surface_tension = QtWidgets.QDoubleSpinBox()
        self.surface_tension.setRange(0, 1)
        self.surface_tension.setValue(0.07)
        self.surface_tension.setDecimals(4)
        layout.addRow("Surface Tension:", self.surface_tension)
        
        self.interface_compression = QtWidgets.QDoubleSpinBox()
        self.interface_compression.setRange(0, 10)
        self.interface_compression.setValue(1)
        layout.addRow("Interface Compression:", self.interface_compression)
        
        widget.setLayout(layout)
        return widget

    def create_pigging_settings(self) -> QtWidgets.QWidget:
        """Create settings widget for pigging simulation"""
        widget = QtWidgets.QWidget()
        layout = QtWidgets.QFormLayout()
        
        self.pig_mass = QtWidgets.QDoubleSpinBox()
        self.pig_mass.setRange(0.1, 1000)
        self.pig_mass.setValue(10)
        layout.addRow("Pig Mass (kg):", self.pig_mass)
        
        self.pig_diameter = QtWidgets.QDoubleSpinBox()
        self.pig_diameter.setRange(0.01, 10)
        self.pig_diameter.setValue(0.1)
        layout.addRow("Pig Diameter (m):", self.pig_diameter)
        
        self.friction_coeff = QtWidgets.QDoubleSpinBox()
        self.friction_coeff.setRange(0, 1)
        self.friction_coeff.setValue(0.3)
        layout.addRow("Friction Coefficient:", self.friction_coeff)
        
        widget.setLayout(layout)
        return widget

    def create_spill_settings(self) -> QtWidgets.QWidget:
        """Create settings widget for spill analysis"""
        widget = QtWidgets.QWidget()
        layout = QtWidgets.QFormLayout()
        
        self.fluid_type = QtWidgets.QComboBox()
        self.fluid_type.addItems(["oil", "chemical", "gas"])
        layout.addRow("Fluid Type:", self.fluid_type)
        
        self.fluid_density = QtWidgets.QDoubleSpinBox()
        self.fluid_density.setRange(1, 2000)
        self.fluid_density.setValue(900)
        layout.addRow("Fluid Density (kg/m³):", self.fluid_density)
        
        self.evap_model = QtWidgets.QComboBox()
        self.evap_model.addItems(["constant", "temperature-dependent"])
        layout.addRow("Evaporation Model:", self.evap_model)
        
        widget.setLayout(layout)
        return widget

    def on_solver_type_changed(self, solver_type: str):
        """Handle solver type change"""
        type_map = {
            "Single Phase Flow": {
                "index": 0,
                "solvers": [
                    "simpleFoam", 
                    "pimpleFoam",
                    "pisoFoam",
                    "rhoPimpleFoam",
                    "rhoSimpleFoam",
                    "rhoPisoFoam"
                ]
            },
            "Multiphase Flow": {
                "index": 1,
                "solvers": [
                    "interFoam",
                    "multiphaseInterFoam",
                    "compressibleInterFoam",
                    "multiphaseCompressibleInterFoam",
                    "twoPhaseEulerFoam",
                    "reactingTwoPhaseEulerFoam",
                    "multiphaseEulerFoam"
                ]
            },
            "Pigging Simulation": {
                "index": 2,
                "solvers": [
                    "pigFoam",
                    "pigDyMFoam",
                    "dynamicPigFoam",
                    "compressiblePigFoam"
                ]
            },
            "Spill Analysis": {
                "index": 3,
                "solvers": [
                    "spillFoam",
                    "surfaceSpillFoam",
                    "subsurfaceSpillFoam",
                    "reactingSpillFoam"
                ]
            },
            "Heat Transfer": {
                "index": 4,
                "solvers": [
                    "buoyantFoam",
                    "buoyantPimpleFoam",
                    "buoyantSimpleFoam",
                    "buoyantBoussinesqFoam",
                    "thermoPimpleFoam"
                ]
            },
            "Species Transport": {
                "index": 5,
                "solvers": [
                    "speciesFoam",
                    "reactingFoam",
                    "chemFoam",
                    "reactingSpeciesFoam",
                    "coalChemistryFoam"
                ]
            }
        }
        
        if solver_type in type_map:
            self.settings_stack.setCurrentIndex(type_map[solver_type]["index"])
            # Update available specific solvers
            self.specific_solver.clear()
            self.specific_solver.addItems(type_map[solver_type]["solvers"])

    def on_parallel_changed(self, state: int):
        """Handle parallel execution checkbox change"""
        enabled = state == QtCore.Qt.Checked
        self.n_processors.setEnabled(enabled)
        self.decomp_method.setEnabled(enabled)

    def update_available_solvers(self):
        """Update available solvers based on current type"""
        if not self.solver_manager or not self.current_solver_type:
            return
            
        solvers = self.solver_manager.get_available_solvers(self.current_solver_type)
        if solvers:
            self.solver_type.clear()
            self.solver_type.addItems(solvers)

    def set_case_directory(self, case_dir: str):
        """Set case directory and initialize solver manager"""
        try:
            if case_dir and os.path.exists(case_dir):
                print(f"Setting case directory: {case_dir}")
                self.case_dir = case_dir
                self.solver_manager = SolverManager(case_dir)
                
                # Update UI
                if self.case_selector.findText(case_dir) == -1:
                    self.case_selector.addItem(case_dir)
                self.case_selector.setCurrentText(case_dir)
                
                # Enable UI elements
                self.solver_type.setEnabled(True)
                self.configure_button.setEnabled(True)
                
                # Load settings if available
                self.load_solver_state()
                
                self.status_label.setText(f"Case directory set: {case_dir}")
                return True
                
        except Exception as e:
            print(f"Error setting case directory: {str(e)}")
            self.status_label.setText(f"Error: {str(e)}")
            return False
    
    def validate_case_directory(self):
        """Validate current case directory"""
        if not self.case_dir or not os.path.exists(self.case_dir):
            self.status_label.setText("No valid case directory selected")
            return False
            
        required_dirs = ['system', 'constant', '0']
        for dir_name in required_dirs:
            dir_path = os.path.join(self.case_dir, dir_name)
            if not os.path.exists(dir_path):
                self.status_label.setText(f"Missing required directory: {dir_name}")
                return False
                
        return True
    
    def save_solver_state(self):
        """Save current solver settings to state manager"""
        solver_state = {
            "solver_type": self.solver_type.currentText(),
            "parameters": self.get_solver_parameters(),
            "numerical_schemes": {
                "time_scheme": self.time_scheme.currentText(),
                "grad_scheme": self.grad_scheme.currentText(),
                "div_scheme": self.div_scheme.currentText()
            },
            "solution_controls": {
                "n_correctors": self.n_correctors.value(),
                "n_non_ortho": self.n_non_ortho.value(),
                "relaxation_p": self.relaxation_p.value(),
                "relaxation_U": self.relaxation_U.value()
            },
            "parallel": {
                "enabled": self.parallel_enable.isChecked(),
                "n_processors": self.n_processors.value(),
                "decomp_method": self.decomp_method.currentText()
            }
        }
        self.state_manager.set_solver_settings(solver_state)

    def load_solver_state(self):
        """Load solver settings from state manager"""
        solver_state = self.state_manager.get_solver_settings()
        if solver_state:
            # Set solver type
            solver_type = solver_state.get("solver_type")
            if solver_type:
                self.solver_type.setCurrentText(solver_type)
            
            # Apply numerical schemes
            schemes = solver_state.get("numerical_schemes", {})
            if "time_scheme" in schemes:
                self.time_scheme.setCurrentText(schemes["time_scheme"])
            if "grad_scheme" in schemes:
                self.grad_scheme.setCurrentText(schemes["grad_scheme"])
            if "div_scheme" in schemes:
                self.div_scheme.setCurrentText(schemes["div_scheme"])
            
            # Apply solution controls
            controls = solver_state.get("solution_controls", {})
            if "n_correctors" in controls:
                self.n_correctors.setValue(controls["n_correctors"])
            if "n_non_ortho" in controls:
                self.n_non_ortho.setValue(controls["n_non_ortho"])
            if "relaxation_p" in controls:
                self.relaxation_p.setValue(controls["relaxation_p"])
            if "relaxation_U" in controls:
                self.relaxation_U.setValue(controls["relaxation_U"])
            
            # Apply parallel settings
            parallel = solver_state.get("parallel", {})
            self.parallel_enable.setChecked(parallel.get("enabled", False))
            self.n_processors.setValue(parallel.get("n_processors", 4))
            self.decomp_method.setCurrentText(parallel.get("decomp_method", "scotch"))
            
            # Apply parameters
            params = solver_state.get("parameters", {})
            self._apply_loaded_parameters(params)

    def update_case_directory(self, new_path):
        """Observer method called when case directory changes"""
        if new_path != self.case_dir:
            self.set_case_directory(new_path)

    def get_solver_parameters(self) -> Dict[str, Any]:
        """Collect solver parameters from UI"""
        params = {
            "time_scheme": self.time_scheme.currentText(),
            "grad_scheme": self.grad_scheme.currentText(),
            "div_scheme": self.div_scheme.currentText(),
            "n_correctors": self.n_correctors.value(),
            "n_non_ortho_correctors": self.n_non_ortho.value(),
            "relaxation_factors": {
                "p": self.relaxation_p.value(),
                "U": self.relaxation_U.value()
            },
            "parallel": {
                "enabled": self.parallel_enable.isChecked(),
                "n_processors": self.n_processors.value(),
                "decomp_method": self.decomp_method.currentText()
            }
        }
        
        # Add solver-specific parameters
        if self.current_solver_type:
            params.update(self._get_specific_params())
            
        return params

    def _get_specific_params(self) -> Dict[str, Any]:
        """Get solver-specific parameters"""
        if self.current_solver_type == SolverType.SINGLE_PHASE:
            return {
                "turbulence_model": self.turb_model_single.currentText(),
                "viscosity": self.viscosity.value()
            }
        elif self.current_solver_type == SolverType.MULTIPHASE:
            return {
                "n_phases": self.n_phases.value(),
                "surface_tension": self.surface_tension.value(),
                "interface_compression": self.interface_compression.value()
            }
        elif self.current_solver_type == SolverType.PIGGING:
            return {
                "pig_mass": self.pig_mass.value(),
                "pig_diameter": self.pig_diameter.value(),
                "friction_coefficient": self.friction_coeff.value()
            }
        elif self.current_solver_type == SolverType.SPILL:
            return {
                "fluid_type": self.fluid_type.currentText(),
                "fluid_density": self.fluid_density.value(),
                "evaporation_model": self.evap_model.currentText()
            }
        return {}

    def _get_solver_type_enum(self, ui_solver_type: str) -> SolverType:
        """Convert UI solver type string to SolverType enum"""
        # Single Phase Solvers
        singlephase_solvers = {
            "simpleFoam", 
            "pimpleFoam",
            "pisoFoam",
            "rhoPimpleFoam",
            "rhoSimpleFoam",
            "rhoPisoFoam"
        }

        # Multiphase Solvers
        multiphase_solvers = {
            "interFoam",
            "multiphaseInterFoam",
            "compressibleInterFoam",
            "multiphaseCompressibleInterFoam",
            "twoPhaseEulerFoam",
            "reactingTwoPhaseEulerFoam",
            "multiphaseEulerFoam"
        }

        # Pigging Solvers
        pigging_solvers = {
            "pigFoam",
            "pigDyMFoam",
            "dynamicPigFoam",
            "compressiblePigFoam"
        }

        # Spill Solvers
        spill_solvers = {
            "spillFoam",
            "surfaceSpillFoam",
            "subsurfaceSpillFoam",
            "reactingSpillFoam"
        }

        # Heat Transfer Solvers
        heat_solvers = {
            "buoyantFoam",
            "buoyantPimpleFoam",
            "buoyantSimpleFoam",
            "buoyantBoussinesqFoam",
            "thermoPimpleFoam"
        }

        # Species Transport Solvers
        species_solvers = {
            "speciesFoam",
            "reactingFoam",
            "chemFoam",
            "reactingSpeciesFoam",
            "coalChemistryFoam"
        }

        # Map solver to type
        if ui_solver_type in singlephase_solvers:
            return SolverType.SINGLEPHASE
        elif ui_solver_type in multiphase_solvers:
            return SolverType.MULTIPHASE
        elif ui_solver_type in pigging_solvers:
            return SolverType.PIGGING
        elif ui_solver_type in spill_solvers:
            return SolverType.SPILL
        elif ui_solver_type in heat_solvers:
            return SolverType.HEAT
        elif ui_solver_type in species_solvers:
            return SolverType.SPECIES
        else:
            print(f"Warning: Unknown solver type '{ui_solver_type}', defaulting to SINGLEPHASE")
            return SolverType.SINGLEPHASE

    def configure_solver(self):
        """Configure solver with current settings"""
        if not self.validate_case_directory():
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "No valid case directory selected. Please select or create a case first."
            )
            return

        try:
            if not self.solver_manager:
                self.solver_manager = SolverManager(self.case_dir)
                
            # Get parameters from UI
            params = self.get_solver_parameters()
            print(f"Configuring solver with parameters: {params}")
            
            # Get selected specific solver
            specific_solver = self.specific_solver.currentText()
            solver_type = self._get_solver_type_from_name(specific_solver)
            
            print(f"Selected specific solver: {specific_solver}")
            print(f"Solver type: {solver_type}")
            print(f"Case directory: {self.case_dir}")
            
            # Add solver name to parameters
            params['solver_name'] = specific_solver
            
            # Configure the solver
            success = self.solver_manager.prepare_solver(
                solver_type=solver_type,
                parameters=params
            )
            
            if success:
                self.save_solver_state()
                self.status_label.setText(f"Solver {specific_solver} configured successfully")
                QtWidgets.QMessageBox.information(
                    self,
                    "Success",
                    f"Solver {specific_solver} configured successfully for case: {self.case_dir}"
                )
            else:
                error_msg = f"Failed to configure solver {specific_solver}. Check OpenFOAM logs for details."
                self.status_label.setText(error_msg)
                QtWidgets.QMessageBox.critical(
                    self,
                    "Error",
                    error_msg
                )
                
        except Exception as e:
            error_msg = f"Error configuring solver: {str(e)}"
            print(error_msg)
            print(f"Full error details: {type(e).__name__}: {str(e)}")
            self.status_label.setText(error_msg)
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                error_msg
            )

    def _get_solver_type_from_name(self, solver_name: str) -> SolverType:
        """Get SolverType enum from specific solver name"""
        # Mapping of solver names to types
        solver_type_mapping = {
            # Single Phase solvers
            "simpleFoam": SolverType.SINGLEPHASE,
            "pimpleFoam": SolverType.SINGLEPHASE,
            "pisoFoam": SolverType.SINGLEPHASE,
            "rhoPimpleFoam": SolverType.SINGLEPHASE,
            "rhoSimpleFoam": SolverType.SINGLEPHASE,
            "rhoPisoFoam": SolverType.SINGLEPHASE,
            
            # Multiphase solvers
            "interFoam": SolverType.MULTIPHASE,
            "multiphaseInterFoam": SolverType.MULTIPHASE,
            "compressibleInterFoam": SolverType.MULTIPHASE,
            "multiphaseCompressibleInterFoam": SolverType.MULTIPHASE,
            "twoPhaseEulerFoam": SolverType.MULTIPHASE,
            "reactingTwoPhaseEulerFoam": SolverType.MULTIPHASE,
            "multiphaseEulerFoam": SolverType.MULTIPHASE,
            
            # Pigging solvers
            "pigFoam": SolverType.PIGGING,
            "pigDyMFoam": SolverType.PIGGING,
            "dynamicPigFoam": SolverType.PIGGING,
            "compressiblePigFoam": SolverType.PIGGING,
            
            # Spill solvers
            "spillFoam": SolverType.SPILL,
            "surfaceSpillFoam": SolverType.SPILL,
            "subsurfaceSpillFoam": SolverType.SPILL,
            "reactingSpillFoam": SolverType.SPILL,
            
            # Heat Transfer solvers
            "buoyantFoam": SolverType.HEAT,
            "buoyantPimpleFoam": SolverType.HEAT,
            "buoyantSimpleFoam": SolverType.HEAT,
            "buoyantBoussinesqFoam": SolverType.HEAT,
            "thermoPimpleFoam": SolverType.HEAT,
            
            # Species Transport solvers
            "speciesFoam": SolverType.SPECIES,
            "reactingFoam": SolverType.SPECIES,
            "chemFoam": SolverType.SPECIES,
            "reactingSpeciesFoam": SolverType.SPECIES,
            "coalChemistryFoam": SolverType.SPECIES
        }
        
        return solver_type_mapping.get(solver_name, SolverType.SINGLEPHASE)  # Default to SINGLEPHASE if not found

    def reset_settings(self):
        """Reset all settings to default values"""
        try:
            # Reset numerical schemes
            self.time_scheme.setCurrentText("Euler")
            self.grad_scheme.setCurrentText("Gauss linear")
            self.div_scheme.setCurrentText("Gauss upwind")
            
            # Reset solution controls
            self.n_correctors.setValue(3)
            self.n_non_ortho.setValue(1)
            self.relaxation_p.setValue(0.3)
            self.relaxation_U.setValue(0.7)
            
            # Reset parallel settings
            self.parallel_enable.setChecked(False)
            self.n_processors.setValue(4)
            self.decomp_method.setCurrentText("scotch")
            
            # Reset solver-specific settings based on current type
            self._reset_specific_settings()
            
            self.status_label.setText("Settings reset to defaults")
            
        except Exception as e:
            self.status_label.setText(f"Error resetting settings: {str(e)}")
            QtWidgets.QMessageBox.critical(
                self,
                "Error",
                f"Failed to reset settings: {str(e)}"
            )

    def _reset_specific_settings(self):
        """Reset solver-specific settings to defaults"""
        if self.current_solver_type == SolverType.SINGLE_PHASE:
            self.turb_model_single.setCurrentText("kEpsilon")
            self.viscosity.setValue(1e-5)
            
        elif self.current_solver_type == SolverType.MULTIPHASE:
            self.n_phases.setValue(2)
            self.surface_tension.setValue(0.07)
            self.interface_compression.setValue(1)
            
        elif self.current_solver_type == SolverType.PIGGING:
            self.pig_mass.setValue(10)
            self.pig_diameter.setValue(0.1)
            self.friction_coeff.setValue(0.3)
            
        elif self.current_solver_type == SolverType.SPILL:
            self.fluid_type.setCurrentText("oil")
            self.fluid_density.setValue(900)
            self.evap_model.setCurrentText("constant")

    def save_settings(self, filename: str) -> bool:
        """Save current solver settings to file"""
        try:
            settings = {
                "solver_type": self.solver_type.currentText(),
                "parameters": self.get_solver_parameters()
            }
            
            with open(filename, 'w') as f:
                json.dump(settings, f, indent=4)
                
            self.status_label.setText(f"Settings saved to {filename}")
            return True
            
        except Exception as e:
            self.status_label.setText(f"Error saving settings: {str(e)}")
            return False

    def load_settings(self, filename: str) -> bool:
        """Load solver settings from file"""
        try:
            with open(filename, 'r') as f:
                settings = json.load(f)
                
            # Set solver type
            solver_type = settings.get("solver_type")
            if solver_type:
                self.solver_type.setCurrentText(solver_type)
                
            # Apply parameters
            params = settings.get("parameters", {})
            self._apply_loaded_parameters(params)
            
            self.status_label.setText(f"Settings loaded from {filename}")
            return True
            
        except Exception as e:
            self.status_label.setText(f"Error loading settings: {str(e)}")
            return False

    def _apply_loaded_parameters(self, params: Dict[str, Any]):
        """Apply loaded parameters to UI elements"""
        # Apply numerical schemes
        if "time_scheme" in params:
            self.time_scheme.setCurrentText(params["time_scheme"])
        if "grad_scheme" in params:
            self.grad_scheme.setCurrentText(params["grad_scheme"])
        if "div_scheme" in params:
            self.div_scheme.setCurrentText(params["div_scheme"])
            
        # Apply solution controls
        if "n_correctors" in params:
            self.n_correctors.setValue(params["n_correctors"])
        if "n_non_ortho_correctors" in params:
            self.n_non_ortho.setValue(params["n_non_ortho_correctors"])
            
        if "relaxation_factors" in params:
            relax = params["relaxation_factors"]
            if "p" in relax:
                self.relaxation_p.setValue(relax["p"])
            if "U" in relax:
                self.relaxation_U.setValue(relax["U"])
                
        # Apply parallel settings
        if "parallel" in params:
            parallel = params["parallel"]
            self.parallel_enable.setChecked(parallel.get("enabled", False))
            if "n_processors" in parallel:
                self.n_processors.setValue(parallel["n_processors"])
            if "decomp_method" in parallel:
                self.decomp_method.setCurrentText(parallel["decomp_method"])
                
        # Apply solver-specific parameters
        self._apply_specific_parameters(params)

    def _apply_specific_parameters(self, params: Dict[str, Any]):
        """Apply solver-specific parameters"""
        if self.current_solver_type == SolverType.SINGLE_PHASE:
            if "turbulence_model" in params:
                self.turb_model_single.setCurrentText(params["turbulence_model"])
            if "viscosity" in params:
                self.viscosity.setValue(params["viscosity"])
                
        elif self.current_solver_type == SolverType.MULTIPHASE:
            if "n_phases" in params:
                self.n_phases.setValue(params["n_phases"])
            if "surface_tension" in params:
                self.surface_tension.setValue(params["surface_tension"])
            if "interface_compression" in params:
                self.interface_compression.setValue(params["interface_compression"])
                
        elif self.current_solver_type == SolverType.PIGGING:
            if "pig_mass" in params:
                self.pig_mass.setValue(params["pig_mass"])
            if "pig_diameter" in params:
                self.pig_diameter.setValue(params["pig_diameter"])
            if "friction_coefficient" in params:
                self.friction_coeff.setValue(params["friction_coefficient"])
                
        elif self.current_solver_type == SolverType.SPILL:
            if "fluid_type" in params:
                self.fluid_type.setCurrentText(params["fluid_type"])
            if "fluid_density" in params:
                self.fluid_density.setValue(params["fluid_density"])
            if "evaporation_model" in params:
                self.evap_model.setCurrentText(params["evaporation_model"])

# Register the panel as a FreeCAD dialog
Gui.addCommand('OpenFOAM_Solver_Panel', SolverPanelCommand())