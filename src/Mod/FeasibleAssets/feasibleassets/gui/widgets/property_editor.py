"""
Property editor implementation for FeasibleAssets
Handles the editing and display of asset properties with focus on oil & gas specifications
"""

from PySide2 import QtWidgets, QtCore, QtGui
from PySide2.QtCore import Qt, Signal
import FreeCAD
from ...core.asset_manager import AssetManager
from datetime import datetime
from ...core.metadata import AssetMetadata, MaterialProperties, MaterialStandard, PressureRating
from typing import Dict, Any, Optional
from ...core.metadata import (
    MetadataManager, 
    MaterialProperties,
    Certification,
    MaterialStandard,
    PressureRating,
    AssetMetadata
)

class PropertyEditorWidget(QtWidgets.QWidget):
    """Widget for editing asset properties"""
    
    propertyChanged = Signal(str, str, object)  # Emits (asset_id, property_name, new_value)
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.asset_manager = AssetManager()
        self.metadata_manager = MetadataManager(self.asset_manager.assets_path)
        self.current_asset_id = None
        self.current_metadata = None
        self.current_category = ""    # Add this
        self.current_subcategory = "" # Add this
        self.status_bar = None
        self.setup_ui()
        
    def setup_ui(self):
        """Initialize the user interface"""
        # Main layout
        self.main_layout = QtWidgets.QVBoxLayout(self)
        
        # Scroll area for properties
        scroll = QtWidgets.QScrollArea()
        scroll.setWidgetResizable(True)
        scroll.setHorizontalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        
        # Container widget
        self.container = QtWidgets.QWidget()
        self.container_layout = QtWidgets.QVBoxLayout(self.container)
        
        # Create property sections
        self.create_basic_info_section()
        self.create_material_section()
        self.create_technical_section()
        self.create_certification_section()
        self.create_custom_section()
        
        # Add stretcher at the bottom
        self.container_layout.addStretch()
        
        # Set up scroll area
        scroll.setWidget(self.container)
        self.main_layout.addWidget(scroll)
        
        # Create edit button
        self.edit_button = QtWidgets.QPushButton("Edit Properties")
        self.edit_button.clicked.connect(self.toggle_edit_mode)
        self.main_layout.addWidget(self.edit_button)
        
        # Initially disable editing
        self.set_edit_mode(False)

        # Connect name edit changes
        self.name_edit.editingFinished.connect(self.on_name_changed)

        # Add status bar
        self.status_bar = QtWidgets.QStatusBar(self)
        self.layout().addWidget(self.status_bar)
        
    def create_basic_info_section(self):
        """Create basic information section"""
        group = CollapsibleGroup("Basic Information")
        layout = QtWidgets.QFormLayout()
        
        # Name
        self.name_edit = QtWidgets.QLineEdit()
        layout.addRow("Name:", self.name_edit)
        
        # Description
        self.description_edit = QtWidgets.QTextEdit()
        self.description_edit.setMaximumHeight(100)
        layout.addRow("Description:", self.description_edit)
        
        # Manufacturer
        self.manufacturer_edit = QtWidgets.QLineEdit()
        layout.addRow("Manufacturer:", self.manufacturer_edit)
        
        # Model Number
        self.model_number_edit = QtWidgets.QLineEdit()
        layout.addRow("Model Number:", self.model_number_edit)
        
        group.setLayout(layout)
        self.container_layout.addWidget(group)
        
    def create_material_section(self):
        """Create material properties section"""
        group = CollapsibleGroup("Material Properties")
        layout = QtWidgets.QFormLayout()
        
        # Material Grade
        self.material_grade_edit = QtWidgets.QLineEdit()
        layout.addRow("Material Grade:", self.material_grade_edit)
        
        # Material Standard
        self.material_standard_combo = QtWidgets.QComboBox()
        self.material_standard_combo.addItems([std.value for std in MaterialStandard])
        layout.addRow("Standard:", self.material_standard_combo)
        
        # Temperature Range
        temp_layout = QtWidgets.QHBoxLayout()
        self.temp_min_spin = QtWidgets.QSpinBox()
        self.temp_max_spin = QtWidgets.QSpinBox()
        self.temp_min_spin.setRange(-273, 1000)
        self.temp_max_spin.setRange(-273, 1000)
        self.temp_min_spin.setSuffix(" °C")
        self.temp_max_spin.setSuffix(" °C")
        temp_layout.addWidget(self.temp_min_spin)
        temp_layout.addWidget(QtWidgets.QLabel("to"))
        temp_layout.addWidget(self.temp_max_spin)
        layout.addRow("Temperature Range:", temp_layout)
        
        # Pressure Rating
        self.pressure_rating_combo = QtWidgets.QComboBox()
        self.pressure_rating_combo.addItems([rating.value for rating in PressureRating])
        layout.addRow("Pressure Rating:", self.pressure_rating_combo)
        
        # Corrosion Allowance
        self.corrosion_spin = QtWidgets.QDoubleSpinBox()
        self.corrosion_spin.setSuffix(" mm")
        self.corrosion_spin.setRange(0, 100)
        self.corrosion_spin.setDecimals(2)
        layout.addRow("Corrosion Allowance:", self.corrosion_spin)
        
        group.setLayout(layout)
        self.container_layout.addWidget(group)
        
    def create_technical_section(self):
        """Create technical specifications section"""
        group = CollapsibleGroup("Technical Specifications")
        layout = QtWidgets.QFormLayout()
        
        # Weight
        self.weight_spin = QtWidgets.QDoubleSpinBox()
        self.weight_spin.setSuffix(" kg")
        self.weight_spin.setRange(0, 1000000)
        self.weight_spin.setDecimals(2)
        layout.addRow("Weight:", self.weight_spin)
        
        # Dimensions table
        self.dimensions_table = QtWidgets.QTableWidget(0, 2)
        self.dimensions_table.setHorizontalHeaderLabels(["Dimension", "Value (mm)"])
        self.dimensions_table.horizontalHeader().setStretchLastSection(True)
        self.dimensions_table.setMaximumHeight(150)
        
        # Add/Remove dimension buttons
        dim_buttons = QtWidgets.QHBoxLayout()
        add_dim_btn = QtWidgets.QPushButton("Add Dimension")
        remove_dim_btn = QtWidgets.QPushButton("Remove Selected")
        add_dim_btn.clicked.connect(self.add_dimension_row)
        remove_dim_btn.clicked.connect(self.remove_dimension_row)
        dim_buttons.addWidget(add_dim_btn)
        dim_buttons.addWidget(remove_dim_btn)
        
        layout.addRow("Dimensions:", self.dimensions_table)
        layout.addRow("", dim_buttons)
        
        group.setLayout(layout)
        self.container_layout.addWidget(group)
        
    def create_certification_section(self):
        """Create certification section"""
        group = CollapsibleGroup("Certifications")
        layout = QtWidgets.QVBoxLayout()
        
        # Certifications table
        self.cert_table = QtWidgets.QTableWidget(0, 5)
        self.cert_table.setHorizontalHeaderLabels([
            "Certificate Number",
            "Issuing Body",
            "Issue Date",
            "Expiry Date",
            "Type"
        ])
        self.cert_table.horizontalHeader().setStretchLastSection(True)
        
        # Add/Remove certification buttons
        cert_buttons = QtWidgets.QHBoxLayout()
        add_cert_btn = QtWidgets.QPushButton("Add Certification")
        remove_cert_btn = QtWidgets.QPushButton("Remove Selected")
        add_cert_btn.clicked.connect(self.add_certification_row)
        remove_cert_btn.clicked.connect(self.remove_certification_row)
        cert_buttons.addWidget(add_cert_btn)
        cert_buttons.addWidget(remove_cert_btn)
        
        layout.addWidget(self.cert_table)
        layout.addLayout(cert_buttons)
        
        group.setLayout(layout)
        self.container_layout.addWidget(group)
        
    def create_custom_section(self):
        """Create custom properties section"""
        group = CollapsibleGroup("Custom Properties")
        layout = QtWidgets.QVBoxLayout()
        
        # Custom properties table
        self.custom_table = QtWidgets.QTableWidget(0, 3)
        self.custom_table.setHorizontalHeaderLabels(["Property", "Value", "Type"])
        self.custom_table.horizontalHeader().setStretchLastSection(True)
        
        # Add/Remove property buttons
        custom_buttons = QtWidgets.QHBoxLayout()
        add_prop_btn = QtWidgets.QPushButton("Add Property")
        remove_prop_btn = QtWidgets.QPushButton("Remove Selected")
        add_prop_btn.clicked.connect(self.add_custom_property_row)
        remove_prop_btn.clicked.connect(self.remove_custom_property_row)
        custom_buttons.addWidget(add_prop_btn)
        custom_buttons.addWidget(remove_prop_btn)
        
        layout.addWidget(self.custom_table)
        layout.addLayout(custom_buttons)
        
        group.setLayout(layout)
        self.container_layout.addWidget(group)
        
    def set_metadata_manager(self, manager: MetadataManager):
        """Set the metadata manager instance"""
        self.metadata_manager = manager
        
    def load_asset(self, asset_id: str):
        """Load asset properties"""
        self.clear_all_fields()  # Clear previous asset's data
        
        if not asset_id:
            return
            
        self.current_asset_id = asset_id
        try:
            # Get metadata from manager
            metadata = self.metadata_manager.load_metadata(asset_id)
            if metadata:
                print(f"Loading metadata for asset: {asset_id}")
                
                # Basic Information - direct attribute access
                self.name_edit.setText(metadata.name)
                self.description_edit.setText(metadata.description)
                self.manufacturer_edit.setText(metadata.manufacturer)
                self.model_number_edit.setText(metadata.model_number)
                
                # Material Properties
                if metadata.material:
                    self.material_grade_edit.setText(metadata.material.material_grade)
                    self.material_standard_combo.setCurrentText(metadata.material.standard.value)
                    self.temp_min_spin.setValue(metadata.material.temperature_min)
                    self.temp_max_spin.setValue(metadata.material.temperature_max)
                    self.pressure_rating_combo.setCurrentText(metadata.material.pressure_rating.value)
                    self.corrosion_spin.setValue(metadata.material.corrosion_allowance)
                
                # Other properties as needed
                
                self.setEnabled(True)
                print("Metadata loaded successfully")
            else:
                print(f"No metadata found for asset: {asset_id}")
                
        except Exception as e:
            print(f"Error loading metadata: {str(e)}")

    def clear_all_fields(self):
        """Clear all property fields"""
        # Basic Information
        self.name_edit.clear()
        self.description_edit.clear()
        self.manufacturer_edit.clear()
        self.model_number_edit.clear()
        
        # Material Properties
        self.material_grade_edit.clear()
        self.material_standard_combo.setCurrentIndex(0)
        self.temp_min_spin.setValue(0)
        self.temp_max_spin.setValue(0)
        self.pressure_rating_combo.setCurrentIndex(0)
        self.corrosion_spin.setValue(0)
            
    def update_ui_from_metadata(self):
        """Update UI with current metadata"""
        if not self.current_metadata:
            return
            
        # Basic information
        self.name_edit.setText(self.current_metadata.name)
        self.description_edit.setText(self.current_metadata.description)
        self.manufacturer_edit.setText(self.current_metadata.manufacturer)
        self.model_number_edit.setText(self.current_metadata.model_number)
        
        # Material properties
        material = self.current_metadata.material
        self.material_grade_edit.setText(material.material_grade)
        self.material_standard_combo.setCurrentText(material.standard.value)
        self.temp_min_spin.setValue(material.temperature_min)
        self.temp_max_spin.setValue(material.temperature_max)
        self.pressure_rating_combo.setCurrentText(material.pressure_rating.value)
        self.corrosion_spin.setValue(material.corrosion_allowance)
        
        # Weight
        self.weight_spin.setValue(self.current_metadata.weight)
        
        # Dimensions
        self.update_dimensions_table()
        
        # Certifications
        self.update_certifications_table()
        
        # Custom properties
        self.update_custom_properties_table()
        
    def update_dimensions_table(self):
        """Update dimensions table"""
        self.dimensions_table.setRowCount(0)
        for name, value in self.current_metadata.dimensions.items():
            row = self.dimensions_table.rowCount()
            self.dimensions_table.insertRow(row)
            self.dimensions_table.setItem(row, 0, QtWidgets.QTableWidgetItem(name))
            self.dimensions_table.setItem(row, 1, QtWidgets.QTableWidgetItem(str(value)))
            
    def update_certifications_table(self):
        """Update certifications table"""
        self.cert_table.setRowCount(0)
        for cert in self.current_metadata.certifications:
            row = self.cert_table.rowCount()
            self.cert_table.insertRow(row)
            self.cert_table.setItem(row, 0, QtWidgets.QTableWidgetItem(cert.cert_number))
            self.cert_table.setItem(row, 1, QtWidgets.QTableWidgetItem(cert.issuing_body))
            self.cert_table.setItem(row, 2, QtWidgets.QTableWidgetItem(cert.issue_date))
            self.cert_table.setItem(row, 3, QtWidgets.QTableWidgetItem(cert.expiry_date))
            self.cert_table.setItem(row, 4, QtWidgets.QTableWidgetItem(cert.cert_type))
            
    def update_custom_properties_table(self):
        """Update custom properties table"""
        self.custom_table.setRowCount(0)
        for name, value in self.current_metadata.custom_properties.items():
            row = self.custom_table.rowCount()
            self.custom_table.insertRow(row)
            self.custom_table.setItem(row, 0, QtWidgets.QTableWidgetItem(name))
            self.custom_table.setItem(row, 1, QtWidgets.QTableWidgetItem(str(value)))
            self.custom_table.setItem(row, 2, QtWidgets.QTableWidgetItem(type(value).__name__))
            
    def add_dimension_row(self):
        """Add new dimension row"""
        row = self.dimensions_table.rowCount()
        self.dimensions_table.insertRow(row)
        
    def remove_dimension_row(self):
        """Remove selected dimension row"""
        rows = set(item.row() for item in self.dimensions_table.selectedItems())
        for row in sorted(rows, reverse=True):
            self.dimensions_table.removeRow(row)
            
    def add_certification_row(self):
        """Add new certification row"""
        row = self.cert_table.rowCount()
        self.cert_table.insertRow(row)
        
    def remove_certification_row(self):
        """Remove selected certification row"""
        rows = set(item.row() for item in self.cert_table.selectedItems())
        for row in sorted(rows, reverse=True):
            self.cert_table.removeRow(row)
            
    def add_custom_property_row(self):
        """Add new custom property row"""
        row = self.custom_table.rowCount()
        self.custom_table.insertRow(row)
        
        # Add type combo box
        type_combo = QtWidgets.QComboBox()
        type_combo.addItems(["str", "float", "int", "bool"])
        self.custom_table.setCellWidget(row, 2, type_combo)
        
    def remove_custom_property_row(self):
        """Remove selected custom property row"""
        rows = set(item.row() for item in self.custom_table.selectedItems())
        for row in sorted(rows, reverse=True):
            self.custom_table.removeRow(row)
            
    def set_edit_mode(self, enabled: bool):
        """Enable/disable editing of properties"""
        widgets = [
            self.name_edit,
            self.description_edit,
            self.manufacturer_edit,
            self.model_number_edit,
            self.material_grade_edit,
            self.material_standard_combo,
            self.temp_min_spin,
            self.temp_max_spin,
            self.pressure_rating_combo,
            self.corrosion_spin
        ]
        
        for widget in widgets:
            if isinstance(widget, (QtWidgets.QComboBox, QtWidgets.QSpinBox, QtWidgets.QDoubleSpinBox)):
                widget.setEnabled(enabled)
            else:
                widget.setReadOnly(not enabled)
        
        # Update button text
        self.edit_button.setText("Save Changes" if enabled else "Edit Properties")
        
    def toggle_edit_mode(self):
        """Toggle between edit and view modes"""
        if self.edit_button.text() == "Edit Properties":
            self.set_edit_mode(True)
        else:
            if self.save_changes():  # Only leave edit mode if save was successful
                self.set_edit_mode(False)
            
    def save_changes(self):
        """Save property changes"""
        if not self.current_asset_id:
            return False
            
        try:
            # Create material properties
            material = MaterialProperties(
                material_grade=self.material_grade_edit.text(),
                standard=MaterialStandard(self.material_standard_combo.currentText()),
                temperature_min=float(self.temp_min_spin.value()),
                temperature_max=float(self.temp_max_spin.value()),
                pressure_rating=PressureRating(self.pressure_rating_combo.currentText()),
                corrosion_allowance=float(self.corrosion_spin.value())
            )
            
            # Create full metadata object
            metadata = AssetMetadata(
                asset_id=self.current_asset_id,
                name=self.name_edit.text(),
                description=self.description_edit.toPlainText(),
                category=self.current_category,
                subcategory=self.current_subcategory,
                tags=[],
                material=material,
                weight=0.0,
                dimensions={},
                certifications=[],
                manufacturer=self.manufacturer_edit.text(),
                model_number=self.model_number_edit.text(),
                revision="1.0",
                creation_date=datetime.now().isoformat(),
                modified_date=datetime.now().isoformat(),
                file_format="",
                file_size=0,
                custom_properties={}
            )
            
            # Save metadata
            self.metadata_manager.save_metadata(metadata)
            self.status_bar.showMessage("Changes saved successfully", 3000)
            return True
                
        except Exception as e:
            self.status_bar.showMessage(f"Error saving changes: {str(e)}", 3000)
            return False
            
    def convert_value(self, value_str: str, type_str: str) -> Any:
        """Convert string value to specified type"""
        try:
            if type_str == "str":
                return value_str
            elif type_str == "float":
                return float(value_str)
            elif type_str == "int":
                return int(value_str)
            elif type_str == "bool":
                return value_str.lower() in ("true", "1", "yes", "y")
            return None
        except ValueError:
            return None
            
    def validate_input(self) -> bool:
        """Validate all input fields"""
        errors = []
        
        # Check required fields
        if not self.name_edit.text().strip():
            errors.append("Name is required")
            
        # Validate temperature range
        if self.temp_min_spin.value() > self.temp_max_spin.value():
            errors.append("Minimum temperature cannot be greater than maximum temperature")
            
        # Validate dimensions
        for row in range(self.dimensions_table.rowCount()):
            value_item = self.dimensions_table.item(row, 1)
            if value_item and value_item.text().strip():
                try:
                    float(value_item.text())
                except ValueError:
                    errors.append(f"Invalid dimension value in row {row + 1}")
                    
        # Validate dates in certifications
        for row in range(self.cert_table.rowCount()):
            issue_date = self.cert_table.item(row, 2)
            expiry_date = self.cert_table.item(row, 3)
            if issue_date and expiry_date:
                try:
                    from datetime import datetime
                    issue = datetime.strptime(issue_date.text(), "%Y-%m-%d")
                    expiry = datetime.strptime(expiry_date.text(), "%Y-%m-%d")
                    if issue > expiry:
                        errors.append(f"Invalid date range in certification row {row + 1}")
                except ValueError:
                    errors.append(f"Invalid date format in certification row {row + 1}")
                    
        if errors:
            QtWidgets.QMessageBox.warning(
                self,
                "Validation Error",
                "\n".join(errors)
            )
            return False
            
        return True
            
    def clear(self):
        """Clear all fields"""
        self.current_asset_id = None
        self.current_metadata = None
        
        # Clear basic information
        self.name_edit.clear()
        self.description_edit.clear()
        self.manufacturer_edit.clear()
        self.model_number_edit.clear()
        
        # Clear material properties
        self.material_grade_edit.clear()
        self.material_standard_combo.setCurrentIndex(0)
        self.temp_min_spin.setValue(0)
        self.temp_max_spin.setValue(0)
        self.pressure_rating_combo.setCurrentIndex(0)
        self.corrosion_spin.setValue(0)
        
        # Clear weight
        self.weight_spin.setValue(0)
        
        # Clear tables
        self.dimensions_table.setRowCount(0)
        self.cert_table.setRowCount(0)
        self.custom_table.setRowCount(0)
    
    def on_name_changed(self):
        """Handle asset name change"""
        if self.current_asset_id:
            new_name = self.name_edit.text()
            if self.asset_manager.rename_asset(
                self.current_asset_id, 
                new_name,
                self.current_category,
                self.current_subcategory
            ):
                # Update display
                self.parent().update_asset_display(self.current_asset_id, new_name)
                self.status_bar.showMessage(f"Asset renamed to '{new_name}'", 3000)
            else:
                self.status_bar.showMessage("Failed to rename asset", 3000)
        
class CollapsibleGroup(QtWidgets.QGroupBox):
    """Custom group box that can be collapsed"""
    
    def __init__(self, title, parent=None):
        super().__init__(title, parent)
        self.setCheckable(True)
        self.setChecked(True)
        self.toggled.connect(self._on_toggled)
        self._content_height = 0
        
    def _on_toggled(self, checked):
        """Handle collapse/expand"""
        if checked:
            self.setFixedHeight(self._content_height)
        else:
            self._content_height = self.height()
            self.setFixedHeight(20)