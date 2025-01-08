# freecad_openfoam/solvers/spill.py

from abc import ABC, abstractmethod
from typing import Dict, Any
import os
from .base_solver import BaseSolver

class SpillSolver(BaseSolver):
    """Configuration for spill quantification simulations"""
    
    def configure(self, parameters: Dict[str, Any]) -> None:
        # Configure spill properties
        self._configure_spill_properties(parameters)
        # Configure terrain
        self._configure_terrain(parameters)
        # Configure environmental conditions
        self._configure_environment(parameters)

    def _configure_spill_properties(self, parameters: Dict[str, Any]) -> None:
        spill_props = {
            "spillProperties": {
                "fluid": parameters.get("fluid_type", "oil"),
                "density": parameters.get("fluid_density", 900),
                "viscosity": parameters.get("fluid_viscosity", 0.1),
                "surfaceTension": parameters.get("surface_tension", 0.025),
                "evaporationModel": {
                    "type": parameters.get("evaporation_model", "constant"),
                    "rate": parameters.get("evaporation_rate", 1e-5)
                },
                "spreadingModel": {
                    "type": parameters.get("spreading_model", "gravityViscous"),
                    "coefficients": parameters.get("spreading_coefficients", 
                                                 [1.0, 1.0, 1.0])
                }
            }
        }

        with open(os.path.join(self.constant_dir, "spillProperties"), 'w') as f:
            self.write_foam_dict(f, spill_props)

    def _configure_terrain(self, parameters: Dict[str, Any]) -> None:
        terrain_props = {
            "terrainProperties": {
                "type": parameters.get("terrain_type", "stl"),
                "file": parameters.get("terrain_file", "terrain.stl"),
                "scale": parameters.get("terrain_scale", [1, 1, 1]),
                "refinementLevel": parameters.get("refinement_level", 2)
            }
        }

        with open(os.path.join(self.system_dir, "terrainDict"), 'w') as f:
            self.write_foam_dict(f, terrain_props)

    def _configure_environment(self, parameters: Dict[str, Any]) -> None:
        env_props = {
            "environmentalProperties": {
                "gravity": parameters.get("gravity", [0, 0, -9.81]),
                "temperature": parameters.get("temperature", 293.15),
                "pressure": parameters.get("pressure", 101325),
                "wind": {
                    "type": parameters.get("wind_type", "powerLaw"),
                    "direction": parameters.get("wind_direction", [1, 0, 0]),
                    "speed": parameters.get("wind_speed", 5),
                    "referenceHeight": parameters.get("reference_height", 10)
                }
            }
        }

        with open(os.path.join(self.constant_dir, "environmentalProperties"), 'w') as f:
            self.write_foam_dict(f, env_props)