"""
Configuration management for FeasibleAssets
Handles settings, paths, and user preferences
"""

import os
import json
import FreeCAD
from typing import Dict, Any, Optional
from pathlib import Path

class Config:
    """Configuration manager for FeasibleAssets"""
    
    # Default configuration values
    DEFAULT_CONFIG = {
        "paths": {
            "assets_root": "",  # Will be set during initialization
            "temp_dir": "",     # Will be set during initialization
            "backup_dir": ""    # Will be set during initialization
        },
        "preview": {
            "size": 256,
            "background_color": "#FFFFFF",
            "auto_generate": True
        },
        "ui": {
            "default_view": "grid",  # grid or list
            "thumbnails_size": 128,
            "show_file_extensions": False,
            "group_by_category": True
        },
        "file_handling": {
            "allowed_extensions": [".fcstd", ".step", ".stp", ".iges", ".igs", ".stl"],
            "max_file_size": 100 * 1024 * 1024,  # 100MB
            "create_backups": True,
            "compression_enabled": True
        },
        "metadata": {
            "required_fields": ["name", "category"],
            "auto_extract_properties": True
        }
    }
    
    def __init__(self):
        self.config_file = os.path.join(
            FreeCAD.getUserAppDataDir(),
            "FeasibleAssets",
            "config.json"
        )
        self.config = self.DEFAULT_CONFIG.copy()
        self._initialize_paths()
        self.load_config()
        
    def _initialize_paths(self):
        """Initialize default paths based on FreeCAD's configuration"""
        base_path = os.path.join(FreeCAD.getUserAppDataDir(), "FeasibleAssets")
        
        self.config["paths"].update({
            "assets_root": os.path.join(base_path, "Assets"),
            "temp_dir": os.path.join(base_path, "Temp"),
            "backup_dir": os.path.join(base_path, "Backups")
        })
        
        # Create necessary directories
        for path in self.config["paths"].values():
            os.makedirs(path, exist_ok=True)
            
    def load_config(self):
        """Load configuration from file"""
        try:
            if os.path.exists(self.config_file):
                with open(self.config_file, 'r') as f:
                    user_config = json.load(f)
                    # Update config recursively while preserving defaults
                    self._update_recursive(self.config, user_config)
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error loading configuration: {str(e)}\n")
            
    def save_config(self):
        """Save current configuration to file"""
        try:
            os.makedirs(os.path.dirname(self.config_file), exist_ok=True)
            with open(self.config_file, 'w') as f:
                json.dump(self.config, f, indent=4)
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error saving configuration: {str(e)}\n")
            
    def _update_recursive(self, base_dict: Dict, update_dict: Dict):
        """Recursively update dictionary while preserving structure"""
        for key, value in update_dict.items():
            if key in base_dict:
                if isinstance(value, dict) and isinstance(base_dict[key], dict):
                    self._update_recursive(base_dict[key], value)
                else:
                    base_dict[key] = value
                    
    def get(self, key_path: str, default: Any = None) -> Any:
        """
        Get configuration value using dot notation
        Example: config.get("ui.default_view")
        """
        try:
            value = self.config
            for key in key_path.split('.'):
                value = value[key]
            return value
        except (KeyError, TypeError):
            return default
            
    def set(self, key_path: str, value: Any):
        """
        Set configuration value using dot notation
        Example: config.set("ui.default_view", "list")
        """
        try:
            keys = key_path.split('.')
            target = self.config
            for key in keys[:-1]:
                target = target[key]
            target[keys[-1]] = value
            self.save_config()
            return True
        except (KeyError, TypeError):
            return False
            
    def get_assets_path(self) -> str:
        """Get the assets root directory path"""
        return self.config["paths"]["assets_root"]
        
    def get_temp_path(self) -> str:
        """Get the temporary directory path"""
        return self.config["paths"]["temp_dir"]
        
    def get_backup_path(self) -> str:
        """Get the backup directory path"""
        return self.config["paths"]["backup_dir"]
        
    def is_file_allowed(self, filename: str) -> bool:
        """Check if file extension is allowed"""
        ext = os.path.splitext(filename)[1].lower()
        return ext in self.config["file_handling"]["allowed_extensions"]
        
    def get_max_file_size(self) -> int:
        """Get maximum allowed file size in bytes"""
        return self.config["file_handling"]["max_file_size"]
        
    def create_category_path(self, category: str, subcategory: str = "") -> str:
        """Create and return path for category"""
        category_path = os.path.join(self.get_assets_path(), category)
        if subcategory:
            category_path = os.path.join(category_path, subcategory)
            
        os.makedirs(category_path, exist_ok=True)
        return category_path
        
    def get_preview_size(self) -> int:
        """Get preview image size"""
        return self.config["preview"]["size"]
        
    def should_create_backup(self) -> bool:
        """Check if backups should be created"""
        return self.config["file_handling"]["create_backups"]
        
    def is_compression_enabled(self) -> bool:
        """Check if file compression is enabled"""
        return self.config["file_handling"]["compression_enabled"]
        
    def get_required_metadata_fields(self) -> list:
        """Get list of required metadata fields"""
        return self.config["metadata"]["required_fields"]
        
    def should_auto_extract_properties(self) -> bool:
        """Check if automatic property extraction is enabled"""
        return self.config["metadata"]["auto_extract_properties"]
        
    def get_ui_settings(self) -> Dict:
        """Get all UI-related settings"""
        return self.config["ui"].copy()
        
    def reset_to_defaults(self):
        """Reset configuration to default values"""
        self.config = self.DEFAULT_CONFIG.copy()
        self._initialize_paths()
        self.save_config()
        
    def export_config(self, filepath: str) -> bool:
        """Export configuration to file"""
        try:
            with open(filepath, 'w') as f:
                json.dump(self.config, f, indent=4)
            return True
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error exporting configuration: {str(e)}\n")
            return False
            
    def import_config(self, filepath: str) -> bool:
        """Import configuration from file"""
        try:
            with open(filepath, 'r') as f:
                new_config = json.load(f)
                self._update_recursive(self.config, new_config)
            self.save_config()
            return True
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error importing configuration: {str(e)}\n")
            return False

# Create global configuration instance
config = Config()

# Convenience functions
def get_assets_path() -> str:
    """Convenience function to get assets path"""
    return config.get_assets_path()

def get_temp_path() -> str:
    """Convenience function to get temp path"""
    return config.get_temp_path()

def get_backup_path() -> str:
    """Convenience function to get backup path"""
    return config.get_backup_path()