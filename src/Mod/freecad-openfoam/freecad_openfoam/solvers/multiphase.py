# freecad_openfoam/solvers/multiphase.py

from abc import ABC, abstractmethod
from typing import Dict, Any
import os
from .base_solver import BaseSolver

class MultiphaseSolver(BaseSolver):
    """Configuration for multiphase flow simulations"""
    
    def configure(self, parameters: Dict[str, Any]) -> None:
        # Configure multiphaseProperties
        self._configure_multiphase_properties(parameters)
        # Configure turbulence model
        self._configure_turbulence(parameters)
        # Configure transport properties
        self._configure_transport_properties(parameters)
        # Configure numerical schemes
        self._configure_numerical_schemes()

    def _configure_multiphase_properties(self, parameters: Dict[str, Any]) -> None:
        phases = parameters.get("phases", ["water", "air"])
        props = {
            "type": "immiscibleIncompressibleTwoPhaseMixture",
            "phases": f"({' '.join(phases)})",
            "sigma": parameters.get("surface_tension", 0.07),
            "phase1": phases[0],
            "phase2": phases[1]
        }

        with open(os.path.join(self.constant_dir, "multiphaseProperties"), 'w') as f:
            self.write_foam_dict(f, props)

    def _configure_turbulence(self, parameters: Dict[str, Any]) -> None:
        turb_props = {
            "simulationType": parameters.get("turbulence_model", "RAS"),
            "RAS": {
                "model": parameters.get("ras_model", "kEpsilon"),
                "turbulence": "on",
                "printCoeffs": "on"
            }
        }

        with open(os.path.join(self.constant_dir, "turbulenceProperties"), 'w') as f:
            self.write_foam_dict(f, turb_props)

    




    def _configure_transport_properties(self, parameters: Dict[str, Any]) -> None:
        """Configure transport properties for multiphase flow"""
        transport_props = {
            "phases": parameters.get("phases", ["water", "air"]),
            "water": {
                "transportModel": "Newtonian",
                "nu": parameters.get("water_viscosity", 1e-6),
                "rho": parameters.get("water_density", 1000)
            },
            "air": {
                "transportModel": "Newtonian",
                "nu": parameters.get("air_viscosity", 1.48e-5),
                "rho": parameters.get("air_density", 1)
            },
            "sigma": parameters.get("surface_tension", 0.07),
            "surfaceForces": {
                "sigma": parameters.get("surface_tension", 0.07),
                "contactAngle": parameters.get("contact_angle", 90)
            }
        }

        with open(os.path.join(self.constant_dir, "transportProperties"), 'w') as f:
            self.write_foam_dict(f, transport_props)

    def _configure_numerical_schemes(self) -> None:
        """Configure numerical schemes for multiphase flow"""
        fv_schemes = {
            "ddtSchemes": {
                "default": "Euler"
            },
            "gradSchemes": {
                "default": "Gauss linear",
                "grad(p_rgh)": "Gauss linear",
                "grad(alpha.water)": "Gauss linear"
            },
            "divSchemes": {
                "div(phi,U)": "Gauss limitedLinearV 1",
                "div(phi,alpha.water)": "Gauss vanLeer",
                "div(phirb,alpha.water)": "Gauss interfaceCompression",
                "div(phi,k)": "Gauss limitedLinear 1",
                "div(phi,epsilon)": "Gauss limitedLinear 1"
            },
            "laplacianSchemes": {
                "default": "Gauss linear corrected"
            },
            "interpolationSchemes": {
                "default": "linear"
            },
            "snGradSchemes": {
                "default": "corrected"
            }
        }

        with open(os.path.join(self.system_dir, "fvSchemes"), 'w') as f:
            self.write_foam_dict(f, fv_schemes)

        # Add fvSolution configuration
        fv_solution = {
            "solvers": {
                "alpha.water": {
                    "nAlphaCorr": 2,
                    "nAlphaSubCycles": 1
                },
                "p_rgh": {
                    "solver": "PCG",
                    "preconditioner": "DIC",
                    "tolerance": 1e-7,
                    "relTol": 0.05
                },
                "p_rghFinal": {
                    "solver": "PCG",
                    "preconditioner": "DIC",
                    "tolerance": 1e-7,
                    "relTol": 0
                },
                "U": {
                    "solver": "smoothSolver",
                    "smoother": "GaussSeidel",
                    "tolerance": 1e-6,
                    "relTol": 0.1
                }
            },
            "PIMPLE": {
                "momentumPredictor": "yes",
                "nCorrectors": 3,
                "nNonOrthogonalCorrectors": 1
            }
        }

        with open(os.path.join(self.system_dir, "fvSolution"), 'w') as f:
            self.write_foam_dict(f, fv_solution)

# In PiggingSolver class:
    def _configure_fluid_properties(self, parameters: Dict[str, Any]) -> None:
        """Configure fluid properties for pigging simulation"""
        transport_props = {
            "transportModel": "Newtonian",
            "nu": parameters.get("kinematic_viscosity", 1e-6),
            "rho": parameters.get("density", 1000),
            "CrossPowerLaw": {
                "nu0": parameters.get("nu0", 1e-6),
                "nuInf": parameters.get("nuInf", 1e-6),
                "m": parameters.get("consistency_index", 1),
                "n": parameters.get("power_law_index", 1)
            }
        }

        with open(os.path.join(self.constant_dir, "transportProperties"), 'w') as f:
            self.write_foam_dict(f, transport_props)

        # Add thermophysical properties
        thermo_props = {
            "thermoType": {
                "type": "heRhoThermo",
                "mixture": "pureMixture",
                "transport": "const",
                "thermo": "hConst",
                "equationOfState": "perfectGas",
                "specie": "specie",
                "energy": "sensibleEnthalpy"
            },
            "mixture": {
                "specie": {
                    "nMoles": 1,
                    "molWeight": 28.9
                },
                "thermodynamics": {
                    "Cp": 1007,
                    "Hf": 0
                },
                "transport": {
                    "mu": parameters.get("dynamic_viscosity", 1.84e-5),
                    "Pr": parameters.get("prandtl_number", 0.7)
                }
            }
        }

        with open(os.path.join(self.constant_dir, "thermophysicalProperties"), 'w') as f:
            self.write_foam_dict(f, thermo_props)

    def configure_motion_solver(self, parameters: Dict[str, Any]) -> None:
        """Configure motion solver for pig movement"""
        motion_props = {
            "solver": "sixDoFRigidBodyMotion",
            "sixDoFRigidBodyMotionCoeffs": {
                "patches": ["pig"],
                "mass": parameters.get("pig_mass", 10),
                "centreOfMass": parameters.get("centre_of_mass", [0, 0, 0]),
                "momentOfInertia": parameters.get("moment_of_inertia", [1, 1, 1]),
                "rhoInf": parameters.get("fluid_density", 1000),
                "report": True,
                "accelerationRelaxation": 0.7,
                "constraints": {
                    "fixedAxis": {
                        "type": "fixedAxis",
                        "axis": [1, 0, 0]
                    }
                }
            }
        }

        with open(os.path.join(self.constant_dir, "dynamicMeshDict"), 'w') as f:
            self.write_foam_dict(f, motion_props)

# Additional common methods for BaseSolver
class BaseSolver(ABC):
    # ... existing code ...

    def configure_decomposition(self, parameters: Dict[str, Any]) -> None:
        """Configure domain decomposition for parallel execution"""
        decompose_dict = {
            "numberOfSubdomains": parameters.get("n_processors", 4),
            "method": parameters.get("decomposition_method", "scotch"),
            "scotch": {
                "processorWeights": parameters.get("processor_weights", None)
            },
            "hierarchicalCoeffs": {
                "n": parameters.get("hierarchical_n", [2, 2, 1]),
                "delta": 0.001,
                "order": "xyz"
            },
            "distributed": False,
            "roots": []
        }

        with open(os.path.join(self.system_dir, "decomposeParDict"), 'w') as f:
            self.write_foam_dict(f, decompose_dict)

    def configure_control_dict(self, parameters: Dict[str, Any]) -> None:
        """Configure simulation control parameters"""
        control_dict = {
            "application": parameters.get("solver", "interFoam"),
            "startFrom": parameters.get("start_from", "startTime"),
            "startTime": parameters.get("start_time", 0),
            "stopAt": parameters.get("stop_at", "endTime"),
            "endTime": parameters.get("end_time", 1000),
            "deltaT": parameters.get("delta_t", 0.001),
            "writeControl": parameters.get("write_control", "timeStep"),
            "writeInterval": parameters.get("write_interval", 100),
            "purgeWrite": parameters.get("purge_write", 0),
            "writeFormat": parameters.get("write_format", "ascii"),
            "writePrecision": parameters.get("write_precision", 6),
            "writeCompression": parameters.get("write_compression", "off"),
            "timeFormat": parameters.get("time_format", "general"),
            "timePrecision": parameters.get("time_precision", 6),
            "runTimeModifiable": True,
            "adjustTimeStep": parameters.get("adjust_time_step", True),
            "maxCo": parameters.get("max_co", 1.0),
            "maxAlphaCo": parameters.get("max_alpha_co", 1.0)
        }

        with open(os.path.join(self.system_dir, "controlDict"), 'w') as f:
            self.write_foam_dict(f, control_dict)