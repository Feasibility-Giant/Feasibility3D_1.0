import FreeCADGui

# Import the base AssetBrowserWorkbench from its module
from AssetBrowserWorkbench import AssetBrowserWorkbench

class AssetBrowserWorkbenchGui(AssetBrowserWorkbench):
    def __init__(self):
        """Initialize the GUI-specific part of the AssetBrowser Workbench."""
        super().__init__()

    def Initialize(self):
        """Override to initialize GUI-related workbench features."""
        # Call the base workbench initialization
        super().Initialize()

        # Here you can add GUI-specific elements, like toolbars or menus
        # Example: Add a toolbar or specific commands for the GUI workbench
        # FreeCADGui.addToolbar("AssetBrowser", [list of commands])
        print("AssetBrowser GUI Workbench Initialized")

    def Activated(self):
        """This method is called when the workbench is activated."""
        super().Activated()
        print("AssetBrowser GUI Workbench Activated")

    def Deactivated(self):
        """This method is called when the workbench is deactivated."""
        super().Deactivated()
        print("AssetBrowser GUI Workbench Deactivated")

def FreeCADGuiInit():
    """Registers the Asset Browser Workbench GUI."""
    # Register the GUI workbench into FreeCAD's workbench system
    FreeCADGui.addWorkbench(AssetBrowserWorkbenchGui())
