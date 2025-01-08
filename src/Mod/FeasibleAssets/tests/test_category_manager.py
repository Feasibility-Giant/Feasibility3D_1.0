"""
Unit tests for the CategoryManager class
Tests category creation, modification, and management functionality
"""

import unittest
import os
import shutil
import tempfile
from pathlib import Path
from feasibleassets.core.category_manager import CategoryManager
from feasibleassets.utils.config import Config

class TestCategoryManager(unittest.TestCase):
    def setUp(self):
        """Set up test environment before each test"""
        # Create a temporary directory for testing
        self.test_dir = tempfile.mkdtemp()
        
        # Create a test config
        self.config = Config()
        self.config.config["paths"]["assets_root"] = self.test_dir
        
        # Initialize category manager with test config
        self.category_manager = CategoryManager()
        self.category_manager.categories_file = os.path.join(self.test_dir, "categories.json")
        
    def tearDown(self):
        """Clean up after each test"""
        # Remove temporary test directory
        shutil.rmtree(self.test_dir)
        
    def test_default_categories(self):
        """Test that default categories are created correctly"""
        categories = self.category_manager._create_default_categories()
        
        # Verify default categories exist
        self.assertIn("Piping", categories)
        self.assertIn("Vessels", categories)
        self.assertIn("Equipment", categories)
        
        # Verify default subcategories
        self.assertIn("Pipes", categories["Piping"])
        self.assertIn("Pressure Vessels", categories["Vessels"])
        self.assertIn("Pumps", categories["Equipment"])
        
    def test_add_category(self):
        """Test adding a new category"""
        new_category = "Test Category"
        subcategories = ["Sub1", "Sub2"]
        
        success = self.category_manager.add_category(new_category, subcategories)
        
        self.assertTrue(success)
        self.assertIn(new_category, self.category_manager.categories)
        self.assertEqual(self.category_manager.categories[new_category], subcategories)
        
    def test_add_duplicate_category(self):
        """Test adding a category that already exists"""
        category = "Test Category"
        self.category_manager.add_category(category, ["Sub1"])
        
        success = self.category_manager.add_category(category, ["Sub2"])
        
        self.assertFalse(success)
        self.assertEqual(self.category_manager.categories[category], ["Sub1"])
        
    def test_remove_category(self):
        """Test removing a category"""
        category = "Test Category"
        self.category_manager.add_category(category, ["Sub1"])
        
        success = self.category_manager.remove_category(category)
        
        self.assertTrue(success)
        self.assertNotIn(category, self.category_manager.categories)
        
    def test_remove_nonexistent_category(self):
        """Test removing a category that doesn't exist"""
        success = self.category_manager.remove_category("Nonexistent")
        
        self.assertFalse(success)
        
    def test_add_subcategory(self):
        """Test adding a subcategory to existing category"""
        category = "Test Category"
        self.category_manager.add_category(category, ["Sub1"])
        
        success = self.category_manager.add_subcategory(category, "Sub2")
        
        self.assertTrue(success)
        self.assertIn("Sub2", self.category_manager.categories[category])
        
    def test_add_subcategory_to_nonexistent_category(self):
        """Test adding a subcategory to a category that doesn't exist"""
        success = self.category_manager.add_subcategory("Nonexistent", "Sub1")
        
        self.assertFalse(success)
        
    def test_remove_subcategory(self):
        """Test removing a subcategory"""
        category = "Test Category"
        subcategories = ["Sub1", "Sub2"]
        self.category_manager.add_category(category, subcategories)
        
        success = self.category_manager.remove_subcategory(category, "Sub1")
        
        self.assertTrue(success)
        self.assertNotIn("Sub1", self.category_manager.categories[category])
        self.assertIn("Sub2", self.category_manager.categories[category])
        
    def test_rename_category(self):
        """Test renaming a category"""
        old_name = "Old Category"
        new_name = "New Category"
        subcategories = ["Sub1", "Sub2"]
        
        self.category_manager.add_category(old_name, subcategories)
        success = self.category_manager.rename_category(old_name, new_name)
        
        self.assertTrue(success)
        self.assertNotIn(old_name, self.category_manager.categories)
        self.assertIn(new_name, self.category_manager.categories)
        self.assertEqual(self.category_manager.categories[new_name], subcategories)
        
    def test_rename_category_to_existing(self):
        """Test renaming a category to a name that already exists"""
        category1 = "Category1"
        category2 = "Category2"
        
        self.category_manager.add_category(category1, ["Sub1"])
        self.category_manager.add_category(category2, ["Sub2"])
        
        success = self.category_manager.rename_category(category1, category2)
        
        self.assertFalse(success)
        self.assertIn(category1, self.category_manager.categories)
        
    def test_get_all_categories(self):
        """Test getting all categories"""
        categories = ["Cat1", "Cat2", "Cat3"]
        for cat in categories:
            self.category_manager.add_category(cat, [])
            
        all_cats = self.category_manager.get_all_categories()
        
        self.assertEqual(set(categories), set(all_cats))
        
    def test_get_subcategories(self):
        """Test getting subcategories for a category"""
        category = "Test Category"
        subcategories = ["Sub1", "Sub2", "Sub3"]
        
        self.category_manager.add_category(category, subcategories)
        result = self.category_manager.get_subcategories(category)
        
        self.assertEqual(set(subcategories), set(result))
        
    def test_category_exists(self):
        """Test checking if a category exists"""
        category = "Test Category"
        self.category_manager.add_category(category, [])
        
        self.assertTrue(self.category_manager.category_exists(category))
        self.assertFalse(self.category_manager.category_exists("Nonexistent"))
        
    def test_subcategory_exists(self):
        """Test checking if a subcategory exists"""
        category = "Test Category"
        subcategory = "Test Subcategory"
        
        self.category_manager.add_category(category, [subcategory])
        
        self.assertTrue(self.category_manager.subcategory_exists(category, subcategory))
        self.assertFalse(self.category_manager.subcategory_exists(category, "Nonexistent"))
        
    def test_save_and_load(self):
        """Test saving and loading categories"""
        # Add some test categories
        self.category_manager.add_category("Cat1", ["Sub1", "Sub2"])
        self.category_manager.add_category("Cat2", ["Sub3", "Sub4"])
        
        # Save categories
        self.category_manager._save_categories(self.category_manager.categories)
        
        # Create new instance and load
        new_manager = CategoryManager()
        new_manager.categories_file = self.category_manager.categories_file
        loaded_categories = new_manager._load_categories()
        
        # Compare
        self.assertEqual(self.category_manager.categories, loaded_categories)

if __name__ == '__main__':
    unittest.main()