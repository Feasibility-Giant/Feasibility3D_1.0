"""
Category management functionality for FeasibleAssets
Handles categories and asset movement between them
"""
import os
import json
import shutil
import FreeCAD
from typing import Dict, List, Optional, Tuple
from ..utils.config import get_assets_path

class CategoryManager:
    def __init__(self):
        self.assets_path = get_assets_path()
        self.categories_file = os.path.join(self.assets_path, "categories.json")
        self.categories = self._load_categories()
        
    def _load_categories(self) -> Dict:
        """Load categories from file or create default"""
        try:
            if os.path.exists(self.categories_file):
                with open(self.categories_file, 'r') as f:
                    return json.load(f)
            return self._create_default_categories()
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error loading categories: {str(e)}\n")
            return self._create_default_categories()
        
    def _create_default_categories(self) -> Dict:
        """Create default category structure"""
        categories = {
            "Piping": ["Pipes", "Fittings", "Flanges", "Valves"],
            "Vessels": ["Pressure Vessels", "Storage Tanks", "Separators"],
            "Equipment": ["Pumps", "Compressors", "Heat Exchangers"],
            "Structural": ["Support Structures", "Platforms", "Foundations"],
            "Instrumentation": ["Meters", "Sensors", "Controls"]
        }
        
        # Create category directories
        for category, subcategories in categories.items():
            category_path = os.path.join(self.assets_path, category)
            os.makedirs(category_path, exist_ok=True)
            for subcategory in subcategories:
                subcategory_path = os.path.join(category_path, subcategory)
                os.makedirs(subcategory_path, exist_ok=True)
        
        self._save_categories(categories)
        return categories
        
    def _save_categories(self, categories: Dict):
        """Save categories to file"""
        try:
            os.makedirs(os.path.dirname(self.categories_file), exist_ok=True)
            with open(self.categories_file, 'w') as f:
                json.dump(categories, f, indent=2)
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error saving categories: {str(e)}\n")

    def add_category(self, name: str, subcategories: List[str]) -> bool:
        """Add new category"""
        try:
            if name not in self.categories:
                self.categories[name] = subcategories
                # Create category directory and subcategories
                category_path = os.path.join(self.assets_path, name)
                os.makedirs(category_path, exist_ok=True)
                for subcategory in subcategories:
                    os.makedirs(os.path.join(category_path, subcategory), exist_ok=True)
                self._save_categories(self.categories)
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error adding category: {str(e)}\n")
            return False

    def remove_category(self, category: str) -> bool:
        """Remove category and all its contents"""
        try:
            if category in self.categories:
                # Remove category directory and all contents
                category_path = os.path.join(self.assets_path, category)
                if os.path.exists(category_path):
                    shutil.rmtree(category_path)
                del self.categories[category]
                self._save_categories(self.categories)
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error removing category: {str(e)}\n")
            return False

    def add_subcategory(self, category: str, subcategory: str) -> bool:
        """Add subcategory to existing category"""
        try:
            if category in self.categories and subcategory not in self.categories[category]:
                self.categories[category].append(subcategory)
                # Create subcategory directory
                subcategory_path = os.path.join(self.assets_path, category, subcategory)
                os.makedirs(subcategory_path, exist_ok=True)
                self._save_categories(self.categories)
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error adding subcategory: {str(e)}\n")
            return False

    def remove_subcategory(self, category: str, subcategory: str) -> bool:
        """Remove subcategory and its contents"""
        try:
            if category in self.categories and subcategory in self.categories[category]:
                # Remove subcategory directory and contents
                subcategory_path = os.path.join(self.assets_path, category, subcategory)
                if os.path.exists(subcategory_path):
                    shutil.rmtree(subcategory_path)
                self.categories[category].remove(subcategory)
                self._save_categories(self.categories)
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error removing subcategory: {str(e)}\n")
            return False

    def move_asset(self, asset_id: str, source_category: str, target_category: str, 
                  source_subcategory: str = "", target_subcategory: str = "") -> bool:
        """Move an asset between categories"""
        try:
            # Get source and target paths
            source_path = os.path.join(self.assets_path, source_category)
            target_path = os.path.join(self.assets_path, target_category)
            
            if source_subcategory:
                source_path = os.path.join(source_path, source_subcategory)
            if target_subcategory:
                target_path = os.path.join(target_path, target_subcategory)
                
            # Ensure target directory exists
            os.makedirs(target_path, exist_ok=True)
            
            # Find all files related to this asset
            asset_files = []
            for filename in os.listdir(source_path):
                if filename.startswith(asset_id):
                    asset_files.append(filename)
                    
            # Move all related files
            for filename in asset_files:
                old_path = os.path.join(source_path, filename)
                new_path = os.path.join(target_path, filename)
                shutil.move(old_path, new_path)
                
                # Update metadata if it's the metadata file
                if filename.endswith('.json'):
                    with open(new_path, 'r') as f:
                        metadata = json.load(f)
                    metadata['category'] = target_category
                    metadata['subcategory'] = target_subcategory
                    with open(new_path, 'w') as f:
                        json.dump(metadata, f, indent=2)
                        
            return True
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error moving asset: {str(e)}\n")
            return False

    def rename_category(self, old_name: str, new_name: str) -> bool:
        """Rename category"""
        try:
            if old_name in self.categories and new_name not in self.categories:
                # Rename directory
                old_path = os.path.join(self.assets_path, old_name)
                new_path = os.path.join(self.assets_path, new_name)
                if os.path.exists(old_path):
                    os.rename(old_path, new_path)
                
                # Update categories dictionary
                self.categories[new_name] = self.categories.pop(old_name)
                self._save_categories(self.categories)
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error renaming category: {str(e)}\n")
            return False

    def get_category_path(self, category: str, subcategory: str = "") -> str:
        """Get full path for category/subcategory"""
        path = os.path.join(self.assets_path, category)
        if subcategory:
            path = os.path.join(path, subcategory)
        return path

    def category_exists(self, category: str) -> bool:
        """Check if category exists"""
        return category in self.categories

    def subcategory_exists(self, category: str, subcategory: str) -> bool:
        """Check if subcategory exists in category"""
        return category in self.categories and subcategory in self.categories[category]
    
    def add_subcategory_to_existing(self, parent_category: str, new_subcategory: str) -> bool:
        """Add new subcategory to existing category"""
        try:
            if parent_category in self.categories:
                if new_subcategory not in self.categories[parent_category]:
                    self.categories[parent_category].append(new_subcategory)
                    # Create the directory
                    subcategory_path = os.path.join(self.assets_path, parent_category, new_subcategory)
                    os.makedirs(subcategory_path, exist_ok=True)
                    self._save_categories(self.categories)
                    return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Failed to add subcategory: {str(e)}\n")
            return False