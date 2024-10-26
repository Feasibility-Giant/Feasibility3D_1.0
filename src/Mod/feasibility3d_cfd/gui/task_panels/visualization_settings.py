# feasibility3d_cfd/gui/task_panels/visualization_settings.py
from PySide import QtGui, QtCore

class VisualizationSettingsWidget(QtGui.QWidget):
    """Widget for controlling visualization settings"""
    
    settingsChanged = QtCore.Signal(dict)
    
    def __init__(self):
        super().__init__()
        self.settings = {
            'vectors': {
                'visible': False,
                'scale': 0.01,
                'mask_ratio': 20,
                'color': (1.0, 0.0, 0.0),
                'width': 1.0
            },
            'streamlines': {
                'visible': False,
                'seed_type': 'line',
                'number_seeds': 20,
                'step_size': 0.01,
                'max_length': 1.0,
                'tube_radius': 0.01
            },
            'scalar_field': {
                'visible': False,
                'field_name': 'Velocity',
                'colormap': 'rainbow',
                'range_min': 0.0,
                'range_max': 100.0,
                'opacity': 1.0
            },
            'isosurfaces': {
                'visible': False,
                'field_name': 'Pressure',
                'values': [0.0],
                'opacity': 0.5
            }
        }
        self.setup_ui()
        
    def setup_ui(self):
        layout = QtGui.QVBoxLayout(self)
        
        # Vector settings
        vector_group = QtGui.QGroupBox("Vector Visualization")
        vector_layout = QtGui.QGridLayout()
        
        # Vector visibility
        self.vector_checkbox = QtGui.QCheckBox("Show Vectors")
        self.vector_checkbox.setChecked(self.settings['vectors']['visible'])
        self.vector_checkbox.stateChanged.connect(self.update_settings)
        
        # Vector scale
        vector_scale_label = QtGui.QLabel("Scale:")
        self.vector_scale = QtGui.QDoubleSpinBox()
        self.vector_scale.setRange(0.001, 1.0)
        self.vector_scale.setSingleStep(0.001)
        self.vector_scale.setValue(self.settings['vectors']['scale'])
        self.vector_scale.valueChanged.connect(self.update_settings)
        
        # Vector masking
        mask_label = QtGui.QLabel("Mask Ratio:")
        self.mask_ratio = QtGui.QSpinBox()
        self.mask_ratio.setRange(1, 100)
        self.mask_ratio.setValue(self.settings['vectors']['mask_ratio'])
        self.mask_ratio.valueChanged.connect(self.update_settings)
        
        # Vector color
        color_label = QtGui.QLabel("Color:")
        self.color_button = QtGui.QPushButton()
        self.color_button.setFixedSize(24, 24)
        color = self.settings['vectors']['color']
        self.color_button.setStyleSheet(
            f"background-color: rgb({int(color[0]*255)},{int(color[1]*255)},{int(color[2]*255)})")
        self.color_button.clicked.connect(self.choose_vector_color)
        
        # Vector width
        width_label = QtGui.QLabel("Line Width:")
        self.vector_width = QtGui.QDoubleSpinBox()
        self.vector_width.setRange(0.1, 10.0)
        self.vector_width.setSingleStep(0.1)
        self.vector_width.setValue(self.settings['vectors']['width'])
        self.vector_width.valueChanged.connect(self.update_settings)
        
        # Advanced vector settings
        advanced_button = QtGui.QPushButton("Advanced Settings...")
        advanced_button.clicked.connect(self.show_advanced_vector_settings)
        
        # Layout vector controls
        vector_layout.addWidget(self.vector_checkbox, 0, 0, 1, 2)
        vector_layout.addWidget(vector_scale_label, 1, 0)
        vector_layout.addWidget(self.vector_scale, 1, 1)
        vector_layout.addWidget(mask_label, 2, 0)
        vector_layout.addWidget(self.mask_ratio, 2, 1)
        vector_layout.addWidget(color_label, 3, 0)
        vector_layout.addWidget(self.color_button, 3, 1)
        vector_layout.addWidget(width_label, 4, 0)
        vector_layout.addWidget(self.vector_width, 4, 1)
        vector_layout.addWidget(advanced_button, 5, 0, 1, 2)
        
        vector_group.setLayout(vector_layout)
        layout.addWidget(vector_group)
        
        # Add presets dropdown
        preset_layout = QtGui.QHBoxLayout()
        preset_label = QtGui.QLabel("Presets:")
        self.preset_combo = QtGui.QComboBox()
        self.preset_combo.addItems([
            "Default",
            "Dense Vectors",
            "Sparse Vectors",
            "Thin Vectors",
            "Bold Vectors"
        ])
        self.preset_combo.currentIndexChanged.connect(self.apply_preset)
        preset_layout.addWidget(preset_label)
        preset_layout.addWidget(self.preset_combo)
        layout.addLayout(preset_layout)
        
    def update_settings(self):
        """Update settings dictionary based on UI values"""
        self.settings['vectors'].update({
            'visible': self.vector_checkbox.isChecked(),
            'scale': self.vector_scale.value(),
            'mask_ratio': self.mask_ratio.value(),
            'width': self.vector_width.value()
        })
        self.settingsChanged.emit(self.settings)
        
    def choose_vector_color(self):
        """Open color picker dialog"""
        current_color = self.settings['vectors']['color']
        color = QtGui.QColorDialog.getColor(
            QtGui.QColor(
                int(current_color[0]*255),
                int(current_color[1]*255),
                int(current_color[2]*255)
            )
        )
        if color.isValid():
            self.settings['vectors']['color'] = (
                color.red()/255.0,
                color.green()/255.0,
                color.blue()/255.0
            )
            self.color_button.setStyleSheet(
                f"background-color: rgb({color.red()},{color.green()},{color.blue()})")
            self.settingsChanged.emit(self.settings)
            
    def show_advanced_vector_settings(self):
        """Show dialog for advanced vector settings"""
        dialog = AdvancedVectorSettingsDialog(self.settings['vectors'], self)
        if dialog.exec_() == QtGui.QDialog.Accepted:
            self.settings['vectors'].update(dialog.get_settings())
            self.settingsChanged.emit(self.settings)
            
    def apply_preset(self, index):
        """Apply predefined vector visualization presets"""
        presets = {
            0: {  # Default
                'scale': 0.01,
                'mask_ratio': 20,
                'width': 1.0
            },
            1: {  # Dense Vectors
                'scale': 0.008,
                'mask_ratio': 10,
                'width': 0.8
            },
            2: {  # Sparse Vectors
                'scale': 0.015,
                'mask_ratio': 40,
                'width': 1.2
            },
            3: {  # Thin Vectors
                'scale': 0.01,
                'mask_ratio': 20,
                'width': 0.5
            },
            4: {  # Bold Vectors
                'scale': 0.012,
                'mask_ratio': 25,
                'width': 2.0
            }
        }
        
        if index in presets:
            preset = presets[index]
            self.vector_scale.setValue(preset['scale'])
            self.mask_ratio.setValue(preset['mask_ratio'])
            self.vector_width.setValue(preset['width'])
            self.update_settings()

class AdvancedVectorSettingsDialog(QtGui.QDialog):
    """Dialog for advanced vector visualization settings"""
    
    def __init__(self, settings, parent=None):
        super().__init__(parent)
        self.settings = settings.copy()
        self.setup_ui()
        
    def setup_ui(self):
        self.setWindowTitle("Advanced Vector Settings")
        layout = QtGui.QVBoxLayout(self)
        
        # Vector head size
        head_size_layout = QtGui.QHBoxLayout()
        head_size_label = QtGui.QLabel("Arrow Head Size:")
        self.head_size = QtGui.QDoubleSpinBox()
        self.head_size.setRange(0.1, 5.0)
        self.head_size.setSingleStep(0.1)
        self.head_size.setValue(self.settings.get('head_size', 0.3))
        head_size_layout.addWidget(head_size_label)
        head_size_layout.addWidget(self.head_size)
        
        # Vector shaft resolution
        shaft_res_layout = QtGui.QHBoxLayout()
        shaft_res_label = QtGui.QLabel("Shaft Resolution:")
        self.shaft_resolution = QtGui.QSpinBox()
        self.shaft_resolution.setRange(3, 32)
        self.shaft_resolution.setValue(self.settings.get('shaft_resolution', 16))
        shaft_res_layout.addWidget(shaft_res_label)
        shaft_res_layout.addWidget(self.shaft_resolution)
        
        # Vector filtering
        filter_group = QtGui.QGroupBox("Vector Filtering")
        filter_layout = QtGui.QVBoxLayout()
        
        self.magnitude_filter = QtGui.QCheckBox("Filter by Magnitude")
        self.magnitude_filter.setChecked(self.settings.get('magnitude_filter', False))
        
        magnitude_range_layout = QtGui.QHBoxLayout()
        self.magnitude_min = QtGui.QDoubleSpinBox()
        self.magnitude_max = QtGui.QDoubleSpinBox()
        self.magnitude_min.setRange(0, 1000)
        self.magnitude_max.setRange(0, 1000)
        self.magnitude_min.setValue(self.settings.get('magnitude_min', 0))
        self.magnitude_max.setValue(self.settings.get('magnitude_max', 100))
        magnitude_range_layout.addWidget(QtGui.QLabel("Range:"))
        magnitude_range_layout.addWidget(self.magnitude_min)
        magnitude_range_layout.addWidget(QtGui.QLabel("to"))
        magnitude_range_layout.addWidget(self.magnitude_max)
        
        filter_layout.addWidget(self.magnitude_filter)
        filter_layout.addLayout(magnitude_range_layout)
        filter_group.setLayout(filter_layout)
        
        # Buttons
        buttons = QtGui.QDialogButtonBox(
            QtGui.QDialogButtonBox.Ok | QtGui.QDialogButtonBox.Cancel)
        buttons.accepted.connect(self.accept)
        buttons.rejected.connect(self.reject)
        
        # Add all to main layout
        layout.addLayout(head_size_layout)
        layout.addLayout(shaft_res_layout)
        layout.addWidget(filter_group)
        layout.addWidget(buttons)
        
    def get_settings(self):
        """Return the current settings"""
        return {
            'head_size': self.head_size.value(),
            'shaft_resolution': self.shaft_resolution.value(),
            'magnitude_filter': self.magnitude_filter.isChecked(),
            'magnitude_min': self.magnitude_min.value(),
            'magnitude_max': self.magnitude_max.value()
        }