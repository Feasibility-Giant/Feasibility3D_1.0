# freecad_openfoam/core/openfoam_interface.py

import os
import subprocess
import yaml
from typing import Dict, Any, List, Optional
from typing import Dict, List, Optional, Union
from pathlib import Path

class OpenFOAMInterface:
    """Core interface to OpenFOAM functionality"""
    
    def __init__(self):
        # Try environment variable first
        self.foam_dir = os.getenv("WM_PROJECT_DIR")
        
        # If not found, check common installation paths
        if not self.foam_dir:
            possible_paths = [
                '/opt/openfoam12',
                '/usr/local/openfoam12',
                os.path.expanduser('~/OpenFOAM/OpenFOAM-12'),
                '/opt/openfoam',
                '/usr/local/openfoam'
            ]
            
            for path in possible_paths:
                if os.path.exists(path) and os.path.exists(os.path.join(path, 'etc', 'bashrc')):
                    self.foam_dir = path
                    break
        
        if not self.foam_dir:
            raise RuntimeError("OpenFOAM environment not found")
        
        self.available_solvers = self._get_available_solvers()
        self.case_dir = None

    def _get_available_solvers(self) -> List[str]:
        """Get list of available OpenFOAM solvers"""
        solvers = []
        
        # Use OpenFOAM environment variables directly
        solver_paths = [
            os.getenv('FOAM_SOLVERS', ''),  # Primary solvers location
            os.getenv('FOAM_APPBIN', ''),   # Application binaries
            self.foam_dir + "/platforms/linux64GccDPInt32Opt/bin",  # Standard location
            "/usr/lib/openfoam12/platforms/linux64GccDPInt32Opt/bin",  # System installation
        ]
        
        # Check each possible path
        for solver_path in solver_paths:
            if os.path.exists(solver_path):
                try:
                    for entry in os.listdir(solver_path):
                        full_path = os.path.join(solver_path, entry)
                        if entry.endswith('Foam') and os.path.isfile(full_path) and os.access(full_path, os.X_OK):
                            solvers.append(entry)
                except Exception as e:
                    print(f"Error accessing path {solver_path}: {e}")
                    continue
        
        return sorted(list(set(solvers)))  # Remove duplicates and sort

    def create_case(self, path: str, case_type: str, components: dict = None) -> str:
        """Create new OpenFOAM case directory"""
        case_dir = os.path.abspath(path)
        os.makedirs(case_dir, exist_ok=True)
        
        # Create standard OpenFOAM directories
        for subdir in ["0", "constant", "system"]:
            os.makedirs(os.path.join(case_dir, subdir), exist_ok=True)
            
        # Handle case-specific setup based on components if provided
        if components:
            self.setup_case_components(case_dir, case_type, components)
        
        self.case_dir = case_dir
        return case_dir

    def setup_case_components(self, case_dir: str, case_type: str, components: dict):
        """Setup case-specific configuration based on components"""
        try:
            # Setup based on simulation type and components
            if case_type == "Pigging Simulation":
                # Handle pigging specific setup
                if components.get('PIG') and components.get('PIPE'):
                    # Setup pig and pipe configurations
                    pass
                    
            elif case_type == "Multiphase Flow":
                # Handle multiphase specific setup
                if components.get('PHASE_INTERFACE'):
                    # Setup phase interface configurations
                    pass
                    
            # Add other case types as needed
            
        except Exception as e:
            print(f"Warning: Component setup failed: {str(e)}")

    def configure_solver(self, solver_type: str, params: Dict) -> None:
        """Configure solver settings"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")
            
        system_dir = os.path.join(self.case_dir, "system")
        
        # Write controlDict
        control_dict = {
            "application": solver_type,
            "startFrom": "startTime",
            "startTime": params.get("start_time", 0),
            "endTime": params.get("end_time", 1000),
            "deltaT": params.get("delta_t", 0.001),
            "writeControl": "timeStep",
            "writeInterval": params.get("write_interval", 100),
            "purgeWrite": 0,
            "writeFormat": "ascii",
            "writePrecision": 6,
            "writeCompression": "off",
            "timeFormat": "general",
            "timePrecision": 6,
            "runTimeModifiable": True
        }
        
        self._write_dict(os.path.join(system_dir, "controlDict"), control_dict)

    def run_simulation(self, parallel: bool = False, np: int = 4) -> bool:
        """Run OpenFOAM simulation"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")
            
        try:
            # Set up OpenFOAM environment
            env = os.environ.copy()
            if os.path.exists(os.path.join(self.foam_dir, "etc/bashrc")):
                env['FOAM_INIT'] = f"source {self.foam_dir}/etc/bashrc"
            
            if parallel:
                # Decompose case
                subprocess.run(
                    ["bash", "-c", f"{env.get('FOAM_INIT', '')} && decomposePar -case {self.case_dir}"],
                    env=env,
                    check=True
                )
                
                # Run in parallel
                subprocess.run(
                    ["bash", "-c", f"{env.get('FOAM_INIT', '')} && mpirun -np {np} interFoam -parallel"],
                    env=env,
                    check=True
                )
            else:
                # Run serial
                subprocess.run(
                    ["bash", "-c", f"{env.get('FOAM_INIT', '')} && interFoam -case {self.case_dir}"],
                    env=env,
                    check=True
                )
            
            return True
            
        except subprocess.CalledProcessError as e:
            print(f"Simulation failed: {e}")
            return False

    def _write_dict(self, path: str, data: Dict) -> None:
        """Write OpenFOAM dictionary file"""
        with open(path, 'w') as f:
            self._write_foam_dict(f, data)

    def _write_foam_dict(self, file, data: Dict, indent: int = 0) -> None:
        """Write data in OpenFOAM dictionary format"""
        indent_str = "    " * indent
        
        for key, value in data.items():
            if isinstance(value, dict):
                file.write(f"{indent_str}{key}\n{indent_str}{{\n")
                self._write_foam_dict(file, value, indent + 1)
                file.write(f"{indent_str}}}\n")
            elif isinstance(value, list):
                file.write(f"{indent_str}{key} ({' '.join(map(str, value))});\n")
            else:
                file.write(f"{indent_str}{key} {value};\n")

    def setup_multiphase_simulation(self, params: Dict[str, Any]) -> None:
        """Configure multiphase simulation settings"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")

        # Configure transport properties
        transport_props = {
            "phases": ["water", "air"],
            "water": {
                "transportModel": "Newtonian",
                "nu": params.get("water_viscosity", 1e-6),
                "rho": params.get("water_density", 1000)
            },
            "air": {
                "transportModel": "Newtonian",
                "nu": params.get("air_viscosity", 1.48e-5),
                "rho": params.get("air_density", 1)
            },
            "sigma": params.get("surface_tension", 0.07),
            "surfaceForces": {
                "sigma": params.get("surface_tension", 0.07),
                "contactAngle": params.get("contact_angle", 90)
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "constant", "transportProperties"),
            transport_props
        )

        # Configure turbulence properties
        turbulence_props = {
            "simulationType": params.get("turbulence_model", "RAS"),
            "RAS": {
                "model": params.get("ras_model", "kEpsilon"),
                "turbulence": "on",
                "printCoeffs": "on"
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "constant", "turbulenceProperties"),
            turbulence_props
        )

    def setup_pigging_simulation(self, params: Dict[str, Any]) -> None:
        """Configure pipeline pigging simulation"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")

        # Pig properties
        pig_props = {
            "pigProperties": {
                "mass": params.get("pig_mass", 10),
                "diameter": params.get("pig_diameter", 0.1),
                "length": params.get("pig_length", 0.3),
                "frictionCoefficient": params.get("friction_coeff", 0.3),
                "elasticModulus": params.get("elastic_modulus", 1e6),
                "bypassFlow": params.get("bypass_flow", True),
                "bypassArea": params.get("bypass_area", 0.001),
                "dragCoefficient": params.get("drag_coeff", 0.8)
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "constant", "pigProperties"),
            pig_props
        )

        # Dynamic mesh properties
        dynamic_mesh = {
            "dynamicFvMesh": "dynamicMotionSolverFvMesh",
            "motionSolverLibs": ["libfvMotionSolvers.so"],
            "solver": "displacementLaplacian",
            "displacementLaplacianCoeffs": {
                "diffusivity": "inverseDistance 1(pig)"
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "constant", "dynamicMeshDict"),
            dynamic_mesh
        )

    def setup_spill_simulation(self, params: Dict[str, Any]) -> None:
        """Configure spill quantification simulation"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")

        # Spill properties
        spill_props = {
            "spillProperties": {
                "fluid": {
                    "type": params.get("fluid_type", "oil"),
                    "density": params.get("fluid_density", 900),
                    "viscosity": params.get("fluid_viscosity", 0.1),
                    "surfaceTension": params.get("surface_tension", 0.025)
                },
                "evaporationModel": {
                    "type": params.get("evap_model", "constant"),
                    "rate": params.get("evap_rate", 1e-5),
                    "activationEnergy": params.get("evap_energy", 4e4)
                },
                "spreadingModel": {
                    "type": params.get("spread_model", "gravityViscous"),
                    "coefficients": params.get("spread_coeffs", [1.0, 1.0, 1.0])
                },
                "weatheringModel": {
                    "enabled": params.get("weathering_enabled", True),
                    "type": params.get("weather_model", "simple"),
                    "emulsificationRate": params.get("emuls_rate", 2e-6),
                    "maxWaterContent": params.get("max_water", 0.7)
                }
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "constant", "spillProperties"),
            spill_props
        )

        # Environmental conditions
        env_props = {
            "environmentalProperties": {
                "gravity": params.get("gravity", [0, 0, -9.81]),
                "temperature": params.get("temperature", 293.15),
                "atmosphericPressure": params.get("pressure", 101325),
                "wind": {
                    "type": params.get("wind_model", "powerLaw"),
                    "direction": params.get("wind_direction", [1, 0, 0]),
                    "speed": params.get("wind_speed", 5),
                    "referenceHeight": params.get("ref_height", 10),
                    "roughnessLength": params.get("roughness", 0.02)
                },
                "waves": {
                    "enabled": params.get("waves_enabled", True),
                    "type": params.get("wave_model", "stokes"),
                    "height": params.get("wave_height", 1.0),
                    "period": params.get("wave_period", 6.0),
                    "direction": params.get("wave_direction", [1, 0, 0])
                }
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "constant", "environmentalProperties"),
            env_props
        )

    def setup_numerical_schemes(self, params: Dict[str, Any]) -> None:
        """Configure numerical schemes"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")

        # FVM Schemes
        fv_schemes = {
            "ddtSchemes": {
                "default": params.get("time_scheme", "Euler")
            },
            "gradSchemes": {
                "default": params.get("grad_scheme", "Gauss linear"),
                "grad(p)": params.get("grad_p_scheme", "Gauss linear"),
                "grad(U)": params.get("grad_U_scheme", "Gauss linear")
            },
            "divSchemes": {
                "default": "none",
                "div(phi,U)": params.get("div_U_scheme", "Gauss limitedLinearV 1"),
                "div(phi,alpha)": params.get("div_alpha_scheme", "Gauss vanLeer"),
                "div(phirb,alpha)": params.get("div_alpha_comp_scheme", 
                    "Gauss interfaceCompression")
            },
            "laplacianSchemes": {
                "default": params.get("laplacian_scheme", "Gauss linear corrected")
            },
            "interpolationSchemes": {
                "default": params.get("interpolation_scheme", "linear")
            },
            "snGradSchemes": {
                "default": params.get("sngrad_scheme", "corrected")
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "system", "fvSchemes"),
            fv_schemes
        )

        # FVM Solution
        fv_solution = {
            "solvers": {
                "p_rgh": {
                    "solver": params.get("p_solver", "PCG"),
                    "preconditioner": params.get("p_precond", "DIC"),
                    "tolerance": params.get("p_tol", 1e-7),
                    "relTol": params.get("p_reltol", 0.05)
                },
                "p_rghFinal": {
                    "solver": params.get("p_solver", "PCG"),
                    "preconditioner": params.get("p_precond", "DIC"),
                    "tolerance": params.get("p_tol", 1e-7),
                    "relTol": 0
                },
                "U": {
                    "solver": params.get("U_solver", "smoothSolver"),
                    "smoother": params.get("U_smoother", "GaussSeidel"),
                    "tolerance": params.get("U_tol", 1e-8),
                    "relTol": params.get("U_reltol", 0.1)
                },
                "alpha.water": {
                    "solver": params.get("alpha_solver", "smoothSolver"),
                    "smoother": params.get("alpha_smoother", "GaussSeidel"),
                    "tolerance": params.get("alpha_tol", 1e-8),
                    "relTol": params.get("alpha_reltol", 0.1)
                }
            },
            "PIMPLE": {
                "momentumPredictor": params.get("momentum_predictor", "yes"),
                "nCorrectors": params.get("n_correctors", 3),
                "nNonOrthogonalCorrectors": params.get("n_non_ortho", 1),
                "nAlphaCorr": params.get("n_alpha", 1),
                "nAlphaSubCycles": params.get("n_alpha_subcycles", 2)
            }
        }

        self._write_dict(
            os.path.join(self.case_dir, "system", "fvSolution"),
            fv_solution
        )

    def setup_decomposition_method(self, params: Dict[str, Any]) -> None:
        """Configure domain decomposition for parallel running"""
        if not self.case_dir:
            raise RuntimeError("No case directory set")

        decompose_dict = {
            "numberOfSubdomains": params.get("n_subdomains", 4),
            "method": params.get("decomp_method", "scotch"),
            "scotch": {
                "processorWeights": params.get("proc_weights", None)
            },
            "hierarchicalCoeffs": {
                "n": params.get("hierarchical_coeffs", [2, 2, 1]),
                "delta": 0.001,
                "order": "xyz"
            },
            "distributed": False,
            "roots": []
        }

        self._write_dict(
            os.path.join(self.case_dir, "system", "decomposeParDict"),
            decompose_dict
        )