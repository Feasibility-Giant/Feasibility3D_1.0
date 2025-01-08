"""
File handling utilities for FeasibleAssets
"""
import os
import FreeCAD
import FreeCADGui
import tempfile
from typing import Dict, Optional

def create_preview(file_path: str) -> bool:
    """Create preview image for asset"""
    try:
        ext = os.path.splitext(file_path)[1].lower()
        doc = None
        
        if ext == '.fcstd':
            doc = handle_fcstd(file_path)
        elif ext == '.stl':
            doc = handle_stl(file_path)
        elif ext in ['.step', '.stp']:
            doc = handle_step(file_path)
        elif ext in ['.iges', '.igs']:
            doc = handle_iges(file_path)
        elif ext == '.brep':
            doc = handle_brep(file_path)
        
        if doc:
            # Create preview
            view = FreeCADGui.getDocument(doc.Name).ActiveView
            preview_path = f"{file_path}.png"
            view.saveImage(preview_path, 400, 300, 'White')
            FreeCAD.closeDocument(doc.Name)
            return True
            
        return False
        
    except Exception as e:
        FreeCAD.Console.PrintError(f"Failed to create preview: {str(e)}\n")
        return False

def handle_fcstd(file_path: str) -> Optional[FreeCAD.Document]:
    """Handle FreeCAD native files"""
    doc = FreeCAD.openDocument(file_path, hidden=True)
    FreeCAD.setActiveDocument(doc.Name)
    doc.recompute()
    return doc

def handle_stl(file_path: str) -> Optional[FreeCAD.Document]:
    """Handle STL files"""
    import Mesh
    doc = FreeCAD.newDocument("PreviewDoc")
    FreeCAD.setActiveDocument(doc.Name)
    mesh = Mesh.read(file_path)
    Mesh.show(mesh)
    doc.recompute()
    return doc

def handle_step(file_path: str) -> Optional[FreeCAD.Document]:
    """Handle STEP files"""
    import ImportGui
    doc = FreeCAD.newDocument("PreviewDoc")
    FreeCAD.setActiveDocument(doc.Name)
    ImportGui.insert(file_path, doc.Name)
    doc.recompute()
    return doc

def handle_iges(file_path: str) -> Optional[FreeCAD.Document]:
    """Handle IGES files"""
    import ImportGui
    doc = FreeCAD.newDocument("PreviewDoc")
    FreeCAD.setActiveDocument(doc.Name)
    ImportGui.insert(file_path, doc.Name)
    doc.recompute()
    return doc

def handle_brep(file_path: str) -> Optional[FreeCAD.Document]:
    """Handle BREP files"""
    import Part
    doc = FreeCAD.newDocument("PreviewDoc")
    FreeCAD.setActiveDocument(doc.Name)
    Part.insert(file_path, doc.Name)
    doc.recompute()
    return doc

def get_file_metadata(file_path: str) -> Dict:
    """Extract metadata from file"""
    stat = os.stat(file_path)
    return {
        "filename": os.path.basename(file_path),
        "size": stat.st_size,
        "created": stat.st_ctime,
        "modified": stat.st_mtime,
        "type": os.path.splitext(file_path)[1].upper()[1:],
        "path": file_path
    }

def is_valid_cad_file(file_path: str) -> bool:
    """Check if file is a supported CAD format"""
    valid_extensions = [
        '.fcstd',    # FreeCAD
        '.step',     # STEP
        '.stp',      # STEP
        '.iges',     # IGES
        '.igs',      # IGES
        '.brep',     # BREP
        '.stl'       # STL
    ]
    return os.path.splitext(file_path)[1].lower() in valid_extensions

def get_file_type(file_path: str) -> str:
    """Get friendly name for file type"""
    ext = os.path.splitext(file_path)[1].lower()
    type_map = {
        '.fcstd': 'FreeCAD',
        '.step': 'STEP',
        '.stp': 'STEP',
        '.iges': 'IGES',
        '.igs': 'IGES',
        '.brep': 'BREP',
        '.stl': 'STL'
    }
    return type_map.get(ext, 'Unknown')

def compress_file(file_path: str) -> bool:
    """Compress file if possible"""
    try:
        import zipfile
        if os.path.splitext(file_path)[1].lower() != '.fcstd':
            # Only compress non-FreeCAD files (FreeCAD files are already compressed)
            zip_path = f"{file_path}.zip"
            with zipfile.ZipFile(zip_path, 'w', zipfile.ZIP_DEFLATED) as zipf:
                zipf.write(file_path, os.path.basename(file_path))
            return True
        return False
    except Exception as e:
        FreeCAD.Console.PrintError(f"Failed to compress file: {str(e)}\n")
        return False

def decompress_file(file_path: str) -> Optional[str]:
    """Decompress file if compressed"""
    try:
        import zipfile
        if zipfile.is_zipfile(file_path):
            temp_dir = tempfile.mkdtemp()
            with zipfile.ZipFile(file_path, 'r') as zipf:
                zipf.extractall(temp_dir)
                # Return path to first file in archive
                return os.path.join(temp_dir, zipf.namelist()[0])
        return file_path
    except Exception as e:
        FreeCAD.Console.PrintError(f"Failed to decompress file: {str(e)}\n")
        return None

def import_fcstd(file_path: str, pos):
    doc = FreeCAD.openDocument(file_path)
    for obj in doc.Objects:
        FreeCAD.ActiveDocument.copyObject(obj, True)
    FreeCAD.closeDocument(doc.Name)

def import_step(file_path: str, pos):
    import ImportGui
    ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)

def import_iges(file_path: str, pos):
    import ImportGui
    ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)

def import_stl(file_path: str, pos):
    import Mesh
    mesh = Mesh.read(file_path)
    Mesh.show(mesh)