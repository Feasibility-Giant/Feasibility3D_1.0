# AssetBrowserWorkbench.py
import FreeCAD
import FreeCADGui
from FreeCADGui import Workbench
from PySide2.QtWidgets import QAction

# Modify this import to reflect the correct path
from Gui.AssetsBrowser import AssetsBrowser

class AssetBrowserWorkbench(Workbench):
    "Asset Browser Workbench"

    def GetClassName(self):
        return "Gui::PythonWorkbench"

    def Initialize(self):
        """Create toolbar and menu."""
        self.registerCommands()

        # Add menu and toolbar entries
        self.appendMenu("Asset Browser", ["AssetBrowser_Open"])
        self.appendToolbar("Asset Browser", ["AssetBrowser_Open"])

    def registerCommands(self):
        """Register commands for the Asset Browser workbench."""
        FreeCADGui.addCommand('AssetBrowser_Open', AssetBrowserOpenCommand())

    def GetName(self):
        return "Asset Browser Workbench"

class AssetBrowserOpenCommand:
    """Command to open the Asset Browser."""
    
    def GetResources(self):
        return {
            'Pixmap': '',  # Add path to icon if needed
            'MenuText': 'Open Asset Browser',
            'ToolTip': 'Open the Asset Browser to browse pipeline models'
        }

    def Activated(self):
        """Method that gets executed when the command is activated."""
        self.assets_browser = AssetsBrowser()
        self.assets_browser.show()

    def IsActive(self):
        """Determine whether the command should be active."""
        return True

# Register the Asset Browser Workbench
FreeCADGui.addWorkbench(AssetBrowserWorkbench())
