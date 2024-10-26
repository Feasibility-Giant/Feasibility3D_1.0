# feasibility3d_cfd/core/visualization.py
import FreeCAD
import FreeCADGui
from .vtk_handler import VtkHandler

class VisualizationManager:
    def __init__(self, vtk_handler):
        self.vtk_handler = vtk_handler
        self.current_actors = {}
        self.current_dataset = None
        self.visualization_states = {}
        
    def set_dataset(self, dataset):
        """Set the current dataset for visualization"""
        self.current_dataset = dataset
        self.clear_all()
        
    def clear_all(self):
        """Remove all actors from the renderer"""
        for actor in self.current_actors.values():
            self.vtk_handler.renderer.RemoveActor(actor)
        self.current_actors.clear()
        self.vtk_handler.render_window.Render()
        
    def toggle_vectors(self, visible, settings=None):
        """Toggle velocity vectors visualization"""
        if not self.current_dataset:
            return
            
        if 'vectors' in self.current_actors:
            self.vtk_handler.renderer.RemoveActor(self.current_actors['vectors'])
            del self.current_actors['vectors']
            
        if visible:
            settings = settings or {}
            scale = settings.get('scale', 0.01)
            mask = settings.get('mask', True)
            
            vectors = self.vtk_handler.create_velocity_vectors(
                self.current_dataset, scale, mask)
            
            mapper = vtk.vtkPolyDataMapper()
            mapper.SetInputData(vectors)
            
            actor = vtk.vtkActor()
            actor.SetMapper(mapper)
            actor.GetProperty().SetColor(1, 0, 0)  # Red vectors
            
            self.current_actors['vectors'] = actor
            self.vtk_handler.renderer.AddActor(actor)
        
        self.vtk_handler.render_window.Render()

    def update_scalar_field(self, field_name, range_min=None, range_max=None):
        """Update scalar field visualization"""
        if not self.current_dataset:
            return
            
        if 'scalar' in self.current_actors:
            self.vtk_handler.renderer.RemoveActor(self.current_actors['scalar'])
            self.vtk_handler.renderer.RemoveActor(self.current_actors['scalar_bar'])
            
        # Get the data array
        point_data = self.current_dataset.GetPointData()
        array = point_data.GetArray(field_name)
        if not array:
            return
            
        # Update lookup table range
        if range_min is None or range_max is None:
            range_min, range_max = array.GetRange()
        
        lut = self.vtk_handler.luts.get(field_name, self.vtk_handler.luts['velocity'])
        lut.SetTableRange(range_min, range_max)
        
        # Create mapper and actor
        mapper = vtk.vtkDataSetMapper()
        mapper.SetInputData(self.current_dataset)
        mapper.SetScalarModeToUsePointData()
        mapper.SelectColorArray(field_name)
        mapper.SetLookupTable(lut)
        
        actor = vtk.vtkActor()
        actor.SetMapper(mapper)
        
        # Create scalar bar
        scalar_bar = self.vtk_handler.create_scalar_bar(field_name, lut)
        
        self.current_actors['scalar'] = actor
        self.current_actors['scalar_bar'] = scalar_bar
        
        self.vtk_handler.renderer.AddActor(actor)
        self.vtk_handler.renderer.AddActor(scalar_bar)
        self.vtk_handler.render_window.Render()