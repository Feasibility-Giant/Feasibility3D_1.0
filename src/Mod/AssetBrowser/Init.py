# Init.py
"""
This is the initialization file for the Asset Browser Workbench module.
"""

def FreeCADInit():
    """Initialization logic."""
    try:
        import FreeCADGui  # Import FreeCADGui only when GUI is available
        from AssetBrowserWorkbench import AssetBrowserWorkbench
        FreeCADGui.addWorkbench(AssetBrowserWorkbench())
    except ImportError:
        # Handle case where FreeCADGui is not available (e.g., when running in non-GUI mode)
        print("FreeCADGui is not available. Ensure you're running in the GUI mode.")

# Workbench class definition
class AssetBrowserWorkbench:
    """ Asset Browser Workbench """

    def __init__(self):
        self.MenuText = "Asset Browser"
        self.ToolTip = "Browse and manage pipeline models"

    def Initialize(self):
        try:
            import FreeCADGui  # Ensure FreeCADGui is available for GUI-related functions
            import AssetBrowserCommands
            self.appendToolbar("Asset Browser", ["Open Asset Browser"])
            self.appendMenu("Asset Browser", ["Open Asset Browser"])
        except ImportError:
            print("FreeCADGui is not available. Ensure you're running in GUI mode.")

    def GetClassName(self):
        return "Gui::PythonWorkbench"

def FreeCADTearDown():
    """Cleanup logic."""
    # Optionally, remove the workbench during teardown if necessary.
