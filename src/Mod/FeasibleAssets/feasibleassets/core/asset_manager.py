"""
Core asset management functionality
"""
import os
import json
import shutil
import FreeCAD
from typing import Dict, List, Optional, Any, Tuple
from datetime import datetime
from ..utils.config import get_assets_path
from ..utils.file_handlers import create_preview, get_file_metadata
from .metadata import MetadataManager
from .category_manager import CategoryManager

class AssetManager:
    def __init__(self):
        self.assets_path = get_assets_path()
        self.metadata_manager = MetadataManager(self.assets_path)
        self.category_manager = CategoryManager()
        self._ensure_asset_directory()
        
    def _ensure_asset_directory(self):
        """Ensure asset directory exists"""
        if not os.path.exists(self.assets_path):
            os.makedirs(self.assets_path)
            
    def import_asset(self, file_path: str, category: str, subcategory: str = "", metadata: Dict = None) -> bool:
        """Import an asset file into the library"""
        try:
            file_name = os.path.basename(file_path)
            # Build correct target path including subcategory
            if subcategory:
                target_path = os.path.join(self.assets_path, category, subcategory, file_name)
            else:
                target_path = os.path.join(self.assets_path, category, file_name)
            
            # Copy file to assets directory
            os.makedirs(os.path.dirname(target_path), exist_ok=True)
            shutil.copy2(file_path, target_path)
            
            # Generate preview
            create_preview(target_path)
            
            # Save metadata
            if metadata is None:
                metadata = get_file_metadata(file_path)
                metadata['category'] = category
                metadata['subcategory'] = subcategory
            self._save_metadata(target_path, metadata)
            
            return True
        except Exception as e:
            FreeCAD.Console.PrintError(f"Failed to import asset: {str(e)}\n")
            return False

    def get_category_assets(self, category: str, subcategory: str = "") -> List[Dict]:
        """Get all assets in a category"""
        assets = []
        category_path = os.path.join(self.assets_path, category)
        if subcategory:
            category_path = os.path.join(category_path, subcategory)
                
        if not os.path.exists(category_path):
            return assets
                
        for filename in os.listdir(category_path):
            file_path = os.path.join(category_path, filename)
            # Only process files (not directories) and check valid extensions
            if os.path.isfile(file_path) and self._is_valid_asset_file(filename):
                asset = self._get_asset_info(file_path, category, subcategory)
                if asset:
                    assets.append(asset)
                        
        return assets

    def search_assets(self, search_term: str) -> List[Dict]:
        """
        Search for assets based on search term
        Returns list of matching assets with their metadata
        """
        results = []
        search_term = search_term.lower().strip()
        
        # If search is empty, return empty results
        if not search_term:
            return results
        
        # Search through all categories
        for category in self.category_manager.categories:
            # Search main category assets
            main_assets = self._search_in_category(category, "", search_term)
            for asset in main_assets:
                if asset not in results:
                    results.append(asset)
            
            # Search subcategories
            for subcategory in self.category_manager.categories[category]:
                sub_assets = self._search_in_category(category, subcategory, search_term)
                for asset in sub_assets:
                    # Add path information if not present
                    if 'path' not in asset:
                        asset['path'] = self._get_full_asset_path(asset['id'], category, subcategory)
                    
                    # Get and check metadata
                    metadata = self._load_metadata(asset['path'])
                    if metadata:
                        searchable_fields = [
                            str(metadata.get('Name', '')),
                            str(metadata.get('Description', '')),
                            str(metadata.get('Manufacturer', '')),
                            str(metadata.get('Model Number', '')),
                            str(metadata.get('Material Grade', '')),
                            str(metadata.get('Standard', '')),
                            str(metadata.get('Temperature Range', '')),
                            str(metadata.get('Pressure Rating', '')),
                            str(metadata.get('Weight', ''))
                        ]
                        
                        # Check if search term matches any metadata field
                        if any(search_term in field.lower() for field in searchable_fields):
                            if asset not in results:
                                results.append(asset)
                        # Also check the asset name and path for matches
                        elif (search_term in asset['name'].lower() or 
                            search_term in str(asset.get('path', '')).lower()):
                            if asset not in results:
                                results.append(asset)
        
        return results

    # def _get_full_asset_path(self, asset_id: str, category: str, subcategory: str = "") -> str:
    #     """Get the full filesystem path for an asset"""
    #     base_path = self.get_assets_directory()
    #     if subcategory:
    #         return os.path.join(base_path, category, subcategory, asset_id)
    #     return os.path.join(base_path, category, asset_id)
    
    def _search_in_category(self, category: str, subcategory: str, search_term: str) -> List[Dict]:
        """Search for assets in a specific category"""
        results = []
        assets = self.get_category_assets(category, subcategory)
        
        for asset in assets:
            if self._asset_matches_search(asset, search_term):
                # Ensure asset has all necessary path information
                if 'path' not in asset:
                    asset['path'] = self._get_full_asset_path(asset['id'], category, subcategory)
                results.append(asset)
                    
        return results
    
    def _get_full_asset_path(self, asset_id: str, category: str, subcategory: str = "") -> str:
        """Get the full filesystem path for an asset"""
        base_path = self.assets_path
        if subcategory:
            return os.path.join(base_path, category, subcategory, asset_id)
        return os.path.join(base_path, category, asset_id)
    
    def _asset_matches_search(self, asset: Dict, search_term: str) -> bool:
        """Check if an asset matches the search term"""
        # Search in basic asset info
        if search_term in asset['name'].lower():
            return True
                
        if search_term in str(asset.get('description', '')).lower():
            return True
                
        # Search in metadata
        metadata = self._load_metadata(asset['path'])
        if metadata:
            # Handle both object and dictionary metadata formats
            if isinstance(metadata, dict):
                # Search in material properties
                material = metadata.get('material', {})
                if isinstance(material, dict):
                    if search_term in str(material.get('material_grade', '')).lower():
                        return True
                    if search_term in str(material.get('standard', '')).lower():
                        return True
                        
                # Search in manufacturer
                if search_term in str(metadata.get('manufacturer', '')).lower():
                    return True
                        
                # Search in model number
                if search_term in str(metadata.get('model_number', '')).lower():
                    return True
                        
                # Search in custom properties
                custom_props = metadata.get('custom_properties', {})
                if isinstance(custom_props, dict):
                    for prop_name, prop_value in custom_props.items():
                        if (search_term in str(prop_name).lower() or 
                            search_term in str(prop_value).lower()):
                            return True
                            
                # Search in certifications
                certifications = metadata.get('certifications', [])
                if isinstance(certifications, list):
                    for cert in certifications:
                        if isinstance(cert, dict):
                            if (search_term in str(cert.get('cert_number', '')).lower() or
                                search_term in str(cert.get('issuing_body', '')).lower() or
                                search_term in str(cert.get('cert_type', '')).lower()):
                                return True
            else:
                # Original object-based metadata handling
                if hasattr(metadata, 'material'):
                    if search_term in str(getattr(metadata.material, 'material_grade', '')).lower():
                        return True
                    if search_term in str(getattr(metadata.material, 'standard', '')).lower():
                        return True
                        
                if hasattr(metadata, 'manufacturer'):
                    if search_term in str(metadata.manufacturer).lower():
                        return True
                        
                if hasattr(metadata, 'model_number'):
                    if search_term in str(metadata.model_number).lower():
                        return True
                        
                if hasattr(metadata, 'custom_properties'):
                    for prop_name, prop_value in metadata.custom_properties.items():
                        if (search_term in str(prop_name).lower() or 
                            search_term in str(prop_value).lower()):
                            return True
                            
                if hasattr(metadata, 'certifications'):
                    for cert in metadata.certifications:
                        if (search_term in str(getattr(cert, 'cert_number', '')).lower() or
                            search_term in str(getattr(cert, 'issuing_body', '')).lower() or
                            search_term in str(getattr(cert, 'cert_type', '')).lower()):
                            return True
        
        return False
            
    def _save_metadata(self, asset_path: str, metadata: Dict):
        """Save asset metadata"""
        metadata_path = f"{asset_path}.json"
        with open(metadata_path, 'w') as f:
            json.dump(metadata, f, indent=2)
            
    def _get_asset_info(self, file_path: str, category: str, subcategory: str = "") -> Optional[Dict]:
        """Get asset information"""
        try:
            # Get basic file info first
            basic_info = {
                'id': os.path.splitext(os.path.basename(file_path))[0],
                'name': os.path.basename(file_path),
                'path': file_path,
                'type': os.path.splitext(file_path)[1][1:].upper(),
                'size': os.path.getsize(file_path),
                'modified': datetime.fromtimestamp(os.path.getmtime(file_path)).strftime('%Y-%m-%d %H:%M:%S'),
                'category': category,
                'subcategory': subcategory,
                'description': '',
                'metadata': {}
            }

            # Try to load metadata if it exists
            metadata = self._load_metadata(file_path)
            if metadata:
                basic_info.update({
                    'name': metadata.get('name', basic_info['name']),
                    'description': metadata.get('description', ''),
                    'metadata': metadata
                })

            # Handle preview
            preview_path = f"{file_path}.png"
            if not os.path.exists(preview_path):
                try:
                    create_preview(file_path)
                except Exception as e:
                    FreeCAD.Console.PrintError(f"Error creating preview: {str(e)}\n")
                    
            basic_info['preview_path'] = preview_path if os.path.exists(preview_path) else None

            return basic_info
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error getting asset info: {str(e)}\n")
            return None
            
    def _load_metadata(self, asset_path: str) -> Optional[Dict]:
        """Load asset metadata"""
        metadata_path = f"{asset_path}.json"
        if os.path.exists(metadata_path):
            try:
                with open(metadata_path, 'r') as f:
                    return json.load(f)
            except Exception as e:
                FreeCAD.Console.PrintError(f"Error loading metadata: {str(e)}\n")
        return None
        
    def _is_valid_asset_file(self, filename: str) -> bool:
        """Check if file is a valid asset"""
        extensions = ['.fcstd', '.step', '.stp', '.iges', '.igs', '.stl']
        return any(filename.lower().endswith(ext) for ext in extensions)

    def delete_asset(self, asset_id: str, category: str, subcategory: str = "") -> bool:
        """Delete an asset and its associated files"""
        try:
            category_path = os.path.join(self.assets_path, category)
            if subcategory:
                category_path = os.path.join(category_path, subcategory)
                
            # Find asset file
            for filename in os.listdir(category_path):
                if filename.startswith(asset_id + '.'):
                    file_path = os.path.join(category_path, filename)
                    # Delete main file
                    if os.path.exists(file_path):
                        os.remove(file_path)
                    # Delete preview
                    preview_path = f"{file_path}.png"
                    if os.path.exists(preview_path):
                        os.remove(preview_path)
                    # Delete metadata
                    metadata_path = f"{file_path}.json"
                    if os.path.exists(metadata_path):
                        os.remove(metadata_path)
                        
            return True
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error deleting asset: {str(e)}\n")
            return False

    def update_asset(self, asset_id: str, category: str, updates: Dict, subcategory: str = "") -> bool:
        """Update asset metadata"""
        try:
            assets = self.get_category_assets(category, subcategory)
            for asset in assets:
                if asset['id'] == asset_id:
                    metadata = self._load_metadata(asset['path'])
                    if metadata:
                        metadata.update(updates)
                        self._save_metadata(asset['path'], metadata)
                        return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error updating asset: {str(e)}\n")
            return False
        

    def move_asset(self, asset_id: str, source_category: str, target_category: str, 
                source_subcategory: str = "", target_subcategory: str = "") -> bool:
        """Move an asset from one category to another"""
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
            
            # Find all files related to this asset (main file, preview, metadata)
            source_files = []
            for filename in os.listdir(source_path):
                if filename.startswith(asset_id):
                    source_files.append(filename)
                    
            # Move each file
            for filename in source_files:
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
            FreeCAD.Console.PrintError(f"Failed to move asset: {str(e)}\n")
            return False
    
    def rename_asset(self, asset_id: str, new_name: str, category: str, subcategory: str = "") -> bool:
        """Rename an asset"""
        try:
            asset_path = os.path.join(self.assets_path, category)
            if subcategory:
                asset_path = os.path.join(asset_path, subcategory)
                
            # Update metadata
            metadata_path = os.path.join(asset_path, f"{asset_id}.json")
            if os.path.exists(metadata_path):
                with open(metadata_path, 'r') as f:
                    metadata = json.load(f)
                metadata['name'] = new_name
                with open(metadata_path, 'w') as f:
                    json.dump(metadata, f, indent=2)
                    
                return True
            return False
        except Exception as e:
            FreeCAD.Console.PrintError(f"Failed to rename asset: {str(e)}\n")
            return False