# freecad_openfoam/core/state_manager.py

from typing import Dict, Any, List, Optional

class StateObserver:
    """Observer interface for state changes"""
    def update_case_directory(self, new_path: str):
        pass

class OpenFOAMStateManager:
    """Singleton class for managing OpenFOAM workbench state"""
    
    _instance = None
    
    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)
            cls._instance._init_state()
        return cls._instance
    
    def _init_state(self):
        """Initialize state variables"""
        self.case_directory = None
        self.observers: List[StateObserver] = []
        self.recent_cases: List[str] = []
        self.mesh_settings: Dict[str, Any] = {}
        self.boundary_settings: Dict[str, Any] = {}
        self.solver_settings: Dict[str, Any] = {}
        self.results_settings: Dict[str, Any] = {}
        self.mesh_status = False
    
    def add_observer(self, observer: StateObserver):
        """Add observer for state changes"""
        if observer not in self.observers:
            self.observers.append(observer)
    
    def remove_observer(self, observer: StateObserver):
        """Remove observer"""
        if observer in self.observers:
            self.observers.remove(observer)
    
    def set_case_directory(self, path: str, notify: bool = True):
        """Set case directory and optionally notify observers"""
        if path != self.case_directory:  # Only update if different
            self.case_directory = path
            if notify:  # Only notify if flag is True
                for observer in self.observers:
                    observer.update_case_directory(path)
    
    def get_case_directory(self) -> Optional[str]:
        """Get current case directory"""
        return self.case_directory
    
    def update_mesh_state(self, mesh_obj):
        """Update mesh state and notify panels"""
        self.current_mesh = mesh_obj
        for observer in self.observers:
            if hasattr(observer, 'on_mesh_updated'):
                observer.on_mesh_updated(mesh_obj)

    def update_results_state(self, results):
        """Update simulation results and notify panels"""
        self.current_results = results
        for observer in self.observers:
            if hasattr(observer, 'on_results_updated'):
                observer.on_results_updated(results)
    
    # Mesh settings
    def set_mesh_settings(self, settings: Dict[str, Any]):
        """Store mesh generation settings"""
        self.mesh_settings = settings
    
    def get_mesh_settings(self) -> Dict[str, Any]:
        """Get mesh generation settings"""
        return self.mesh_settings
    
    def set_mesh_status(self, status: bool):
        """Set mesh generation status"""
        self.mesh_status = status
    
    def get_mesh_status(self) -> bool:
        """Get mesh generation status"""
        return self.mesh_status
    
    # Boundary settings
    def set_boundary_settings(self, settings: Dict[str, Any]):
        """Store boundary condition settings"""
        self.boundary_settings = settings
    
    def get_boundary_settings(self) -> Dict[str, Any]:
        """Get boundary condition settings"""
        return self.boundary_settings
    
    # Solver settings
    def set_solver_settings(self, settings: Dict[str, Any]):
        """Store solver settings"""
        self.solver_settings = settings
    
    def get_solver_settings(self) -> Dict[str, Any]:
        """Get solver settings"""
        return self.solver_settings
    
    # Results settings
    def set_results_settings(self, settings: Dict[str, Any]):
        """Store results visualization settings"""
        self.results_settings = settings
    
    def get_results_settings(self) -> Dict[str, Any]:
        """Get results visualization settings"""
        return self.results_settings
    
    def clear_state(self):
        """Clear all state data"""
        self._init_state()

    def add_recent_case(self, case_dir: str):
        """Add case to recent list"""
        if case_dir not in self.recent_cases:
            self.recent_cases.insert(0, case_dir)
            if len(self.recent_cases) > 10:  # Keep last 10 cases
                self.recent_cases.pop()

    def get_recent_cases(self) -> List[str]:
        """Get list of recent cases"""
        return self.recent_cases

    def update_case_selectors(self):
        """Update all panel case selectors"""
        for observer in self.observers:
            if hasattr(observer, 'case_selector'):
                observer.case_selector.clear()
                observer.case_selector.addItems(self.recent_cases)
                if self.case_directory:
                    observer.case_selector.setCurrentText(self.case_directory)