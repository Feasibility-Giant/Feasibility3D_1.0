"""
Unit tests for FeasibleAssets GUI components
Tests the user interface functionality and interactions
"""

import unittest
import sys
import os
import tempfile
import shutil
from PySide2 import QtCore, QtWidgets, QtTest
from PySide2.QtCore import Qt, QPoint
from PySide2 import QtGui
from PySide2.QtTest import QTest
from feasibleassets.gui.views.main_window import FeasibleAssetsWorkbench
from feasibleassets.gui.views.category_tree import CategoryTreeWidget
from feasibleassets.gui.views.asset_view import AssetViewWidget
from feasibleassets.gui.widgets.property_editor import PropertyEditorWidget
from feasibleassets.core.asset_manager import AssetManager
from feasibleassets.core.metadata import MetadataManager

class TestGUI(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        """Create the application once for all tests"""
        if not QtWidgets.QApplication.instance():
            cls.app = QtWidgets.QApplication(sys.argv)
        else:
            cls.app = QtWidgets.QApplication.instance()

    def setUp(self):
        """Set up test environment before each test"""
        # Create a temporary directory for testing
        self.test_dir = tempfile.mkdtemp()
        
        # Initialize main window
        self.window = FeasibleAssetsWorkbench()
        self.window.show()
        QtWidgets.QApplication.processEvents()
        
    def tearDown(self):
        """Clean up after each test"""
        self.window.close()
        shutil.rmtree(self.test_dir)
        QtWidgets.QApplication.processEvents()

    def test_main_window_creation(self):
        """Test that main window is created properly"""
        self.assertIsNotNone(self.window)
        self.assertTrue(self.window.isVisible())
        self.assertEqual(self.window.windowTitle(), "Feasible Assets")

    def test_category_tree(self):
        """Test category tree widget functionality"""
        tree = self.window.category_tree
        
        # Test initial state
        self.assertTrue(tree.isVisible())
        self.assertEqual(tree.topLevelItemCount(), 5)  # Default categories
        
        # Test category selection
        first_item = tree.topLevelItem(0)
        tree.setCurrentItem(first_item)
        self.assertEqual(tree.currentItem(), first_item)
        
        # Test context menu
        tree.customContextMenuRequested.emit(QPoint(0, 0))
        QtWidgets.QApplication.processEvents()

    def test_asset_view(self):
        """Test asset view widget functionality"""
        view = self.window.asset_view
        
        # Test view modes
        view.set_view_mode("grid")
        self.assertEqual(view.view_mode, "grid")
        
        view.set_view_mode("list")
        self.assertEqual(view.view_mode, "list")
        
        # Test sorting
        view.sort_combo.setCurrentText("Name")
        QtWidgets.QApplication.processEvents()
        
        # Test filtering
        view.filter_edit.setText("test")
        QtWidgets.QApplication.processEvents()

    def test_property_editor(self):
        """Test property editor widget functionality"""
        editor = self.window.property_editor
        
        # Test edit mode
        editor.set_edit_mode(True)
        self.assertEqual(editor.edit_button.text(), "Save Changes")
        
        editor.set_edit_mode(False)
        self.assertEqual(editor.edit_button.text(), "Edit Properties")
        
        # Test basic information editing
        editor.name_edit.setText("Test Asset")
        editor.description_edit.setText("Test Description")
        QtWidgets.QApplication.processEvents()

    def test_drag_and_drop(self):
        """Test drag and drop functionality"""
        view = self.window.asset_view
        
        # Create mock drag event
        mime_data = QtCore.QMimeData()
        mime_data.setUrls([QtCore.QUrl.fromLocalFile("test.fcstd")])
        
        drag_event = QtGui.QDragEnterEvent(
            QPoint(0, 0), 
            Qt.CopyAction, 
            mime_data,
            Qt.LeftButton, 
            Qt.NoModifier
        )
        
        # Test drag enter
        view.dragEnterEvent(drag_event)
        self.assertTrue(drag_event.isAccepted())

    def test_toolbar_actions(self):
        """Test toolbar button actions"""
        # Test import button
        QTest.mouseClick(self.window.importButton, Qt.LeftButton)
        QtWidgets.QApplication.processEvents()
        
        # Test view mode combo
        self.window.viewModeCombo.setCurrentText("List View")
        QtWidgets.QApplication.processEvents()
        
        # Test search
        self.window.searchEdit.setText("test")
        QtWidgets.QApplication.processEvents()

    def test_menu_actions(self):
        """Test menu actions"""
        menu_bar = self.window.menuBar()
        
        # Test File menu
        file_menu = menu_bar.actions()[0].menu()
        file_menu.actions()[0].trigger()  # Import action
        QtWidgets.QApplication.processEvents()
        
        # Test Edit menu
        edit_menu = menu_bar.actions()[1].menu()
        edit_menu.actions()[0].trigger()  # New Category action
        QtWidgets.QApplication.processEvents()

    def test_preferences_dialog(self):
        """Test preferences dialog"""
        # Open preferences
        self.window.actionPreferences.trigger()
        QtWidgets.QApplication.processEvents()
        
        # Find preferences dialog
        dialog = None
        for widget in self.app.topLevelWidgets():
            if isinstance(widget, QtWidgets.QDialog) and widget.windowTitle() == "Feasible Assets Preferences":
                dialog = widget
                break
                
        self.assertIsNotNone(dialog)
        
        # Test preferences inputs
        tab_widget = dialog.findChild(QtWidgets.QTabWidget)
        tab_widget.setCurrentIndex(0)  # General tab
        QtWidgets.QApplication.processEvents()
        
        # Close dialog
        dialog.close()
        QtWidgets.QApplication.processEvents()

    def test_asset_selection(self):
        """Test asset selection handling"""
        view = self.window.asset_view
        editor = self.window.property_editor
        
        # Simulate asset selection
        view.assetSelected.emit("test_asset_id")
        QtWidgets.QApplication.processEvents()
        
        # Verify property editor updated
        self.assertEqual(editor.current_asset_id, "test_asset_id")

    def test_category_changes(self):
        """Test category modification handling"""
        tree = self.window.category_tree
        
        # Add new category
        tree.add_new_category()
        dialog = None
        for widget in self.app.topLevelWidgets():
            if isinstance(widget, QtWidgets.QInputDialog):
                dialog = widget
                break
                
        self.assertIsNotNone(dialog)
        dialog.setTextValue("New Test Category")
        dialog.accept()
        QtWidgets.QApplication.processEvents()
        
        # Verify category added
        found = False
        for i in range(tree.topLevelItemCount()):
            if tree.topLevelItem(i).text(0) == "New Test Category":
                found = True
                break
        self.assertTrue(found)

    def test_error_handling(self):
        """Test error message handling"""
        # Trigger an error condition (try to save without selection)
        editor = self.window.property_editor
        editor.save_changes()
        QtWidgets.QApplication.processEvents()
        
        # Find error message box
        msg_box = None
        for widget in self.app.topLevelWidgets():
            if isinstance(widget, QtWidgets.QMessageBox):
                msg_box = widget
                break
                
        self.assertIsNotNone(msg_box)
        msg_box.accept()

    def test_view_mode_switching(self):
        """Test switching between grid and list views"""
        view = self.window.asset_view
        
        # Test grid view
        view.set_view_mode("grid")
        self.assertTrue(view.grid_view.isVisible())
        self.assertFalse(view.list_view.isVisible())
        
        # Test list view
        view.set_view_mode("list")
        self.assertFalse(view.grid_view.isVisible())
        self.assertTrue(view.list_view.isVisible())

if __name__ == '__main__':
    unittest.main()