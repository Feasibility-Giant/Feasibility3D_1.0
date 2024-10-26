import FreeCADGui
from PySide import QtGui, QtCore

# Import the functionality from the other files
import CfdOFPostProcessing
import Velocityvector
import visualizer

class CfdOFWorkbench(FreeCADGui.Workbench):
    def __init__(self):
        self.__class__.MenuText = "CfdOF"
        self.__class__.ToolTip = "CfdOF workbench for fluid dynamics post-processing"
        self.__class__.Icon = FreeCADGui.getIcon("CfdOFWorkbenchIcon")

    def Initialize(self):
        """ Set up the GUI elements, including toolbars and menus """
        
        # Register post-processing tools with relevant functions
        self.appendToolbar("CfdOF Tools", ["AnimateFluidMotion", "VisualizeVelocityVectors", "OpenFluidFlowVisualizer"])
        
        # Optionally add a menu
        self.appendMenu("CfdOF", ["AnimateFluidMotion", "VisualizeVelocityVectors", "OpenFluidFlowVisualizer"])

    def GetClassName(self):
        return "Gui::PythonWorkbench"

    def AnimateFluidMotion(self):
        # Call the animate function from CfdOFPostProcessing.py
        vtk_folder = QtGui.QFileDialog.getExistingDirectory(None, "Select VTK Folder")
        if vtk_folder:
            num_timesteps = 100  # Example value; could prompt user to input this
            CfdOFPostProcessing.animate_fluid_motion(vtk_folder, num_timesteps)

    def VisualizeVelocityVectors(self):
        # Call the visualize_velocity_vectors function from Velocityvector.py
        velocity_data = ...  # Get velocity data from some source (e.g., file or mesh object)
        Velocityvector.visualize_velocity_vectors(velocity_data)

    def OpenFluidFlowVisualizer(self):
        # Call the fluid flow visualization from visualizer.py
        vtk_file = QtGui.QFileDialog.getOpenFileName(None, "Select VTK File", "", "VTK Files (*.vtk)")[0]
        if vtk_file:
            visualizer.visualizeFluidFlow(vtk_file)
