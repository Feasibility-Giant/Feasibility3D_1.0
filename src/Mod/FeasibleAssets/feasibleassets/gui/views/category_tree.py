"""
Category tree view implementation for FeasibleAssets
Handles the hierarchical display and management of asset categories
"""

from PySide2 import QtWidgets, QtCore, QtGui
from PySide2.QtCore import Qt, Signal
import FreeCAD
from typing import Dict, List, Optional
from ...core.category_manager import CategoryManager
import os

class CategoryTreeWidget(QtWidgets.QTreeWidget):
    """Custom tree widget for asset categories"""
    
    categorySelected = Signal(str, str)  # signals (category, subcategory)
    categoryModified = Signal()  # emitted when categories are modified
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.category_manager = CategoryManager()
        self.setup_ui()
        self.setup_context_menu()
        self.load_categories()
        
    def setup_ui(self):
        """Configure the tree widget UI"""
        self.setHeaderLabel("Categories")
        self.setColumnCount(1)
        self.setExpandsOnDoubleClick(True)
        self.setDragEnabled(True)
        self.setAcceptDrops(True)
        self.setDragDropMode(QtWidgets.QAbstractItemView.InternalMove)
        self.setSelectionMode(QtWidgets.QAbstractItemView.SingleSelection)
        
        # Set appearance
        self.setStyleSheet("""
            QTreeWidget {
                border: 1px solid #cccccc;
                background-color: #ffffff;
            }
            QTreeWidget::item:hover {
                background-color: #e6f3ff;
            }
            QTreeWidget::item:selected {
                background-color: #0078d7;
                color: white;
            }
        """)
        
    def setup_context_menu(self):
        """Create context menu for tree items"""
        self.setContextMenuPolicy(Qt.CustomContextMenu)
        self.customContextMenuRequested.connect(self.show_context_menu)
        
        # Create actions
        self.new_category_action = QtWidgets.QAction("New Category", self)
        self.new_subcategory_action = QtWidgets.QAction("New Subcategory", self)
        self.rename_action = QtWidgets.QAction("Rename", self)
        self.delete_action = QtWidgets.QAction("Delete", self)
        
        # Connect actions
        self.new_category_action.triggered.connect(self.add_new_category)
        self.new_subcategory_action.triggered.connect(self.add_new_subcategory)
        self.rename_action.triggered.connect(self.rename_item)
        self.delete_action.triggered.connect(self.delete_item)
        
    def load_categories(self):
        """Load categories from category manager"""
        self.clear()
        categories = self.category_manager.categories
        
        for category, subcategories in categories.items():
            category_item = QtWidgets.QTreeWidgetItem(self)
            category_item.setText(0, category)
            category_item.setIcon(0, QtGui.QIcon(":/icons/categories/folder.svg"))
            
            for subcategory in subcategories:
                subcat_item = QtWidgets.QTreeWidgetItem(category_item)
                subcat_item.setText(0, subcategory)
                subcat_item.setIcon(0, QtGui.QIcon(":/icons/categories/subfolder.svg"))
                
        self.expandAll()
        
    def show_context_menu(self, position):
        """Show context menu at given position"""
        menu = QtWidgets.QMenu()
        item = self.itemAt(position)
        
        if item is None:
            # Clicked on empty space
            menu.addAction(self.new_category_action)
        else:
            if item.parent() is None:
                # Main category
                menu.addAction(self.new_subcategory_action)
            menu.addAction(self.rename_action)
            menu.addSeparator()
            menu.addAction(self.delete_action)
            
        menu.exec_(self.viewport().mapToGlobal(position))
        
    def add_new_category(self):
        """Add new main category"""
        name, ok = QtWidgets.QInputDialog.getText(
            self,
            "New Category",
            "Enter category name:"
        )
        
        if ok and name:
            # Check if category already exists
            if name in self.category_manager.categories:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Category Exists",
                    f"Category '{name}' already exists."
                )
                return
                
            # Add to category manager
            self.category_manager.categories[name] = []
            self.category_manager._save_categories(self.category_manager.categories)
            
            # Add to tree
            category_item = QtWidgets.QTreeWidgetItem(self)
            category_item.setText(0, name)
            category_item.setIcon(0, QtGui.QIcon(":/icons/categories/folder.svg"))
            
            self.categoryModified.emit()
            
    def add_new_subcategory(self):
        """Add new subcategory to selected category"""
        current_item = self.currentItem()
        if not current_item or current_item.parent():  # Must select a main category
            return
            
        name, ok = QtWidgets.QInputDialog.getText(
            self,
            "New Subcategory",
            "Enter subcategory name:"
        )
        
        if ok and name:
            category = current_item.text(0)
            
            # Check if subcategory already exists
            if name in self.category_manager.categories[category]:
                QtWidgets.QMessageBox.warning(
                    self,
                    "Subcategory Exists",
                    f"Subcategory '{name}' already exists in '{category}'."
                )
                return
                
            # Add to category manager
            self.category_manager.categories[category].append(name)
            self.category_manager._save_categories(self.category_manager.categories)
            
            # Add to tree
            subcat_item = QtWidgets.QTreeWidgetItem(current_item)
            subcat_item.setText(0, name)
            subcat_item.setIcon(0, QtGui.QIcon(":/icons/categories/subfolder.svg"))
            
            self.categoryModified.emit()
            
    def rename_item(self):
        """Rename selected category or subcategory"""
        item = self.currentItem()
        if not item:
            return
            
        old_name = item.text(0)
        new_name, ok = QtWidgets.QInputDialog.getText(
            self,
            "Rename",
            "Enter new name:",
            QtWidgets.QLineEdit.Normal,
            old_name
        )
        
        if ok and new_name and new_name != old_name:
            if item.parent():
                # Renaming subcategory
                category = item.parent().text(0)
                if new_name in self.category_manager.categories[category]:
                    QtWidgets.QMessageBox.warning(
                        self,
                        "Name Exists",
                        f"'{new_name}' already exists in '{category}'."
                    )
                    return
                    
                # Update category manager
                subcategories = self.category_manager.categories[category]
                index = subcategories.index(old_name)
                subcategories[index] = new_name
            else:
                # Renaming category
                if new_name in self.category_manager.categories:
                    QtWidgets.QMessageBox.warning(
                        self,
                        "Name Exists",
                        f"Category '{new_name}' already exists."
                    )
                    return
                    
                # Update category manager
                self.category_manager.categories[new_name] = self.category_manager.categories.pop(old_name)
                
            self.category_manager._save_categories(self.category_manager.categories)
            item.setText(0, new_name)
            self.categoryModified.emit()
            
    def delete_item(self):
        """Delete selected category or subcategory"""
        item = self.currentItem()
        if not item:
            return
            
        name = item.text(0)
        
        # Confirm deletion
        msg = f"Are you sure you want to delete '{name}' and all its contents?"
        reply = QtWidgets.QMessageBox.question(
            self,
            "Confirm Deletion",
            msg,
            QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No,
            QtWidgets.QMessageBox.No
        )
        
        if reply == QtWidgets.QMessageBox.Yes:
            if item.parent():
                # Delete subcategory
                category = item.parent().text(0)
                self.category_manager.categories[category].remove(name)
            else:
                # Delete category
                del self.category_manager.categories[name]
                
            self.category_manager._save_categories(self.category_manager.categories)
            item.parent().removeChild(item) if item.parent() else self.takeTopLevelItem(self.indexOfTopLevelItem(item))
            self.categoryModified.emit()
            
    def dropEvent(self, event):
        """Handle drag and drop reordering"""
        if event.source() == self:
            super().dropEvent(event)
            self._update_category_order()
            
    def _update_category_order(self):
        """Update category manager after drag and drop"""
        new_categories = {}
        
        # Iterate through all top-level items
        for i in range(self.topLevelItemCount()):
            category_item = self.topLevelItem(i)
            category_name = category_item.text(0)
            subcategories = []
            
            # Get subcategories
            for j in range(category_item.childCount()):
                subcategories.append(category_item.child(j).text(0))
                
            new_categories[category_name] = subcategories
            
        self.category_manager.categories = new_categories
        self.category_manager._save_categories(new_categories)
        self.categoryModified.emit()
        
    def currentChanged(self, current, previous):
        """Handle selection changes"""
        super().currentChanged(current, previous)
        
        if current:
            if current.parent():
                # Subcategory selected
                self.categorySelected.emit(current.parent().text(0), current.text(0))
            else:
                # Main category selected
                self.categorySelected.emit(current.text(0), "")
                
    def get_selected_path(self) -> tuple:
        """
        Get the currently selected category path
        Returns tuple of (category, subcategory)
        """
        current = self.currentItem()
        if not current:
            return ('', '')
            
        if current.parent():
            return (current.parent().text(0), current.text(0))
        return (current.text(0), '')
        
    def select_category(self, category: str, subcategory: str = ''):
        """
        Select a specific category/subcategory combination
        """
        self.clearSelection()
        
        # Find and select the category
        for i in range(self.topLevelItemCount()):
            category_item = self.topLevelItem(i)
            if category_item.text(0) == category:
                if not subcategory:
                    category_item.setSelected(True)
                    self.scrollToItem(category_item)
                    return True
                    
                # Look for subcategory
                for j in range(category_item.childCount()):
                    subcat_item = category_item.child(j)
                    if subcat_item.text(0) == subcategory:
                        subcat_item.setSelected(True)
                        self.scrollToItem(subcat_item)
                        return True
                        
        return False
        
    def get_category_assets_count(self, category: str, subcategory: str = '') -> int:
        """
        Get the number of assets in a category/subcategory
        """
        path = os.path.join(self.category_manager.get_category_path(category, subcategory))
        if not os.path.exists(path):
            return 0
            
        # Count only valid asset files
        return len([f for f in os.listdir(path) 
                   if os.path.isfile(os.path.join(path, f)) 
                   and f.lower().endswith(('.fcstd', '.step', '.stp', '.iges', '.igs'))])
                   
    def update_category_counts(self):
        """
        Update the display to show number of assets in each category
        """
        for i in range(self.topLevelItemCount()):
            category_item = self.topLevelItem(i)
            category = category_item.text(0)
            
            # Count assets in main category
            count = self.get_category_assets_count(category)
            category_item.setText(0, f"{category} ({count})")
            
            # Count assets in subcategories
            for j in range(category_item.childCount()):
                subcat_item = category_item.child(j)
                subcategory = subcat_item.text(0).split(" (")[0]  # Remove existing count if any
                subcount = self.get_category_assets_count(category, subcategory)
                subcat_item.setText(0, f"{subcategory} ({subcount})")
                
    def filter_categories(self, filter_text: str):
        """
        Filter categories based on search text
        """
        if not filter_text:
            # Show all items
            for i in range(self.topLevelItemCount()):
                category_item = self.topLevelItem(i)
                category_item.setHidden(False)
                for j in range(category_item.childCount()):
                    category_item.child(j).setHidden(False)
            return
            
        filter_text = filter_text.lower()
        
        # Iterate through all items
        for i in range(self.topLevelItemCount()):
            category_item = self.topLevelItem(i)
            category_matches = filter_text in category_item.text(0).lower()
            subcategory_visible = False
            
            # Check subcategories
            for j in range(category_item.childCount()):
                subcat_item = category_item.child(j)
                subcat_matches = filter_text in subcat_item.text(0).lower()
                subcat_item.setHidden(not subcat_matches)
                subcategory_visible = subcategory_visible or subcat_matches
                
            # Show category if it matches or has matching subcategories
            category_item.setHidden(not (category_matches or subcategory_visible))
            
    def expand_to_category(self, category: str, subcategory: str = ''):
        """
        Expand the tree to show a specific category/subcategory
        """
        for i in range(self.topLevelItemCount()):
            category_item = self.topLevelItem(i)
            if category_item.text(0) == category:
                category_item.setExpanded(True)
                if subcategory:
                    for j in range(category_item.childCount()):
                        if category_item.child(j).text(0) == subcategory:
                            self.scrollToItem(category_item.child(j))
                            return True
                else:
                    self.scrollToItem(category_item)
                    return True
        return False
        
    def get_category_path(self, item: QtWidgets.QTreeWidgetItem) -> str:
        """
        Get the full path for a category item
        """
        if item.parent():
            return f"{item.parent().text(0)}/{item.text(0)}"
        return item.text(0)
        
    def refresh(self):
        """
        Refresh the category tree
        """
        selected_path = self.get_selected_path()
        self.load_categories()
        self.update_category_counts()
        if selected_path[0]:
            self.select_category(*selected_path)
    

    def add_category(self, name: str, subcategories: List[str]) -> bool:
        """Add new category"""
        try:
            if name not in self.categories:
                self.categories[name] = subcategories
                category_path = os.path.join(self.assets_path, name)
                os.makedirs(category_path, exist_ok=True)
                self._save_categories(self.categories)
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Failed to add category: {str(e)}\n")
            return False