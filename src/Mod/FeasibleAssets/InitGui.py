"""
FeasibleAssets GUI initialization
"""
import FreeCAD
import FreeCADGui
from feasibleassets.gui.views.main_window import FeasibleAssetsWorkbench

if FreeCAD.GuiUp:
    FreeCADGui.addWorkbench(FeasibleAssetsWorkbench())