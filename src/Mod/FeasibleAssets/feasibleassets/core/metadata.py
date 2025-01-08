"""
Metadata management for FeasibleAssets
Handles storing, retrieving, and validating metadata for oil & gas industry assets
"""

import os
import json
from typing import Dict, List, Optional, Union
from dataclasses import dataclass, asdict
from datetime import datetime
from enum import Enum
import FreeCAD

class MaterialStandard(Enum):
    """Common material standards in oil & gas industry"""
    ASTM = "ASTM"
    API = "API"
    ASME = "ASME"
    ISO = "ISO"
    NACE = "NACE"

class PressureRating(Enum):
    """Standard pressure ratings"""
    CLASS_150 = "150#"
    CLASS_300 = "300#"
    CLASS_600 = "600#"
    CLASS_900 = "900#"
    CLASS_1500 = "1500#"
    CLASS_2500 = "2500#"

@dataclass
class MaterialProperties:
    """Material properties data structure"""
    material_grade: str
    standard: MaterialStandard
    temperature_min: float  # Celsius
    temperature_max: float  # Celsius
    pressure_rating: PressureRating
    corrosion_allowance: float  # millimeters

@dataclass
class Certification:
    """Certification information"""
    cert_number: str
    issuing_body: str
    issue_date: str
    expiry_date: str
    cert_type: str

@dataclass
class AssetMetadata:
    """Main metadata structure for assets"""
    # Basic information
    asset_id: str
    name: str
    description: str
    category: str
    subcategory: str
    tags: List[str]
    
    # Technical specifications
    material: MaterialProperties
    weight: float  # kilograms
    dimensions: Dict[str, float]  # key-value pairs for dimensions
    
    # Documentation
    certifications: List[Certification]
    manufacturer: str
    model_number: str
    revision: str
    
    # File information
    creation_date: str
    modified_date: str
    file_format: str
    file_size: int
    
    # Custom properties
    custom_properties: Dict[str, Union[str, float, int, bool]]

class MetadataManager:
    """Handles all metadata operations"""
    
    def __init__(self, assets_path: str):
        self.assets_path = assets_path
        self.metadata_path = os.path.join(assets_path, "metadata")
        self._ensure_metadata_directory()

    def _ensure_metadata_directory(self):
        """Ensure metadata directory exists"""
        if not os.path.exists(self.metadata_path):
            os.makedirs(self.metadata_path)

    def create_metadata(self, asset_id: str, basic_info: Dict) -> AssetMetadata:
        """Create new metadata entry for an asset"""
        current_time = datetime.now().isoformat()
        
        # Create default material properties
        material = MaterialProperties(
            material_grade="",
            standard=MaterialStandard.ASTM,
            temperature_min=0.0,
            temperature_max=0.0,
            pressure_rating=PressureRating.CLASS_150,
            corrosion_allowance=0.0
        )
        
        # Create metadata structure
        metadata = AssetMetadata(
            asset_id=asset_id,
            name=basic_info.get('name', ''),
            description=basic_info.get('description', ''),
            category=basic_info.get('category', ''),
            subcategory=basic_info.get('subcategory', ''),
            tags=basic_info.get('tags', []),
            material=material,
            weight=0.0,
            dimensions={},
            certifications=[],
            manufacturer='',
            model_number='',
            revision='1.0',
            creation_date=current_time,
            modified_date=current_time,
            file_format=basic_info.get('file_format', ''),
            file_size=basic_info.get('file_size', 0),
            custom_properties={}
        )
        
        self.save_metadata(metadata)
        return metadata

    def save_metadata(self, metadata: AssetMetadata):
        """Save metadata to file"""
        file_path = os.path.join(self.metadata_path, f"{metadata.asset_id}.json")
        
        # Convert dataclass to dictionary
        metadata_dict = asdict(metadata)
        
        # Convert enum values to strings
        if isinstance(metadata.material.standard, MaterialStandard):
            metadata_dict['material']['standard'] = metadata.material.standard.value
        if isinstance(metadata.material.pressure_rating, PressureRating):
            metadata_dict['material']['pressure_rating'] = metadata.material.pressure_rating.value
        
        with open(file_path, 'w') as f:
            json.dump(metadata_dict, f, indent=2)

    def load_metadata(self, asset_id: str) -> Optional[AssetMetadata]:
        """Load metadata from file"""
        file_path = os.path.join(self.metadata_path, f"{asset_id}.json")
        
        if not os.path.exists(file_path):
            return None
            
        try:
            with open(file_path, 'r') as f:
                data = json.load(f)
            
            # Convert string values back to enums
            data['material']['standard'] = MaterialStandard(data['material']['standard'])
            data['material']['pressure_rating'] = PressureRating(data['material']['pressure_rating'])
            
            # Convert dictionary to MaterialProperties
            material = MaterialProperties(**data['material'])
            data['material'] = material
            
            # Convert dictionaries to Certification objects
            certifications = [Certification(**cert) for cert in data['certifications']]
            data['certifications'] = certifications
            
            return AssetMetadata(**data)
            
        except Exception as e:
            FreeCAD.Console.PrintError(f"Error loading metadata for {asset_id}: {str(e)}\n")
            return None

    def update_metadata(self, asset_id: str, updates: Dict) -> bool:
        """Update specific fields in metadata"""
        metadata = self.load_metadata(asset_id)
        if not metadata:
            return False
            
        # Update fields
        for key, value in updates.items():
            if hasattr(metadata, key):
                setattr(metadata, key, value)
                
        metadata.modified_date = datetime.now().isoformat()
        self.save_metadata(metadata)
        return True

    def delete_metadata(self, asset_id: str) -> bool:
        """Delete metadata file"""
        file_path = os.path.join(self.metadata_path, f"{asset_id}.json")
        if os.path.exists(file_path):
            os.remove(file_path)
            return True
        return False

    def get_material_standards(self) -> List[str]:
        """Get list of available material standards"""
        return [standard.value for standard in MaterialStandard]

    def get_pressure_ratings(self) -> List[str]:
        """Get list of available pressure ratings"""
        return [rating.value for rating in PressureRating]

    def validate_metadata(self, metadata: AssetMetadata) -> List[str]:
        """Validate metadata and return list of errors if any"""
        errors = []
        
        # Check required fields
        if not metadata.name:
            errors.append("Asset name is required")
        if not metadata.category:
            errors.append("Category is required")
            
        # Validate numerical values
        if metadata.weight < 0:
            errors.append("Weight cannot be negative")
        if metadata.material.temperature_min > metadata.material.temperature_max:
            errors.append("Minimum temperature cannot be greater than maximum temperature")
            
        # Validate dates
        try:
            datetime.fromisoformat(metadata.creation_date)
            datetime.fromisoformat(metadata.modified_date)
        except ValueError:
            errors.append("Invalid date format")
            
        return errors