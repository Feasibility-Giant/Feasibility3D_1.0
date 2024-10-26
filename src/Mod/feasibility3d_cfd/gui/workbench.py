
# feasibility3d_cfd/gui/workbench.py
import FreeCADGui
from PySide import QtGui, QtCore
from ..core import visualization, animation
from .task_panels.post_processor_panel import PostProcessorTaskPanel

class Feasibility3DCfdWorkbench(FreeCADGui.Workbench):
    MenuText = "Feasibility3D-CFD"
    ToolTip = "CFD Post-processing workbench for Feasibility3D"
    Icon = "/icons/pipeasset.svg"
    def Initialize(self):
        self.appendToolbar("CFD Tools", ["PostProcessor"])
        self.appendMenu("Feasibility3D-CFD", ["PostProcessor"])
        
    def GetClassName(self):
        return "Gui::PythonWorkbench"