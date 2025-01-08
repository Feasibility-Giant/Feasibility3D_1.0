import os
from typing import Dict, Any, List, Optional
import FreeCAD
import FreeCADGui

# Import commands (not panels directly)
from freecad_openfoam.ui.main_panel import OpenFOAMPanelCommand
from freecad_openfoam.ui.mesh_panel import MeshPanelCommand
from freecad_openfoam.ui.solver_panel import SolverPanelCommand
from freecad_openfoam.ui.boundary_panel import BoundaryPanelCommand
from freecad_openfoam.ui.results_panel import ResultsPanelCommand
from freecad_openfoam.ui.visualization_panel import VisualizationPanelCommand

# Register panel commands
FreeCADGui.addCommand('OpenFOAM_Main_Panel', OpenFOAMPanelCommand())
FreeCADGui.addCommand('OpenFOAM_Mesh_Panel', MeshPanelCommand())
FreeCADGui.addCommand('OpenFOAM_Solver_Panel', SolverPanelCommand())
FreeCADGui.addCommand('OpenFOAM_Boundary_Panel', BoundaryPanelCommand())
FreeCADGui.addCommand('OpenFOAM_Results_Panel', ResultsPanelCommand())
FreeCADGui.addCommand('OpenFOAM_Visualization_Panel', VisualizationPanelCommand())

class OpenFOAMWorkbench(FreeCADGui.Workbench):
    """OpenFOAM workbench for Feasibility3D"""
    
    MenuText = "OpenFOAM CFD"
    ToolTip = "OpenFOAM Computational Fluid Dynamics Workbench"
    
    # Set icon path using the module path
    Icon = os.path.join(FreeCAD.getHomePath(), "Mod", "freecad-openfoam", "freecad_openfoam", "icon.svg")

    def Initialize(self):
        """Initialize the workbench"""
        # Create command list for the toolbar
        self.command_list = [
            'OpenFOAM_Main_Panel',
            'OpenFOAM_Mesh_Panel',
            'OpenFOAM_Solver_Panel',
            'OpenFOAM_Boundary_Panel',
            'OpenFOAM_Results_Panel',
            'OpenFOAM_Visualization_Panel'  # Added visualization panel
        ]

        # Register commands
        self.appendToolbar("OpenFOAM", self.command_list)
        self.appendMenu("OpenFOAM", self.command_list)

    def Activated(self):
        """Called when workbench is activated"""
        if not hasattr(FreeCAD, "OpenFOAMDocument"):
            FreeCAD.OpenFOAMDocument = None
        
        # Check OpenFOAM installation
        if not self._check_openfoam_installation():
            FreeCADGui.Dialog.warning(
                None,
                "OpenFOAM Not Found",
                "OpenFOAM installation not detected. Please install OpenFOAM."
            )
    
    def Deactivated(self):
        """Called when workbench is deactivated"""
        pass

    def _check_openfoam_installation(self):
        """Check if OpenFOAM is installed"""
        foam_dir = os.getenv("WM_PROJECT_DIR")
        return foam_dir is not None and os.path.exists(foam_dir)

FreeCADGui.addWorkbench(OpenFOAMWorkbench())