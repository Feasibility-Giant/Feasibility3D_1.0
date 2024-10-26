# feasibility3d_cfd/core/isosurface.py
import vtk

class IsosurfaceManager:
    def __init__(self, vtk_handler):
        self.vtk_handler = vtk_handler
        self.isosurface_actors = {}
        
    def update_isosurfaces(self, dataset, field_name, values, opacity=0.5):
        """Create or update isosurfaces for given values"""
        # Remove existing isosurfaces
        for actor in self.isosurface_actors.values():
            self.vtk_handler.renderer.RemoveActor(actor)
        self.isosurface_actors.clear()
        
        # Create new isosurfaces
        contours = vtk.vtkContourFilter()
        contours.SetInputData(dataset)
        contours.SetArrayComponent(0)
        contours.SetValue(0, values[0])  # Set first isosurface value
        
        # Add additional isosurface values
        for i, value in enumerate(values[1:], 1):
            contours.SetValue(i, value)
            
        contours.Update()
        
        # Create mapper and actor
        mapper = vtk.vtkPolyDataMapper()
        mapper.SetInputConnection(contours.GetOutputPort())
        mapper.ScalarVisibilityOff()
        
        actor = vtk.vtkActor()
        actor.SetMapper(mapper)
        actor.GetProperty().SetOpacity(opacity)
        
        # Add to renderer
        self.isosurface_actors['main'] = actor
        self.vtk_handler.renderer.AddActor(actor)
        self.vtk_handler.render_window.Render()
        
    def set_opacity(self, opacity):
        """Set opacity for all isosurfaces"""
        for actor in self.isosurface_actors.values():
            actor.GetProperty().SetOpacity(opacity)
        self.vtk_handler.render_window.Render()