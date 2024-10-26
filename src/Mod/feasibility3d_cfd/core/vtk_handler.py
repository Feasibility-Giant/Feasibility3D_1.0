import vtk
import numpy as np
from ..utils.colormap_utils import get_colormap

class VtkHandler:
    def __init__(self):
        self.renderer = vtk.vtkRenderer()
        self.render_window = vtk.vtkRenderWindow()
        self.render_window.AddRenderer(self.renderer)
        self.interactor = vtk.vtkRenderWindowInteractor()
        self.interactor.SetRenderWindow(self.render_window)
        
        # Set up camera
        self.camera = self.renderer.GetActiveCamera()
        self.camera.SetPosition(0, -1, 0)
        self.camera.SetFocalPoint(0, 0, 0)
        self.camera.SetViewUp(0, 0, 1)
        
        # Initialize lookup tables
        self._init_lookup_tables()
        
    def _init_lookup_tables(self):
        """Initialize color lookup tables for different visualizations"""
        self.luts = {}
        for name in ['velocity', 'pressure', 'temperature']:
            lut = vtk.vtkLookupTable()
            lut.SetHueRange(0.667, 0.0)  # Blue to red
            lut.SetTableRange(0, 100)     # Default range
            lut.Build()
            self.luts[name] = lut
    
    def load_vtk_file(self, filename):
        """Load VTK file and return dataset"""
        if filename.endswith('.vtu'):
            reader = vtk.vtkXMLUnstructuredGridReader()
        else:
            reader = vtk.vtkUnstructuredGridReader()
        reader.SetFileName(filename)
        reader.Update()
        return reader.GetOutput()
    
    def get_available_arrays(self, dataset):
        """Get list of available data arrays in the dataset"""
        arrays = []
        point_data = dataset.GetPointData()
        cell_data = dataset.GetCellData()
        
        for i in range(point_data.GetNumberOfArrays()):
            name = point_data.GetArrayName(i)
            arrays.append(('point', name))
            
        for i in range(cell_data.GetNumberOfArrays()):
            name = cell_data.GetArrayName(i)
            arrays.append(('cell', name))
            
        return arrays
    
    def create_velocity_vectors(self, dataset, scale_factor=0.01, mask_pts=True):
        """Create velocity vector visualization"""
        # Optional masking to reduce vector density
        if mask_pts:
            mask = vtk.vtkMaskPoints()
            mask.SetInputData(dataset)
            mask.SetOnRatio(20)  # Show every 20th point
            mask.RandomModeOn()
            mask.Update()
            dataset = mask.GetOutput()
        
        # Create arrows for vectors
        arrow = vtk.vtkArrowSource()
        arrow.SetTipResolution(16)
        arrow.SetTipLength(0.3)
        arrow.SetTipRadius(0.1)
        
        # Create glyphs
        glyph = vtk.vtkGlyph3D()
        glyph.SetSourceConnection(arrow.GetOutputPort())
        glyph.SetInputData(dataset)
        glyph.SetVectorModeToUseVector()
        glyph.SetScaleFactor(scale_factor)
        glyph.SetScaleModeToScaleByVector()
        glyph.OrientOn()
        glyph.Update()
        
        return glyph.GetOutput()

    def create_scalar_bar(self, title, lut):
        """Create a scalar bar (color legend) for the visualization"""
        scalar_bar = vtk.vtkScalarBarActor()
        scalar_bar.SetTitle(title)
        scalar_bar.SetNumberOfLabels(5)
        scalar_bar.SetLookupTable(lut)
        scalar_bar.SetWidth(0.08)
        scalar_bar.SetHeight(0.4)
        scalar_bar.SetPosition(0.92, 0.3)
        return scalar_bar