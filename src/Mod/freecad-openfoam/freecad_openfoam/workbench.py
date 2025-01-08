# freecad_openfoam/workbench.py

import os
import FreeCAD as App
import FreeCADGui as Gui
from PySide2 import QtCore, QtGui

class OpenFOAMWorkbench(Workbench):
    """OpenFOAM workbench for FreeCAD"""
    
    MenuText = "OpenFOAM CFD"
    ToolTip = "OpenFOAM Computational Fluid Dynamics Workbench"
    Icon = os.path.join(os.path.dirname(__file__), "icon.svg")

    def Initialize(self):
        """Initialize the workbench"""
        # Import command modules
        import freecad_openfoam.ui.commands as commands

        # Create command list
        self.command_list = [
            "OpenFOAM_NewCase",
            "OpenFOAM_Mesh",
            "OpenFOAM_Solver",
            "OpenFOAM_Boundary",
            "OpenFOAM_Run",
            "OpenFOAM_Results"
        ]

        # Register commands
        self.appendToolbar("OpenFOAM", self.command_list)
        self.appendMenu("OpenFOAM", self.command_list)

    def Activated(self):
        """Called when workbench is activated"""
        if not hasattr(App, "OpenFOAMDocument"):
            App.OpenFOAMDocument = None
        
        # Check OpenFOAM installation
        if not self._check_openfoam_installation():
            Gui.Dialog.warning(
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