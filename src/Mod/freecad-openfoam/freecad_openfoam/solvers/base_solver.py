# freecad_openfoam/solvers/base_solver.py

from abc import ABC, abstractmethod
from typing import Dict, Any
import os

class BaseSolver(ABC):
    """Base class for OpenFOAM solvers"""
    
    def __init__(self, case_dir: str):
        self.case_dir = case_dir
        self.system_dir = os.path.join(case_dir, "system")
        self.constant_dir = os.path.join(case_dir, "constant")
        self.zero_dir = os.path.join(case_dir, "0")

    @abstractmethod
    def configure(self, parameters: Dict[str, Any]) -> None:
        """Configure solver-specific settings"""
        pass

    def write_foam_dict(self, file, data: Dict, indent: int = 0) -> None:
        """Write OpenFOAM dictionary format"""
        indent_str = "    " * indent
        for key, value in data.items():
            if isinstance(value, dict):
                file.write(f"{indent_str}{key}\n{indent_str}{{\n")
                self.write_foam_dict(file, value, indent + 1)
                file.write(f"{indent_str}}}\n")
            elif isinstance(value, list):
                file.write(f"{indent_str}{key} ({' '.join(map(str, value))});\n")
            else:
                file.write(f"{indent_str}{key} {value};\n")

    def ensure_directory(self, path: str) -> None:
        """Ensure directory exists"""
        os.makedirs(path, exist_ok=True)
    
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