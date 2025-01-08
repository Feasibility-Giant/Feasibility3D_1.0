"""
Asset view implementation for FeasibleAssets
Handles the grid/list view of assets and their interactions with enhanced search functionality
"""

import os
from typing import Dict, List, Optional
from PySide2 import QtWidgets, QtCore, QtGui
from PySide2.QtCore import Qt, Signal, QSize
import FreeCAD
import FreeCADGui
from ...core.asset_manager import AssetManager
from ...core.metadata import MetadataManager
from ..widgets.drag_drop import DragDropListWidget
from ...core.category_manager import CategoryManager
from PySide2.QtCore import Qt, Signal, QSize, QPoint
from ..widgets.asset_drag_drop import AssetDragDropMixin
import json

class AssetViewWidget(QtWidgets.QWidget, AssetDragDropMixin):
    """Widget for displaying and managing assets"""
    
    assetSelected = Signal(str)  # Emits asset ID when selected
    assetDoubleClicked = Signal(str)  # Emits asset ID when double clicked
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.asset_manager = AssetManager()
        self.metadata_manager = MetadataManager(self.asset_manager.assets_path)
        self.category_manager = CategoryManager()  # Add this line
        self.current_category = ""
        self.current_subcategory = ""
        self.view_mode = "grid"  # or "list"
        self.setup_ui()
        
    def setup_ui(self):
        """Initialize the user interface"""
        # Main layout
        self.main_layout = QtWidgets.QVBoxLayout(self)
        self.main_layout.setContentsMargins(0, 0, 0, 0)
        
        # Toolbar
        self.setup_toolbar()
        
        # Stack widget to hold different views
        self.stack = QtWidgets.QStackedWidget()
        self.main_layout.addWidget(self.stack)
        
        # Grid view
        self.grid_view = DragDropListWidget()
        self.grid_view.setViewMode(QtWidgets.QListWidget.IconMode)
        self.grid_view.setIconSize(QSize(128, 128))
        self.grid_view.setGridSize(QSize(150, 180))
        self.grid_view.setResizeMode(QtWidgets.QListWidget.Adjust)
        self.grid_view.setWrapping(True)
        self.grid_view.setSpacing(10)
        self.setup_grid_view()
        
        # List view
        self.list_view = QtWidgets.QTableWidget()
        self.setup_list_view()
        
        # Add views to stack
        self.stack.addWidget(self.grid_view)
        self.stack.addWidget(self.list_view)
        
        # Add delete shortcut
        delete_shortcut = QtWidgets.QShortcut(QtGui.QKeySequence.Delete, self)
        delete_shortcut.activated.connect(self.delete_selected_asset)
        
        # Status bar
        self.status_bar = QtWidgets.QStatusBar()
        self.main_layout.addWidget(self.status_bar)
        
        # Set default view
        self.set_view_mode("grid")
    
    def delete_selected_asset(self):
        """Delete selected asset"""
        if self.view_mode == "grid":
            items = self.grid_view.selectedItems()
        else:
            items = self.list_view.selectedItems()
            
        if items:
            asset_id = items[0].data(Qt.UserRole)
            reply = QtWidgets.QMessageBox.question(
                self,
                "Delete Asset",
                "Are you sure you want to delete this asset?",
                QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No
            )
            if reply == QtWidgets.QMessageBox.Yes:
                self.asset_manager.delete_asset(
                    asset_id, 
                    self.current_category, 
                    self.current_subcategory
                )
                self.load_category(self.current_category, self.current_subcategory)
        
    def setup_toolbar(self):
        """Create the toolbar with controls"""
        toolbar = QtWidgets.QToolBar()
        self.main_layout.addWidget(toolbar)
        
        # View mode toggle
        self.view_mode_group = QtWidgets.QButtonGroup(self)
        
        grid_button = QtWidgets.QToolButton()
        grid_button.setIcon(QtGui.QIcon(":/icons/actions/grid_view.svg"))
        grid_button.setCheckable(True)
        grid_button.setChecked(True)
        grid_button.setToolTip("Grid View")
        
        list_button = QtWidgets.QToolButton()
        list_button.setIcon(QtGui.QIcon(":/icons/actions/list_view.svg"))
        list_button.setCheckable(True)
        list_button.setToolTip("List View")
        
        self.view_mode_group.addButton(grid_button, 0)
        self.view_mode_group.addButton(list_button, 1)
        self.view_mode_group.buttonClicked.connect(self._on_view_mode_changed)
        
        # Sort controls
        sort_label = QtWidgets.QLabel("Sort by:")
        self.sort_combo = QtWidgets.QComboBox()
        self.sort_combo.addItems(["Name", "Date Modified", "Size"])
        self.sort_combo.currentIndexChanged.connect(self._on_sort_changed)
        
        # Search/Filter
        self.search_edit = QtWidgets.QLineEdit()
        self.search_edit.setPlaceholderText("Search assets...")
        self.search_edit.setMinimumWidth(200)
        self.search_edit.textChanged.connect(self._on_search_changed)
        
        # Clear search button
        clear_button = QtWidgets.QToolButton()
        clear_button.setIcon(QtGui.QIcon(":/icons/actions/clear.svg"))
        clear_button.clicked.connect(self.search_edit.clear)
        
        # Add to toolbar
        toolbar.addWidget(grid_button)
        toolbar.addWidget(list_button)
        toolbar.addSeparator()
        toolbar.addWidget(sort_label)
        toolbar.addWidget(self.sort_combo)
        toolbar.addSeparator()
        toolbar.addWidget(self.search_edit)
        toolbar.addWidget(clear_button)

        # Add sort controls
        self.sort_combo = QtWidgets.QComboBox()
        self.sort_combo.addItems(["Name", "Date Modified", "Size"])
        self.sort_combo.currentIndexChanged.connect(self._on_sort_changed)
        toolbar.addWidget(QtWidgets.QLabel("Sort by:"))
        toolbar.addWidget(self.sort_combo)
        
    def setup_grid_view(self):
        """Configure grid view widget"""
        self.grid_view.setAcceptDrops(True)
        self.grid_view.setDragEnabled(True)
        self.grid_view.setDragDropMode(QtWidgets.QAbstractItemView.DragDrop)
        
        # Updated style to match dark theme
        self.grid_view.setStyleSheet("""
            QListWidget {
                background-color: transparent;
                border: none;
            }
            QListWidget::item {
                background-color: #2d2d2d;  /* Dark background for items */
                border-radius: 5px;
                color: #ffffff;  /* White text */
            }
            QListWidget::item:selected {
                background-color: #3daee9;  /* KDE blue for selection */
                border: 1px solid #3daee9;
            }
            QListWidget::item:hover {
                background-color: #31363b;  /* Slightly lighter than background for hover */
            }
        """)
        
        # Connect signals
        self.grid_view.itemSelectionChanged.connect(self._on_selection_changed)
        self.grid_view.itemDoubleClicked.connect(self._on_item_double_clicked)
        
    def setup_list_view(self):
        """Configure list view widget"""
        headers = ["Name", "Type", "Size", "Modified", "Description"]
        self.list_view.setColumnCount(len(headers))
        self.list_view.setHorizontalHeaderLabels(headers)
        self.list_view.setSelectionBehavior(QtWidgets.QAbstractItemView.SelectRows)
        self.list_view.setSelectionMode(QtWidgets.QAbstractItemView.SingleSelection)
        self.list_view.verticalHeader().setVisible(False)
        self.list_view.setAlternatingRowColors(True)
        #Come back here
        self.list_view.setAcceptDrops(True)
        self.list_view.setDragEnabled(True)
        self.list_view.setDragDropMode(QtWidgets.QAbstractItemView.DragDrop)
        
        # Set column widths
        self.list_view.horizontalHeader().setSectionResizeMode(0, QtWidgets.QHeaderView.Stretch)
        for i in range(1, len(headers)):
            self.list_view.horizontalHeader().setSectionResizeMode(i, QtWidgets.QHeaderView.ResizeToContents)
            
        # Connect signals
        self.list_view.itemSelectionChanged.connect(self._on_selection_changed)
        self.list_view.itemDoubleClicked.connect(self._on_item_double_clicked)

        # Enable drag and drop for list view items
        self.list_view.setDragEnabled(True)
        self.list_view.setAcceptDrops(True)
        self.list_view.setDragDropMode(QtWidgets.QAbstractItemView.DragDrop)
        self.list_view.setSelectionMode(QtWidgets.QAbstractItemView.SingleSelection)

        # Add handlers for list view drag and drop
        self.list_view.mousePressEvent = self._list_view_mouse_press
        self.list_view.mouseMoveEvent = self._list_view_mouse_move

    def _list_view_mouse_press(self, event):
        """Handle mouse press in list view"""
        super(self.list_view.__class__, self.list_view).mousePressEvent(event)
        if event.button() == Qt.LeftButton:
            self.drag_start_position = event.pos()

    def _list_view_mouse_move(self, event):
        """Handle mouse move in list view"""
        if not (event.buttons() & Qt.LeftButton):
            return
        if not hasattr(self, 'drag_start_position'):
            return
            
        if (event.pos() - self.drag_start_position).manhattanLength() < QtWidgets.QApplication.startDragDistance():
            return

        item = self.list_view.itemAt(self.drag_start_position)
        if item:
            self.start_drag_from_list(item)

    def start_drag_from_list(self, item):
        """Start drag from list view"""
        mime_data = QtCore.QMimeData()
        data = {
            'id': item.data(Qt.UserRole),
            'category': self.current_category,
            'subcategory': self.current_subcategory,
            'path': next((asset['path'] for asset in self.get_current_assets() 
                        if asset['id'] == item.data(Qt.UserRole)), None)
        }
        mime_data.setData(
            "application/x-feasibleassets-asset",
            json.dumps(data).encode()
        )
        
        drag = QtGui.QDrag(self.list_view)
        drag.setMimeData(mime_data)
        
        # Create a simple drag pixmap
        pixmap = QtGui.QPixmap(64, 64)
        pixmap.fill(Qt.lightGray)
        drag.setPixmap(pixmap)
        
        drag.exec_(Qt.CopyAction | Qt.MoveAction)
    

    def load_search_results(self, results):
        """Load search results into view"""
        self.clear()
        for asset in results:
            item = QtWidgets.QListWidgetItem(asset['name'])
            item.setData(Qt.UserRole, asset)  # Store full asset data
            self.addItem(item)
        
    def _highlight_match(self, text: str, search_term: str) -> str:
        """Highlight matching text in results"""
        if not search_term:
            return text
        
        index = text.lower().find(search_term.lower())
        if index >= 0:
            return (
                text[:index] +
                f'<span style="background-color: yellow;">{text[index:index+len(search_term)]}</span>' +
                text[index+len(search_term):]
            )
        return text
    
    def _on_search_changed(self, text: str):
        """Handle search text changes"""
        if not text:
            # Clear search, show all items for current category
            self.load_category(self.current_category, self.current_subcategory)
            self.status_bar.showMessage("")
            return
            
        # Get search results from asset manager
        results = self.asset_manager.search_assets(text)
        
        # Clear current views
        self.grid_view.clear()
        self.list_view.setRowCount(0)
        
        # Show results
        self._populate_views(results)
        
        # Update status
        self.status_bar.showMessage(f"Found {len(results)} matches")
        
    def load_category(self, category: str, subcategory: str = ""):
        """Load assets for the specified category"""
        self.current_category = category
        self.current_subcategory = subcategory
        
        # Clear current views
        self.grid_view.clear()
        self.list_view.setRowCount(0)
        
        if not category:
            return
        
        # Show loading indicator
        self.status_bar.showMessage("Loading assets...")
        
        # Store parameters for async loading
        self._loading_params = {
            'category': category,
            'subcategory': subcategory
        }
        
        # Use QTimer to allow UI to update
        QtCore.QTimer.singleShot(100, self._load_category_async)

    
    def mouseDoubleClickEvent(self, event):
        """Handle double click on asset"""
        item = self.itemAt(event.pos())
        if item:
            asset_data = item.data(Qt.UserRole)
            if asset_data and 'path' in asset_data:
                try:
                    doc = FreeCAD.openDocument(asset_data['path'])
                    FreeCADGui.setActiveDocument(doc.Name)
                except Exception as e:
                    FreeCAD.Console.PrintError(f"Failed to open asset: {str(e)}\n")

    def _load_category_async(self):
        """Asynchronously load category assets"""
        try:
            category = self._loading_params['category']
            subcategory = self._loading_params['subcategory']
            
            # Add subcategories as special items if in main category
            if not subcategory:
                subcategories = self.category_manager.categories.get(category, [])
                for subcat in subcategories:
                    self._add_subcategory_item(subcat)
            
            # Get and show assets
            assets = self.asset_manager.get_category_assets(category, subcategory)
            self._populate_views(assets)
            self.status_bar.showMessage(f"Loaded {len(assets)} assets", 3000)
            
        except Exception as e:
            self.status_bar.showMessage(f"Error loading assets: {str(e)}", 3000)

    def _add_subcategory_item(self, subcategory_name: str):
        """Add subcategory as special item in views"""
        if self.view_mode == "grid":
            item = QtWidgets.QListWidgetItem(self.grid_view)
            item.setIcon(QtGui.QIcon(":/icons/categories/folder.svg"))
            item.setText(subcategory_name)
            item.setData(Qt.UserRole, f"subcategory:{subcategory_name}")
        else:
            row = self.list_view.rowCount()
            self.list_view.insertRow(row)
            item = QtWidgets.QTableWidgetItem(subcategory_name)
            item.setIcon(QtGui.QIcon(":/icons/categories/folder.svg"))
            item.setData(Qt.UserRole, f"subcategory:{subcategory_name}")
            self.list_view.setItem(row, 0, item)
        
    def _populate_views(self, assets: List[Dict]):
        """Populate both views with assets"""
        for asset in assets:
            self._add_to_grid_view(asset)
            self._add_to_list_view(asset)
            
        self._apply_current_sort()
        
    def _add_to_grid_view(self, asset: Dict):
        """Add asset to grid view"""
        item = QtWidgets.QListWidgetItem(self.grid_view)
        item.setIcon(QtGui.QIcon(asset.get('preview_path', ":/icons/assets/default.svg")))
        
        # Apply highlighting if searching
        if self.search_edit.text():
            display_text = self._highlight_match(asset['name'], self.search_edit.text())
            item.setData(Qt.DisplayRole, display_text)
        else:
            item.setText(asset['name'])
            
        item.setData(Qt.UserRole, asset['id'])
        item.setSizeHint(QSize(150, 180))
        
    def _add_to_list_view(self, asset: Dict):
        """Add asset to list view"""
        row = self.list_view.rowCount()
        self.list_view.insertRow(row)
        
        search_text = self.search_edit.text()
        
        # Set item data with optional highlighting
        name_item = QtWidgets.QTableWidgetItem()
        if search_text:
            name_item.setData(Qt.DisplayRole, self._highlight_match(asset['name'], search_text))
        else:
            name_item.setText(asset['name'])
        
        self.list_view.setItem(row, 0, name_item)
        self.list_view.setItem(row, 1, QtWidgets.QTableWidgetItem(asset['type']))
        self.list_view.setItem(row, 2, QtWidgets.QTableWidgetItem(self._format_size(asset['size'])))
        self.list_view.setItem(row, 3, QtWidgets.QTableWidgetItem(asset['modified']))
        
        desc_item = QtWidgets.QTableWidgetItem()
        if search_text:
            desc_item.setData(Qt.DisplayRole, self._highlight_match(asset.get('description', ''), search_text))
        else:
            desc_item.setText(asset.get('description', ''))
        self.list_view.setItem(row, 4, desc_item)
        
        # Store asset ID
        self.list_view.item(row, 0).setData(Qt.UserRole, asset['id'])
        
    def set_view_mode(self, mode: str):
        """Switch between grid and list view modes"""
        if mode not in ["grid", "list"]:
            return
            
        self.view_mode = mode
        self.stack.setCurrentWidget(self.grid_view if mode == "grid" else self.list_view)
        
    def _on_view_mode_changed(self, button):
        """Handle view mode toggle"""
        mode = "grid" if self.view_mode_group.id(button) == 0 else "list"
        self.set_view_mode(mode)
        
    def _on_sort_changed(self, index):
        """Handle sort selection change"""
        self._apply_current_sort()
        
    def _apply_current_sort(self):
        """Apply current sort settings to views"""
        sort_key = self.sort_combo.currentText()
        
        if sort_key == "Name":
            self.grid_view.sortItems()
            self.list_view.sortItems(0)
        elif sort_key == "Date Modified":
            self.list_view.sortItems(3)
            # Custom sort for grid view
            items = [(self.grid_view.item(i).data(Qt.UserRole), i) 
                    for i in range(self.grid_view.count())]
            items.sort(key=lambda x: self.metadata_manager.load_metadata(x[0]).modified_date)
            self._reorder_grid_items(items)
        elif sort_key == "Size":
            self.list_view.sortItems(2)
            # Custom sort for grid view based on size
            items = [(self.grid_view.item(i).data(Qt.UserRole), i) 
                    for i in range(self.grid_view.count())]
            items.sort(key=lambda x: self.metadata_manager.load_metadata(x[0]).file_size)
            self._reorder_grid_items(items)
            
    def _reorder_grid_items(self, ordered_items: List[tuple]):
        """Reorder items in grid view"""
        for new_idx, (_, old_idx) in enumerate(ordered_items):
            item = self.grid_view.takeItem(old_idx)
            self.grid_view.insertItem(new_idx, item)
            
    def _on_selection_changed(self):
        """Handle selection changes in either view"""
        if self.view_mode == "grid":
            items = self.grid_view.selectedItems()
            if items:
                asset_id = items[0].data(Qt.UserRole)
                self.assetSelected.emit(asset_id)
        else:
            items = self.list_view.selectedItems()
            if items:
                asset_id = items[0].data(Qt.UserRole)
                self.assetSelected.emit(asset_id)
                
    def _on_item_double_clicked(self, item):
        """Handle double-click on asset"""
        try:
            # Get asset ID
            if self.view_mode == "grid":
                asset_id = item.data(Qt.UserRole)
            else:
                asset_id = self.list_view.item(item.row(), 0).data(Qt.UserRole)
                
            # Get asset info
            assets = self.get_current_assets()
            for asset in assets:
                if asset['id'] == asset_id:
                    file_path = asset['path']
                    ext = os.path.splitext(file_path)[1].lower()
                    
                    # Create new document if none exists
                    if FreeCAD.ActiveDocument is None:
                        FreeCAD.newDocument("Unnamed")
                    
                    # Import based on file type
                    if ext == '.fcstd':
                        # Import objects from FCSTD file into active document
                        temp_doc = FreeCAD.openDocument(file_path, hidden=True)
                        for obj in temp_doc.Objects:
                            FreeCAD.ActiveDocument.copyObject(obj, True)
                        FreeCAD.closeDocument(temp_doc.Name)
                    elif ext == '.stl':
                        import Mesh
                        mesh = Mesh.read(file_path)
                        Mesh.show(mesh)
                    elif ext in ['.step', '.stp']:
                        import ImportGui
                        ImportGui.insert(file_path, FreeCAD.ActiveDocument.Name)
                    elif ext in ['.iges', '.igs']:
                        import Part
                        shape = Part.read(file_path)
                        Part.show(shape)
                        
                    FreeCAD.ActiveDocument.recompute()
                    # Ensure view is updated
                    if FreeCADGui.ActiveDocument:
                        FreeCADGui.ActiveDocument.ActiveView.viewIsometric()
                        FreeCADGui.SendMsgToActiveView("ViewFit")
                    break
                    
        except Exception as e:
            FreeCAD.Console.PrintError(f"Failed to import asset: {str(e)}\n")
            FreeCAD.Console.PrintError(f"File path: {file_path}, Extension: {ext}\n")  # Additional debug info
        
    def _format_size(self, size_in_bytes: int) -> str:
        """Format file size for display"""
        for unit in ['B', 'KB', 'MB', 'GB']:
            if size_in_bytes < 1024:
                return f"{size_in_bytes:.1f} {unit}"
            size_in_bytes /= 1024
        return f"{size_in_bytes:.1f} TB"
    
    def get_current_assets(self) -> List[Dict]:
        """Get all assets currently displayed in the view"""
        assets = []
        # Get assets from manager
        if self.current_category:
            assets = self.asset_manager.get_category_assets(
                self.current_category, 
                self.current_subcategory
            )
        return assets
    
    def dragEnterEvent(self, event):
        """Handle drag enter from both file system and internal drags"""
        if event.mimeData().hasUrls():
            for url in event.mimeData().urls():
                if self.is_valid_file_type(url.toLocalFile()):
                    event.acceptProposedAction()
                    return
        elif event.mimeData().hasFormat("application/x-feasibleassets-asset"):
            event.acceptProposedAction()

    def is_valid_file_type(self, file_path: str) -> bool:
        """Check if file type is supported"""
        valid_extensions = ['.fcstd', '.step', '.stp', '.iges', '.igs', '.stl']
        ext = os.path.splitext(file_path)[1].lower()
        return ext in valid_extensions

    def dropEvent(self, event):
        """Handle drop from both file system and internal drags"""
        if event.mimeData().hasUrls():
            for url in event.mimeData().urls():
                file_path = url.toLocalFile()
                if self.is_valid_file_type(file_path):
                    self.import_file(file_path)
            event.acceptProposedAction()
        elif event.mimeData().hasFormat("application/x-feasibleassets-asset"):
            try:
                data = json.loads(event.mimeData().data("application/x-feasibleassets-asset").data().decode())
                success = self.asset_manager.move_asset(
                    data['id'],
                    data['category'],
                    self.current_category,
                    data['subcategory'],
                    self.current_subcategory
                )
                if success:
                    self.load_category(self.current_category, self.current_subcategory)
                event.acceptProposedAction()
            except Exception as e:
                FreeCAD.Console.PrintError(f"Drop error: {str(e)}\n")

    def import_file(self, file_path: str):
        """Import file into current category"""
        if not self.current_category:
            QtWidgets.QMessageBox.warning(
                self,
                "Import Error",
                "Please select a category first"
            )
            return

        try:
            if self.asset_manager.import_asset(
                file_path, 
                self.current_category,
                self.current_subcategory
            ):
                self.load_category(self.current_category, self.current_subcategory)
                self.status_bar.showMessage(f"Imported: {os.path.basename(file_path)}", 3000)
            else:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Import Error",
                    f"Failed to import {os.path.basename(file_path)}"
                )
        except Exception as e:
            QtWidgets.QMessageBox.warning(
                self,
                "Import Error",
                f"Error importing file: {str(e)}"
            )
    
    def mouseMoveEvent(self, event):
        """Handle mouse move to start drag"""
        if event.buttons() & Qt.LeftButton:
            if self.view_mode == "grid":
                item = self.grid_view.itemAt(self.grid_view.mapFromParent(event.pos()))
            else:
                item = self.list_view.itemAt(self.list_view.mapFromParent(event.pos()))
                
            if item:
                # Create mime data
                mime_data = QtCore.QMimeData()
                data = {
                    'id': item.data(Qt.UserRole),
                    'category': self.current_category,
                    'subcategory': self.current_subcategory,
                    'path': next((asset['path'] for asset in self.get_current_assets() 
                                if asset['id'] == item.data(Qt.UserRole)), None)
                }
                mime_data.setData(
                    "application/x-feasibleassets-asset",
                    json.dumps(data).encode()
                )
                
                # Create drag
                drag = QtGui.QDrag(self)
                drag.setMimeData(mime_data)
                
                # Set drag pixmap
                if self.view_mode == "grid":
                    pixmap = item.icon().pixmap(64, 64)
                else:
                    pixmap = QtGui.QPixmap(64, 64)
                    pixmap.fill(Qt.transparent)
                    
                drag.setPixmap(pixmap)
                drag.setHotSpot(QtCore.QPoint(pixmap.width()/2, pixmap.height()/2))
                
                # Execute drag
                drag.exec_(Qt.CopyAction | Qt.MoveAction)

    def start_drag_from_grid(self, item):
        """Start drag from grid view"""
        mime_data = QtCore.QMimeData()
        data = {
            'id': item.data(Qt.UserRole),
            'category': self.current_category,
            'subcategory': self.current_subcategory,
            'path': next((asset['path'] for asset in self.get_current_assets() 
                        if asset['id'] == item.data(Qt.UserRole)), None)
        }
        mime_data.setData(
            "application/x-feasibleassets-asset",
            json.dumps(data).encode()
        )
        
        drag = QtGui.QDrag(self.grid_view)
        drag.setMimeData(mime_data)
        
        # Use item's icon for the drag pixmap
        pixmap = item.icon().pixmap(64, 64)
        drag.setPixmap(pixmap)
        drag.setHotSpot(QtCore.QPoint(pixmap.width()/2, pixmap.height()/2))
        
        drag.exec_(Qt.CopyAction | Qt.MoveAction)

        # Delete selected assets
    def delete_selected_asset(self):
        """Delete selected asset"""
        if self.view_mode == "grid":
            items = self.grid_view.selectedItems()
        else:
            items = self.list_view.selectedItems()
            
        if items:
            asset_id = items[0].data(Qt.UserRole)
            reply = QtWidgets.QMessageBox.question(
                self,
                "Delete Asset",
                "Are you sure you want to delete this asset?",
                QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No
            )
            if reply == QtWidgets.QMessageBox.Yes:
                self.asset_manager.delete_asset(
                    asset_id, 
                    self.current_category, 
                    self.current_subcategory
                )
                self.load_category(self.current_category, self.current_subcategory)
    
    def update_asset_display(self, asset_id: str, new_name: str):
        """Update asset display after name change"""
        if self.view_mode == "grid":
            items = self.grid_view.findItems(asset_id, Qt.MatchExactly, role=Qt.UserRole)
            if items:
                items[0].setText(new_name)
        else:
            for row in range(self.list_view.rowCount()):
                if self.list_view.item(row, 0).data(Qt.UserRole) == asset_id:
                    self.list_view.item(row, 0).setText(new_name)