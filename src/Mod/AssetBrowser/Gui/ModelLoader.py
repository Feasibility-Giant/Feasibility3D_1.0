# ModelLoader.py
import FreeCAD

class ModelLoader:
    @staticmethod
    def load_model(file_path):
        """Load asset model into the active Feasibility3D scene."""
        try:
            FreeCAD.open(file_path)
        except Exception as e:
            print(f"Error loading model: {e}")
