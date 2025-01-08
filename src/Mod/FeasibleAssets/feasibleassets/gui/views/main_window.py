"""
Main window implementation for FeasibleAssets
Handles the main window UI and workbench integration
"""

import os
import FreeCAD
import FreeCADGui
from FreeCADGui import Workbench
from PySide2 import QtCore, QtWidgets, QtGui
from PySide2.QtCore import Qt
from ...core.asset_manager import AssetManager
from ...core.category_manager import CategoryManager
from ..widgets.asset_drag_drop import FreeCadDropTarget
from ..views.asset_view import AssetViewWidget
from ..widgets.property_editor import PropertyEditorWidget
import shutil
from typing import Any

class FeasibleAssetsWindow(QtWidgets.QMainWindow):
    def __init__(self):
        super().__init__()
        self.asset_manager = AssetManager()
        self.category_manager = CategoryManager()
        self.current_asset = None
        self.setup_ui()
        self.create_actions()
        self.create_menus()
        self.create_toolbars()
        self.setup_connections()
        self.load_settings()
        
    def setup_ui(self):
        """Set up the main window UI"""
        self.setWindowTitle("Feasible Assets")
        self.setMinimumSize(800, 600)
        
        # Create central widget and layout
        self.central_widget = QtWidgets.QWidget()
        self.setCentralWidget(self.central_widget)
        
        # Main layout with splitters
        self.main_layout = QtWidgets.QHBoxLayout(self.central_widget)
        self.main_splitter = QtWidgets.QSplitter(Qt.Horizontal)
        self.main_layout.addWidget(self.main_splitter)
        
        # Left panel - Categories
        self.left_panel = QtWidgets.QWidget()
        left_layout = QtWidgets.QVBoxLayout(self.left_panel)
        
        # Category toolbar
        category_toolbar = QtWidgets.QToolBar()
        self.add_category_button = QtWidgets.QToolButton()
        self.add_category_button.setIcon(QtGui.QIcon(":/icons/actions/add_category.svg"))
        self.add_category_button.setToolTip("Add Category")
        category_toolbar.addWidget(self.add_category_button)
        left_layout.addWidget(category_toolbar)

        # Search box
        search_layout = QtWidgets.QHBoxLayout()
        self.search_box = QtWidgets.QLineEdit()
        self.search_box.setPlaceholderText("Search assets...")
        clear_button = QtWidgets.QToolButton()
        clear_button.setIcon(QtGui.QIcon(":/icons/actions/clear.svg"))
        clear_button.clicked.connect(self.clear_search)
        search_layout.addWidget(self.search_box)
        search_layout.addWidget(clear_button)
        left_layout.addLayout(search_layout)
        
        # Category tree
        self.category_tree = QtWidgets.QTreeWidget()
        self.category_tree.setHeaderLabel("Categories")
        self.category_tree.setContextMenuPolicy(Qt.CustomContextMenu)
        left_layout.addWidget(self.category_tree)
        
        # Right panel - Asset view and properties
        self.right_splitter = QtWidgets.QSplitter(Qt.Horizontal)
        
        # Asset view
        self.asset_view = AssetViewWidget()
        
        # Property editor
        self.property_editor = PropertyEditorWidget()
        
        # Add panels to splitters
        self.main_splitter.addWidget(self.left_panel)
        self.main_splitter.addWidget(self.right_splitter)
        self.right_splitter.addWidget(self.asset_view)
        self.right_splitter.addWidget(self.property_editor)
        
        # Set splitter sizes
        self.main_splitter.setSizes([200, 600])
        self.right_splitter.setSizes([400, 200])
        
        # Status bar
        self.status_bar = QtWidgets.QStatusBar()
        self.setStatusBar(self.status_bar)
        
        # Populate initial data
        self.populate_category_tree()
        
    def create_actions(self):
        """Create window actions"""
        # File actions
        self.import_action = QtWidgets.QAction("Import Asset...", self)
        self.import_action.setShortcut("Ctrl+I")
        self.import_action.triggered.connect(self.import_asset)
        
        self.export_action = QtWidgets.QAction("Export Asset...", self)
        self.export_action.setShortcut("Ctrl+E")
        self.export_action.triggered.connect(self.export_asset)
        
        self.preferences_action = QtWidgets.QAction("Preferences...", self)
        self.preferences_action.triggered.connect(self.show_preferences)
        
        # Edit actions
        self.add_category_action = QtWidgets.QAction("New Category...", self)
        self.add_category_action.triggered.connect(self.add_category)
        
        self.delete_category_action = QtWidgets.QAction("Delete Category", self)
        self.delete_category_action.triggered.connect(self.delete_category)
        
        self.rename_category_action = QtWidgets.QAction("Rename Category", self)
        self.rename_category_action.triggered.connect(self.rename_category)
        
        # View actions
        self.refresh_action = QtWidgets.QAction("Refresh", self)
        self.refresh_action.setShortcut("F5")
        self.refresh_action.triggered.connect(self.refresh_views)

        # Add subcategory action
        self.add_subcategory_action = QtWidgets.QAction("Add Subcategory...", self)
        self.add_subcategory_action.triggered.connect(self.add_subcategory)

        # Add subcategory action
        self.add_subcategory_action = QtWidgets.QAction("New Subcategory...", self)
        self.add_subcategory_action.triggered.connect(self.add_subcategory)

    def add_subcategory(self):
        """Add subcategory to selected category"""
        current_item = self.category_tree.currentItem()
        if not current_item:
            QtWidgets.QMessageBox.warning(self, "Error", "Please select a category first")
            return
            
        # Only allow adding subcategories to main categories
        if current_item.parent():
            QtWidgets.QMessageBox.warning(self, "Error", "Cannot add subcategory to a subcategory")
            return
            
        category = current_item.text(0)
        
        dialog = QtWidgets.QDialog(self)
        dialog.setWindowTitle("New Subcategory")
        layout = QtWidgets.QVBoxLayout(dialog)
        
        name_label = QtWidgets.QLabel("Subcategory Name:")
        name_edit = QtWidgets.QLineEdit()
        layout.addWidget(name_label)
        layout.addWidget(name_edit)
        
        buttons = QtWidgets.QDialogButtonBox(
            QtWidgets.QDialogButtonBox.Ok | QtWidgets.QDialogButtonBox.Cancel
        )
        buttons.accepted.connect(dialog.accept)
        buttons.rejected.connect(dialog.reject)
        layout.addWidget(buttons)
        
        if dialog.exec_() == QtWidgets.QDialog.Accepted:
            subcategory_name = name_edit.text().strip()
            if subcategory_name:
                if self.category_manager.add_subcategory(category, subcategory_name):
                    self.populate_category_tree()
                    self.status_bar.showMessage(f"Subcategory '{subcategory_name}' created", 3000)
                else:
                    QtWidgets.QMessageBox.warning(
                        self,
                        "Error",
                        f"Failed to create subcategory '{subcategory_name}'"
                    )
            
    def create_menus(self):
        """Create window menus"""
        # File menu
        file_menu = self.menuBar().addMenu("&File")
        file_menu.addAction(self.import_action)
        file_menu.addAction(self.export_action)
        file_menu.addSeparator()
        file_menu.addAction(self.preferences_action)
        
        # Edit menu
        edit_menu = self.menuBar().addMenu("&Edit")
        edit_menu.addAction(self.add_category_action)
        edit_menu.addAction(self.add_subcategory_action)  # Add this line
        edit_menu.addAction(self.rename_category_action)
        edit_menu.addAction(self.delete_category_action)
        
        # View menu
        view_menu = self.menuBar().addMenu("&View")
        view_menu.addAction(self.refresh_action)
        
    def create_toolbars(self):
        """Create window toolbars"""
        # Main toolbar
        main_toolbar = self.addToolBar("Main")
        main_toolbar.addAction(self.import_action)
        main_toolbar.addAction(self.export_action)
        main_toolbar.addSeparator()
        main_toolbar.addAction(self.refresh_action)
        
    def setup_connections(self):
        """Set up signal/slot connections"""
        # Category tree signals
        self.category_tree.currentItemChanged.connect(self.on_category_selected)
        self.category_tree.customContextMenuRequested.connect(self.show_category_context_menu)
        self.add_category_button.clicked.connect(self.add_category)
        
        # Asset view signals
        self.asset_view.assetSelected.connect(self.on_asset_selected)
        self.asset_view.assetDoubleClicked.connect(self.on_asset_double_clicked)
        
        # Property editor signals
        self.property_editor.propertyChanged.connect(self.on_property_changed)

        #Search box
        self.search_box.textChanged.connect(self.on_search_changed)
        
    def load_settings(self):
        """Load window settings"""
        settings = QtCore.QSettings("FeasibleAssets", "Window")
        self.restoreGeometry(settings.value("geometry", QtCore.QByteArray()))
        self.restoreState(settings.value("windowState", QtCore.QByteArray()))
        
    def save_settings(self):
        """Save window settings"""
        settings = QtCore.QSettings("FeasibleAssets", "Window")
        settings.setValue("geometry", self.saveGeometry())
        settings.setValue("windowState", self.saveState())
        
    def populate_category_tree(self):
        """Populate the category tree with categories from category manager"""
        self.category_tree.clear()
        categories = self.category_manager.categories
        
        for category, subcategories in categories.items():
            category_item = QtWidgets.QTreeWidgetItem(self.category_tree)
            category_item.setText(0, category)
            category_item.setIcon(0, QtGui.QIcon(":/icons/categories/folder.svg"))
            
            for subcategory in subcategories:
                subcat_item = QtWidgets.QTreeWidgetItem(category_item)
                subcat_item.setText(0, subcategory)
                subcat_item.setIcon(0, QtGui.QIcon(":/icons/categories/subfolder.svg"))
                
        self.category_tree.expandAll()
        
    def add_category(self):
        """Add new category"""
        dialog = QtWidgets.QDialog(self)
        dialog.setWindowTitle("New Category")
        layout = QtWidgets.QVBoxLayout(dialog)
        
        name_label = QtWidgets.QLabel("Category Name:")
        name_edit = QtWidgets.QLineEdit()
        layout.addWidget(name_label)
        layout.addWidget(name_edit)
        
        buttons = QtWidgets.QDialogButtonBox(
            QtWidgets.QDialogButtonBox.Ok | QtWidgets.QDialogButtonBox.Cancel
        )
        buttons.accepted.connect(dialog.accept)
        buttons.rejected.connect(dialog.reject)
        layout.addWidget(buttons)
        
        if dialog.exec_() == QtWidgets.QDialog.Accepted:
            category_name = name_edit.text().strip()
            if category_name:
                if self.category_manager.add_category(category_name, []):
                    self.populate_category_tree()
                    self.status_bar.showMessage(f"Category '{category_name}' created", 3000)
                else:
                    QtWidgets.QMessageBox.warning(
                        self,
                        "Error",
                        f"Failed to create category '{category_name}'"
                    )
                    
    def delete_category(self):
        """Delete selected category"""
        item = self.category_tree.currentItem()
        if not item:
            return
            
        category = item.text(0)
        if item.parent():
            parent_category = item.parent().text(0)
            msg = f"Delete subcategory '{category}' from '{parent_category}'?"
        else:
            msg = f"Delete category '{category}' and all its contents?"
            
        reply = QtWidgets.QMessageBox.question(
            self,
            "Confirm Delete",
            msg,
            QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No,
            QtWidgets.QMessageBox.No
        )
        
        if reply == QtWidgets.QMessageBox.Yes:
            if item.parent():
                success = self.category_manager.remove_subcategory(parent_category, category)
            else:
                success = self.category_manager.remove_category(category)
                
            if success:
                self.populate_category_tree()
                self.status_bar.showMessage(f"Category '{category}' deleted", 3000)
            else:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    f"Failed to delete category '{category}'"
                )
                
    def rename_category(self):
        """Rename selected category"""
        item = self.category_tree.currentItem()
        if not item:
            return
            
        old_name = item.text(0)
        new_name, ok = QtWidgets.QInputDialog.getText(
            self,
            "Rename Category",
            "New name:",
            QtWidgets.QLineEdit.Normal,
            old_name
        )
        
        if ok and new_name and new_name != old_name:
            if item.parent():
                parent_category = item.parent().text(0)
                success = self.category_manager.rename_subcategory(
                    parent_category, old_name, new_name
                )
            else:
                success = self.category_manager.rename_category(old_name, new_name)
                
            if success:
                self.populate_category_tree()
                self.status_bar.showMessage(f"Category renamed to '{new_name}'", 3000)
            else:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    f"Failed to rename category to '{new_name}'"
                )
                
    def show_category_context_menu(self, position):
        """Show context menu for category tree"""
        item = self.category_tree.itemAt(position)
        if not item:
            return
            
        menu = QtWidgets.QMenu()
        if item.parent():
            menu.addAction(self.rename_category_action)
            menu.addAction(self.delete_category_action)
        else:
            menu.addAction(self.add_category_action)
            menu.addAction(self.add_subcategory_action)  # Add this line
            menu.addSeparator()
            menu.addAction(self.rename_category_action)
            menu.addAction(self.delete_category_action)
            
        menu.exec_(self.category_tree.viewport().mapToGlobal(position))
        
    def import_asset(self):
        """Import new asset"""
        file_path, _ = QtWidgets.QFileDialog.getOpenFileName(
            self,
            "Import Asset",
            "",
            "All Supported Files (*.fcstd *.step *.stp *.iges *.igs *.stl);;All Files (*.*)"
        )
        
        if file_path:
            item = self.category_tree.currentItem()
            if item:
                if item.parent():
                    # If it's a subcategory
                    category = item.parent().text(0)
                    subcategory = item.text(0)
                else:
                    # If it's a main category
                    category = item.text(0)
                    subcategory = ""
                    
                if self.asset_manager.import_asset(file_path, category, subcategory):
                    self.refresh_views()
                    self.status_bar.showMessage("Asset imported successfully", 3000)
                else:
                    QtWidgets.QMessageBox.warning(
                        self,
                        "Error",
                        "Failed to import asset"
                    )
            else:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    "Please select a category first"
                )
                
    def export_asset(self):
        """Export selected asset"""
        if not self.current_asset:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                "Please select an asset to export"
            )
            return
            
        file_path, _ = QtWidgets.QFileDialog.getSaveFileName(
            self,
            "Export Asset",
            self.current_asset['name'],
            "All Supported Files (*.fcstd *.step *.stp *.iges *.igs *.stl);;All Files (*.*)"
        )
        
        if file_path:
            try:
                shutil.copy2(self.current_asset['path'], file_path)
                self.status_bar.showMessage("Asset exported successfully", 3000)
            except Exception as e:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    f"Failed to export asset: {str(e)}"
                )
                
    def show_preferences(self):
        """Show preferences dialog"""
        # This will be implemented when we create the preferences dialog
        pass
        
    def on_category_selected(self, current, previous):
        """Handle category selection"""
        if not current:
            return
            
        if current.parent():
            category = current.parent().text(0)
            subcategory = current.text(0)
        else:
            category = current.text(0)
            subcategory = ""
            
        self.asset_view.load_category(category, subcategory)
        
    def on_asset_selected(self, asset_id):
        """Handle asset selection"""
        assets = self.asset_view.get_current_assets()
        for asset in assets:
            if asset['id'] == asset_id:
                self.current_asset = asset
                self.property_editor.load_asset(asset_id)
                self.status_bar.showMessage(f"Selected: {asset['name']}")
                break
                
    def on_asset_double_clicked(self, item):
        """Handle asset double-click"""
        asset_data = item.data(Qt.UserRole)
        if asset_data and 'path' in asset_data:
            try:
                doc = FreeCAD.openDocument(asset_data['path'])
                FreeCADGui.setActiveDocument(doc.Name)
                self.current_asset = asset_data
                self.status_bar.showMessage(f"Opened: {asset_data['name']}")
            except Exception as e:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    f"Failed to open asset: {str(e)}"
                )

    def on_search_changed(self, text: str):
        """Handle search text changes"""
        if not text.strip():
            # If search is empty, show current category contents
            current = self.category_tree.currentItem()
            if current:
                if current.parent():
                    category = current.parent().text(0)
                    subcategory = current.text(0)
                else:
                    category = current.text(0)
                    subcategory = ""
                self.asset_view.load_category(category, subcategory)
            return
            
        # Perform search
        results = self.asset_manager.search_assets(text)
        self.asset_view.clear()  # Clear current view
        
        # Add search results with proper data for double-click handling
        for asset in results:
            item = QtWidgets.QListWidgetItem(asset['name'])
            # Ensure we store the complete asset data including path
            item.setData(Qt.UserRole, {
                'id': asset['id'],
                'name': asset['name'],
                'path': asset['path'],
                'category': asset['category'],
                'subcategory': asset.get('subcategory', ''),
                'metadata': asset.get('metadata', {})
            })
            self.asset_view.addItem(item)
            self.asset_view.itemDoubleClicked.connect(self.on_asset_double_clicked)

    def clear_search(self):
        """Clear search box and reset view"""
        self.search_box.clear()
        # This will trigger on_search_changed with empty text

    def on_property_changed(self, asset_id: str, property_name: str, value: Any):
        """Handle property changes"""
        if self.current_asset:
            try:
                updates = {property_name: value}
                if self.asset_manager.update_asset(
                    asset_id,
                    self.current_asset['category'],
                    updates,
                    self.current_asset.get('subcategory', '')
                ):
                    self.status_bar.showMessage("Property updated successfully", 3000)
                    self.refresh_views()
                else:
                    QtWidgets.QMessageBox.warning(
                        self,
                        "Error",
                        "Failed to update property"
                    )
            except Exception as e:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Error",
                    f"Failed to update property: {str(e)}"
                )
                
    def refresh_views(self):
        """Refresh all views"""
        self.populate_category_tree()
        current = self.category_tree.currentItem()
        if current:
            if current.parent():
                category = current.parent().text(0)
                subcategory = current.text(0)
            else:
                category = current.text(0)
                subcategory = ""
            self.asset_view.load_category(category, subcategory)
            
    def closeEvent(self, event):
        """Handle window close event"""
        self.save_settings()
        super().closeEvent(event)

class FeasibleAssetsWorkbench(Workbench):
    """FeasibleAssets workbench definition"""
    
    MenuText = "Feasible Assets"
    ToolTip = "Asset library manager for oil and gas industry components"
    Icon = """/* XPM */
    static char * feasible_assets_xpm[] = {
    "16 16 3 1",
    " 	c None",
    ".	c #000000",
    "+	c #FFFFFF",
    "                ",
    "       ..       ",
    "      ....      ",
    "     ......     ",
    "    ........    ",
    "   ..........   ",
    "  ............  ",
    " .............. ",
    "                ",
    "    ........    ",
    "    .+++++.    ",
    "    .+++++.    ",
    "    .+++++.    ",
    "    .+++++.    ",
    "    ........    ",
    "                "};
    """

    def __init__(self):
        super().__init__()
        self.window = None

    def Initialize(self):
        """Called when the workbench is first activated"""
        self.window = FeasibleAssetsWindow()
        
        # Add drop support to FreeCAD's 3D view
        view = FreeCADGui.getMainWindow().findChild(QtWidgets.QWidget, "View3DInventor")
        if view:
            if not hasattr(view.__class__, '_drop_target_added'):
                view.__class__.__bases__ += (FreeCadDropTarget,)
                view.__class__._drop_target_added = True
            view.asset_manager = self.window.asset_manager
        
        self.window.show()

    def Activated(self):
        """Called when switching to this workbench"""
        if self.window:
            self.window.show()

    def Deactivated(self):
        """Called when switching away from this workbench"""
        if self.window:
            self.window.hide()

    def GetClassName(self):
        """Return the workbench classname"""
        return "Gui::PythonWorkbench"