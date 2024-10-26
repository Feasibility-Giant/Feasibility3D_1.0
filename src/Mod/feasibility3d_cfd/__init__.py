# feasibility3d_cfd/__init__.py
def initialize():
    from .gui.workbench import Feasibility3DCfdWorkbench
    FreeCADGui.addWorkbench(Feasibility3DCfdWorkbench())