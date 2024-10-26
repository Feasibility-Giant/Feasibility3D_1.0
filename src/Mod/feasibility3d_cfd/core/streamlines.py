# feasibility3d_cfd/core/streamlines.py
import vtk

class StreamlineManager:
    def __init__(self, vtk_handler):
        self.vtk_handler = vtk_handler
        self.streamlines_actor = None
        self.seed_points = None
        
    def create_streamlines(self, dataset, settings):
        """Create streamline visualization"""
        if self.streamlines_actor:
            self.vtk_handler.renderer.RemoveActor(self.streamlines_actor)
            
        # Create seed points
        if settings.get('seed_type') == 'plane':
            self.seed_points = self._create_plane_seeds(settings)
        else:
            self.seed_points = self._create_line_seeds(settings)
            
        # Create streamlines
        streamline = vtk.vtkStreamTracer()
        streamline.SetInputData(dataset)
        streamline.SetSourceConnection(self.seed_points.GetOutputPort())
        streamline.SetMaximumPropagation(settings.get('max_length', 1.0))
        streamline.SetInitialIntegrationStep(settings.get('step_size', 0.01))
        streamline.SetIntegrationDirectionToBoth()
        streamline.SetIntegratorTypeToRungeKutta4()
        streamline.Update()
        
        # Create tubes for better visualization
        tubes = vtk.vtkTubeFilter()
        tubes.SetInputConnection(streamline.GetOutputPort())
        tubes.SetRadius(settings.get('tube_radius', 0.01))
        tubes.SetNumberOfSides(12)
        tubes.Update()
        
        # Create mapper and actor
        mapper = vtk.vtkPolyDataMapper()
        mapper.SetInputConnection(tubes.GetOutputPort())
        
        self.streamlines_actor = vtk.vtkActor()
        self.streamlines_actor.SetMapper(mapper)
        self.streamlines_actor.GetProperty().SetColor(0, 1, 0)  # Green streamlines
        
        self.vtk_handler.renderer.AddActor(self.streamlines_actor)
        self.vtk_handler.render_window.Render()
        
    def _create_plane_seeds(self, settings):
        """Create seed points on a plane"""
        plane = vtk.vtkPlaneSource()
        plane.SetOrigin(settings.get('origin', (0, 0, 0)))
        plane.SetPoint1(settings.get('point1', (1, 0, 0)))
        plane.SetPoint2(settings.get('point2', (0, 1, 0)))
        plane.SetXResolution(settings.get('resolution', 10))
        plane.SetYResolution(settings.get('resolution', 10))
        plane.Update()
        return plane
        
    def _create_line_seeds(self, settings):
        """Create seed points along a line"""
        line = vtk.vtkLineSource()
        line.SetPoint1(settings.get('point1', (-0.5, 0, 0)))
        line.SetPoint2(settings.get('point2', (0.5, 0, 0)))
        line.SetResolution(settings.get('resolution', 20))
        line.Update()
        return line