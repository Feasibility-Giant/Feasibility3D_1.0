
"""
Drag and drop functionality for FeasibleAssets
Handles dragging assets between categories and to/from FreeCAD
"""

from PySide2 import QtWidgets, QtCore, QtGui
from PySide2.QtCore import Qt, Signal, QMimeData
import FreeCAD
import FreeCADGui
import json
from typing import Dict, Optional
import os

class AssetDragDropMixin:
    """Mixin class to add drag & drop functionality to widgets"""
    
    def startDrag(self, supportedActions):
        """Start dragging an asset"""
        item = self.currentItem()
        if not item:
            return
            
        # Get asset data
        asset_id = item.data(Qt.UserRole)
        if not asset_id:
            return
            
        # Create mime data
        mime_data = QMimeData()
        mime_data.setData(
            "application/x-feasibleassets-asset",
            json.dumps({
                'id': asset_id,
                'category': self.current_category,
                'subcategory': self.current_subcategory
            }).encode()
        )
        
        # Create drag object
        drag = QtGui.QDrag(self)
        drag.setMimeData(mime_data)
        
        # Create drag pixmap
        pixmap = QtGui.QPixmap(item.icon().pixmap(64, 64))
        drag.setPixmap(pixmap)
        drag.setHotSpot(QtCore.QPoint(pixmap.width()/2, pixmap.height()/2))
        
        # Execute drag
        drag.exec_(Qt.CopyAction | Qt.MoveAction)
        
    def dragEnterEvent(self, event):
        """Handle drag enter"""
        if event.mimeData().hasFormat("application/x-feasibleassets-asset"):
            event.acceptProposedAction()
            
    def dragMoveEvent(self, event):
        """Handle drag move"""
        if event.mimeData().hasFormat("application/x-feasibleassets-asset"):
            event.acceptProposedAction()
            
    def dropEvent(self, event):
        """Handle drop in FreeCAD view"""
        try:
            mime_data = event.mimeData()
            if mime_data.hasFormat("application/x-feasibleassets-asset"):
                data = json.loads(mime_data.data("application/x-feasibleassets-asset").data().decode())
                
                # Get the asset
                asset = self.asset_manager.get_asset(data['id'])
                if not asset:
                    return

                # Ensure we have an active document
                if FreeCAD.ActiveDocument is None:
                    FreeCAD.newDocument("Unnamed")

                # Get drop position in 3D view
                view = FreeCADGui.ActiveDocument.ActiveView
                drop_pos = view.getPoint(view.getCursorPos())
                
                # Import based on file type
                file_path = asset['path']
                ext = os.path.splitext(file_path)[1].lower()

                if ext == '.fcstd':
                    # Import objects from FCSTD file
                    temp_doc = FreeCAD.openDocument(file_path, hidden=True)
                    for obj in temp_doc.Objects:
                        new_obj = FreeCAD.ActiveDocument.copyObject(obj, True)
                        if hasattr(new_obj, "Placement"):
                            new_obj.Placement.Base = drop_pos
                    FreeCAD.closeDocument(temp_doc.Name)
                elif ext == '.stl':
                    import Mesh
                    mesh = Mesh.read(file_path)
                    mesh_obj = Mesh.show(mesh)[0]
                    if hasattr(mesh_obj, "Placement"):
                        mesh_obj.Placement.Base = drop_pos
                elif ext in ['.step', '.stp', '.iges', '.igs']:
                    import ImportGui
                    objects = ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)
                    # Move imported objects to drop position
                    if isinstance(objects, list):
                        for obj in objects:
                            if hasattr(obj, "Placement"):
                                obj.Placement.Base = drop_pos
                    elif hasattr(objects, "Placement"):
                        objects.Placement.Base = drop_pos

                FreeCAD.ActiveDocument.recompute()
                event.acceptProposedAction()

        except Exception as e:
            FreeCAD.Console.PrintError(f"Drop error: {str(e)}\n")
            
    def _handle_category_drop(self, event, data):
        """Handle drop on category tree"""
        item = self.itemAt(event.pos())
        if not item:
            return
            
        target_category = item.parent().text(0) if item.parent() else item.text(0)
        target_subcategory = item.text(0) if item.parent() else ""
        
        # Move asset to new category
        self.asset_manager.move_asset(
            data['id'],
            data['category'],
            target_category,
            source_subcategory=data['subcategory'],
            target_subcategory=target_subcategory
        )
        
    def _handle_asset_drop(self, event, data):
        """Handle drop on asset view"""
        # If dropping in same category, handle reordering
        if (data['category'] == self.current_category and 
            data['subcategory'] == self.current_subcategory):
            self._handle_reorder(event, data)
            
    def _handle_reorder(self, event, data):
        """Handle reordering assets within a category"""
        drop_pos = event.pos()
        target_item = self.itemAt(drop_pos)
        
        if target_item:
            source_item = self.findItems(data['id'], Qt.MatchExactly, column=0)[0]
            source_idx = self.row(source_item)
            target_idx = self.row(target_item)
            
            if source_idx != target_idx:
                item = self.takeItem(source_idx)
                self.insertItem(target_idx, item)

class FreeCadDropTarget:
    """Mixin for handling drops in FreeCAD 3D view"""
    
    def dragEnterEvent(self, event):
        """Handle drag enter in FreeCAD view"""
        if event.mimeData().hasFormat("application/x-feasibleassets-asset"):
            event.acceptProposedAction()
            
    def dropEvent(self, event):
        """Handle drop in FreeCAD view"""
        try:
            mime_data = event.mimeData()
            if mime_data.hasFormat("application/x-feasibleassets-asset"):
                data = json.loads(mime_data.data("application/x-feasibleassets-asset").data().decode())
                
                # Ensure we have an active document
                if FreeCAD.ActiveDocument is None:
                    FreeCAD.newDocument("Unnamed")

                # Get drop position in 3D view
                view = FreeCADGui.ActiveDocument.ActiveView
                drop_pos = view.getPoint(view.getCursorPos())
                
                # Get file path and import based on type
                file_path = data['path']
                ext = os.path.splitext(file_path)[1].lower()
                
                if ext == '.fcstd':
                    temp_doc = FreeCAD.openDocument(file_path, hidden=True)
                    for obj in temp_doc.Objects:
                        new_obj = FreeCAD.ActiveDocument.copyObject(obj, True)
                        if hasattr(new_obj, "Placement"):
                            new_obj.Placement.Base = drop_pos
                    FreeCAD.closeDocument(temp_doc.Name)
                elif ext == '.stl':
                    import Mesh
                    mesh = Mesh.read(file_path)
                    mesh_obj = Mesh.show(mesh)[0]
                    if hasattr(mesh_obj, "Placement"):
                        mesh_obj.Placement.Base = drop_pos
                elif ext in ['.step', '.stp']:
                    import ImportGui
                    ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)
                elif ext in ['.iges', '.igs']:
                    import Part
                    shape = Part.read(file_path)
                    obj = Part.show(shape)
                    if hasattr(obj, "Placement"):
                        obj.Placement.Base = drop_pos

                FreeCAD.ActiveDocument.recompute()
                event.acceptProposedAction()
                
        except Exception as e:
            FreeCAD.Console.PrintError(f"Drop error: {str(e)}\n")
            FreeCAD.Console.PrintError(f"Data: {str(data)}\n")

    def _import_fcstd(self, file_path):
        """Import FreeCAD file"""
        temp_doc = FreeCAD.openDocument(file_path, hidden=True)
        obj = None
        for source_obj in temp_doc.Objects:
            obj = FreeCAD.ActiveDocument.copyObject(source_obj, True)
        FreeCAD.closeDocument(temp_doc.Name)
        return obj

    def _import_stl(self, file_path):
        """Import STL file"""
        import Mesh
        mesh = Mesh.read(file_path)
        return Mesh.show(mesh)[0]

    def _import_step(self, file_path):
        """Import STEP file"""
        import ImportGui
        return ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)

    def _import_iges(self, file_path):
        """Import IGES file"""
        import ImportGui
        return ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)