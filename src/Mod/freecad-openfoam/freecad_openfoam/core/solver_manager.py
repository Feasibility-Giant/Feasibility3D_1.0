# freecad_openfoam/core/solver_manager.py

import os
from typing import Dict, Any, Optional, List
from enum import Enum, auto
from ..solvers.base_solver import BaseSolver
from ..solvers.multiphase import MultiphaseSolver
from ..solvers.pigging import PiggingSolver
from ..solvers.spill import SpillSolver

class SolverType(Enum):
    SINGLEPHASE = "pimpleFoam"  # Default single phase solver
    MULTIPHASE = "multiphaseInterFoam"  # Default multiphase solver
    PIGGING = "pigDyMFoam"  # Default pigging solver
    SPILL = "surfaceSpillFoam"  # Default spill solver
    HEAT = "buoyantPimpleFoam"  # Default heat transfer solver
    SPECIES = "reactingFoam"  # Default species transport solver

    @staticmethod
    def get_available_solvers(solver_type):
        """Get available solvers for a given type"""
        solver_mapping = {
            SolverType.SINGLEPHASE: [
                "simpleFoam", 
                "pimpleFoam",
                "pisoFoam",
                "rhoPimpleFoam",
                "rhoSimpleFoam",
                "rhoPisoFoam"
            ],
            SolverType.MULTIPHASE: [
                "interFoam",
                "multiphaseInterFoam",
                "compressibleInterFoam",
                "multiphaseCompressibleInterFoam",
                "twoPhaseEulerFoam",
                "reactingTwoPhaseEulerFoam",
                "multiphaseEulerFoam"
            ],
            SolverType.PIGGING: [
                "pigFoam",
                "pigDyMFoam",
                "dynamicPigFoam",
                "compressiblePigFoam"
            ],
            SolverType.SPILL: [
                "spillFoam",
                "surfaceSpillFoam",
                "subsurfaceSpillFoam",
                "reactingSpillFoam"
            ],
            SolverType.HEAT: [
                "buoyantFoam",
                "buoyantPimpleFoam",
                "buoyantSimpleFoam",
                "buoyantBoussinesqFoam",
                "thermoPimpleFoam"
            ],
            SolverType.SPECIES: [
                "speciesFoam",
                "reactingFoam",
                "chemFoam",
                "reactingSpeciesFoam",
                "coalChemistryFoam"
            ]
        }
        return solver_mapping.get(solver_type, [])


class SolverManager:
    """Manager class for OpenFOAM solvers"""
    
    def __init__(self, case_dir: str):
        self.case_dir = case_dir
        self.current_solver: Optional[BaseSolver] = None
        self._initialize_solvers()

    def _initialize_solvers(self):
        """Initialize solver mappings"""
        self.solver_mapping = {
            SolverType.MULTIPHASE: {
                "class": MultiphaseSolver,
                "executables": ["interFoam", "multiphaseInterFoam", "compressibleInterFoam"],
                "required_fields": ["alpha.water", "U", "p_rgh"]
            },
            SolverType.PIGGING: {
                "class": PiggingSolver,
                "executables": ["pigFoam", "pigDyMFoam"],
                "required_fields": ["U", "p", "pig"]
            },
            SolverType.SPILL: {
                "class": SpillSolver,
                "executables": ["spillFoam", "surfaceSpillFoam"],
                "required_fields": ["alpha.oil", "U", "p"]
            }
        }

    def create_solver(self, solver_type: SolverType, parameters: Dict[str, Any]) -> BaseSolver:
        """Create and configure a solver instance"""
        if solver_type not in self.solver_mapping:
            raise ValueError(f"Unsupported solver type: {solver_type}")

        solver_info = self.solver_mapping[solver_type]
        solver_class = solver_info["class"]
        
        # Create solver instance
        solver = solver_class(self.case_dir)
        
        # Configure solver
        solver.configure(parameters)
        
        # Store current solver
        self.current_solver = solver
        
        return solver
    
    def on_solver_type_changed(self, solver_type: str):
        """Handle solver type change"""
        type_map = {
            "Single Phase Flow": 0,
            "Multiphase Flow": 1,
            "Pigging Simulation": 2,
            "Spill Analysis": 3,
            "Heat Transfer": 4,
            "Species Transport": 5
        }
        
        if solver_type in type_map:
            self.settings_stack.setCurrentIndex(type_map[solver_type])
            try:
                # Convert UI string to enum value
                enum_name = solver_type.replace(" ", "_").upper()
                self.current_solver_type = SolverType[enum_name]
                self.update_available_solvers()
            except KeyError as e:
                print(f"Invalid solver type: {solver_type}")
                print(f"Available types: {list(SolverType.__members__.keys())}")

    def get_available_solvers(self, solver_type: Optional[SolverType] = None) -> List[str]:
        """Get list of available OpenFOAM solvers"""
        if solver_type:
            if solver_type not in self.solver_mapping:
                return []
            return self.solver_mapping[solver_type]["executables"]
        
        # Return all available solvers if type not specified
        all_solvers = []
        for solver_info in self.solver_mapping.values():
            all_solvers.extend(solver_info["executables"])
        return sorted(all_solvers)

    def validate_solver_requirements(self, solver_type: SolverType) -> bool:
        """Validate that all required fields exist for the solver"""
        if solver_type not in self.solver_mapping:
            return False

        required_fields = self.solver_mapping[solver_type]["required_fields"]
        zero_dir = os.path.join(self.case_dir, "0")
        
        if not os.path.exists(zero_dir):
            return False

        # Check for required field files
        for field in required_fields:
            field_path = os.path.join(zero_dir, field)
            if not os.path.exists(field_path):
                return False

        return True

    def prepare_solver(self, solver_type: SolverType, parameters: Dict[str, Any]) -> bool:
        """Prepare solver configuration and validate setup"""
        try:
            print(f"Preparing solver of type {solver_type} with parameters:")
            print(parameters)
            
            # Set up fields
            if not self.setup_fields(solver_type):
                print("Failed to set up fields")
                return False

            # Additional setup for multiphase
            if solver_type == SolverType.MULTIPHASE:
                if not self._setup_multiphase_fields():
                    print("Failed to setup multiphase specific fields")
                    return False

            # Create solver
            try:
                solver = self.create_solver(solver_type, parameters)
                self.current_solver = solver
            except ValueError as e:
                print(f"Solver creation failed: {e}")
                return False

            print(f"Solver {solver_type} prepared successfully")
            return True
                
        except Exception as e:
            print(f"Failed to prepare solver: {str(e)}")
            return False

    def setup_base_configuration(self, solver_type: SolverType, parameters: Dict[str, Any]) -> bool:
        """Set up basic configuration for solvers without specific implementations"""
        try:
            # Create system directory
            system_dir = os.path.join(self.case_dir, "system")
            os.makedirs(system_dir, exist_ok=True)

            # Set up basic controlDict, fvSchemes, and fvSolution
            # This would be based on the solver type and parameters
            print(f"Setting up base configuration for {solver_type}")
            
            # You might want to write these files based on the solver type
            # For now, we'll just return True
            return True
        except Exception as e:
            print(f"Failed to set up base configuration: {str(e)}")
            return False

    def get_solver_parameters(self, solver_type: SolverType) -> Dict[str, Any]:
        """Get default parameters for specified solver type"""
        base_params = {
            "startTime": 0,
            "endTime": 1000,
            "deltaT": 0.001,
            "writeInterval": 100,
            "adjustTimeStep": True,
            "maxCo": 1.0
        }

        if solver_type == SolverType.MULTIPHASE:
            base_params.update({
                "phases": ["water", "air"],
                "surface_tension": 0.07,
                "turbulence_model": "kEpsilon"
            })
        elif solver_type == SolverType.PIGGING:
            base_params.update({
                "pig_mass": 10.0,
                "pig_diameter": 0.1,
                "friction_coefficient": 0.3
            })
        elif solver_type == SolverType.SPILL:
            base_params.update({
                "fluid_type": "oil",
                "fluid_density": 900,
                "evaporation_model": "constant"
            })

        return base_params
    
    def _debug_print_directories(self):
        """Print debug information about case directories"""
        print(f"\nCase Directory Structure:")
        print(f"Base dir: {self.case_dir}")
        print(f"0 dir exists: {os.path.exists(os.path.join(self.case_dir, '0'))}")
        print(f"system dir exists: {os.path.exists(os.path.join(self.case_dir, 'system'))}")
        print(f"constant dir exists: {os.path.exists(os.path.join(self.case_dir, 'constant'))}")

    def _debug_print_solver_info(self, solver_type: SolverType):
        """Print debug information about solver setup"""
        print(f"\nSolver Information:")
        print(f"Type: {solver_type}")
        if solver_type in self.solver_mapping:
            info = self.solver_mapping[solver_type]
            print(f"Class: {info['class']}")
            print(f"Executables: {info['executables']}")
            print(f"Required fields: {info['required_fields']}")
        else:
            print("No specific solver implementation found")

    def configure_decomposition(self, n_processors: int) -> bool:
        """Configure domain decomposition for parallel execution"""
        if not self.current_solver:
            return False

        try:
            self.current_solver.configure_decomposition({
                "n_processors": n_processors,
                "decomposition_method": "scotch"
            })
            return True
        except Exception as e:
            print(f"Failed to configure decomposition: {e}")
            return False

    def setup_fields(self, solver_type: SolverType) -> bool:
        """Set up initial fields for the specified solver type"""
        try:
            print(f"Setting up fields for {solver_type}")
            zero_dir = os.path.join(self.case_dir, "0")
            os.makedirs(zero_dir, exist_ok=True)

            # Define required fields based on solver type
            field_requirements = {
                SolverType.MULTIPHASE: ["U", "p_rgh", "alpha.water", "k", "epsilon", "omega"],
                SolverType.SINGLEPHASE: ["U", "p", "k", "epsilon"],
                SolverType.PIGGING: ["U", "p", "pig"],
                SolverType.SPILL: ["U", "p", "alpha.oil"],
                SolverType.HEAT: ["U", "p", "T"],
                SolverType.SPECIES: ["U", "p", "Yi"]
            }

            required_fields = field_requirements.get(solver_type, ["U", "p"])
            print(f"Required fields for {solver_type}: {required_fields}")

            # Create each required field
            for field in required_fields:
                field_path = os.path.join(zero_dir, field)
                print(f"Creating field file: {field_path}")
                
                field_dict = self._get_default_field_dict(field)
                self._write_field_file(field_path, field_dict)

            print("Fields setup completed successfully")
            return True

        except Exception as e:
            print(f"Failed to set up fields: {str(e)}")
            return False

    def _write_field_file(self, file_path: str, field_dict: Dict[str, Any]) -> None:
        """Write OpenFOAM field dictionary to file"""
        try:
            with open(file_path, 'w') as f:
                f.write(self._format_foam_dict(field_dict, os.path.basename(file_path)))
        except Exception as e:
            print(f"Error writing field file {file_path}: {str(e)}")
            raise

    def _format_foam_dict(self, d: Dict[str, Any], field_name: str, indent: int = 0) -> str:
        """Format dictionary as OpenFOAM dictionary format"""
        # Determine dictionary class based on filename
        if field_name == "transportProperties":
            dict_class = "dictionary"
        elif field_name.startswith("alpha."):
            dict_class = "volScalarField"
        elif field_name == "U":
            dict_class = "volVectorField"
        else:
            dict_class = "volScalarField"

        lines = ["/*--------------------------------*- C++ -*----------------------------------*\\",
                "| =========                 |                                                 |",
                "| \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |",
                "|  \\\\    /   O peration     | Version:  v2312                                 |",
                "|   \\\\  /    A nd           | Website:  www.openfoam.com                      |",
                "|    \\\\/     M anipulation  |                                                 |",
                "\\*---------------------------------------------------------------------------*/",
                "FoamFile",
                "{",
                "    version     2.0;",
                "    format      ascii;",
                f"    class       {dict_class};",
                f"    object      {field_name};",
                "}",
                "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //\n"]

        def format_value(v):
            if isinstance(v, dict):
                return "{\n" + "\n".join(f"    {k}    {format_value(val)};" for k, val in v.items()) + "\n}"
            return str(v)

        for key, value in d.items():
            lines.append(f"{' ' * indent}{key}    {format_value(value)};")

        lines.append("\n// ************************************************************************* //")
        return "\n".join(lines)

    def _get_default_field_dict(self, field_name: str) -> Dict[str, Any]:
        """Get default dictionary for field initialization"""
        default_dict = {
            "dimensions": "[0 0 0 0 0 0 0]",
            "internalField": "uniform 0",
            "boundaryField": {
                "defaultFaces": {
                    "type": "zeroGradient"
                }
            }
        }

        if field_name == "U":
            return {
                "dimensions": "[0 1 -1 0 0 0 0]",
                "internalField": "uniform (0 0 0)",
                "boundaryField": {
                    "defaultFaces": {
                        "type": "fixedValue",
                        "value": "uniform (0 0 0)"
                    }
                }
            }
        elif field_name == "p_rgh":
            return {
                "dimensions": "[1 -1 -2 0 0 0 0]",
                "internalField": "uniform 0",
                "boundaryField": {
                    "defaultFaces": {
                        "type": "fixedFluxPressure",
                        "value": "uniform 0"
                    }
                }
            }
        elif field_name.startswith("alpha."):
            return {
                "dimensions": "[0 0 0 0 0 0 0]",
                "internalField": "uniform 0",
                "boundaryField": {
                    "defaultFaces": {
                        "type": "zeroGradient"
                    }
                }
            }
        elif field_name in ["k", "epsilon", "omega"]:
            return {
                "dimensions": "[0 2 -2 0 0 0 0]",
                "internalField": "uniform 0.1",
                "boundaryField": {
                    "defaultFaces": {
                        "type": "kqRWallFunction",
                        "value": "uniform 0.1"
                    }
                }
            }
        
        return default_dict
    
    def _setup_multiphase_fields(self) -> bool:
        """Set up additional fields needed for multiphase simulation"""
        try:
            zero_dir = os.path.join(self.case_dir, "0")
            
            # Add transport properties
            constant_dir = os.path.join(self.case_dir, "constant")
            os.makedirs(constant_dir, exist_ok=True)
            
            transport_props = {
                "transportModel": "Newtonian",
                "phases": {
                    "water": {
                        "transportModel": "Newtonian",
                        "nu": "1e-06",
                        "rho": "1000"
                    },
                    "air": {
                        "transportModel": "Newtonian",
                        "nu": "1.48e-05",
                        "rho": "1"
                    }
                },
                "sigma": "0.07"
            }
            
            # Write transportProperties file
            transport_file = os.path.join(constant_dir, "transportProperties")
            with open(transport_file, 'w') as f:
                f.write(self._format_foam_dict(transport_props, "transportProperties"))  # Pass the filename
                
            print("Multiphase transport properties set up successfully")
            return True
            
        except Exception as e:
            print(f"Failed to setup multiphase fields: {str(e)}")
            return False