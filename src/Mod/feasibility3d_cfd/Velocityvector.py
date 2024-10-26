import FreeCAD
import Mesh
import os
import vtk
from PySide.QtGui import QApplication



def visualizeVelocityVectors(self, vtk_file):
    """
    Visualizes velocity vectors from a VTK file in FreeCAD.
    """
    reader = vtk.vtkUnstructuredGridReader()
    reader.SetFileName(vtk_file)
    reader.Update()

    output = reader.GetOutput()

    # Get velocity vectors
    velocity = output.GetPointData().GetVectors('velocity')  # Or the correct field name

    # Use vtkGlyph3D to create arrows for velocity vectors
    arrow = vtk.vtkArrowSource()
    glyph = vtk.vtkGlyph3D()
    glyph.SetSourceConnection(arrow.GetOutputPort())
    glyph.SetInputData(output)
    glyph.SetVectorModeToUseVector()
    glyph.SetScaleFactor(0.1)  # Adjust scale as needed
    glyph.Update()

    # Visualize in FreeCAD (convert glyph output to FreeCAD Mesh)
    glyph_output = glyph.GetOutput()
    for i in range(glyph_output.GetNumberOfCells()):
        cell = glyph_output.GetCell(i)
        points = cell.GetPoints()

        mesh = Mesh.Mesh()
        for j in range(points.GetNumberOfPoints()):
            point = points.GetPoint(j)
            mesh.addFacet(FreeCAD.Vector(point[0], point[1], point[2]))

        FreeCAD.ActiveDocument.addObject("Mesh::Feature", "VelocityVectors")
        FreeCAD.ActiveDocument.ActiveObject.Mesh = mesh
        FreeCAD.ActiveDocument.recompute()

    FreeCAD.Console.PrintMessage("Velocity vectors visualized in FreeCAD.\n")
