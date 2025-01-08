from PySide2 import QtWidgets, QtCore

class ThemeAwareWidget(QtWidgets.QWidget):
    def setup_style(self):
        palette = self.palette()
        
        stylesheet = f"""
        QWidget {{
            background-color: {palette.color(palette.Window).name()};
            color: {palette.color(palette.WindowText).name()};
        }}
        QGroupBox {{
            background-color: {palette.color(palette.Window).name()};
            color: {palette.color(palette.WindowText).name()};
            border: 1px solid {palette.color(palette.Dark).name()};
            margin-top: 5px;
            padding: 5px;
        }}
        QGroupBox::title {{
            color: {palette.color(palette.WindowText).name()};
        }}
        QLineEdit, QComboBox, QSpinBox, QDoubleSpinBox {{
            background-color: {palette.color(palette.Base).name()};
            color: {palette.color(palette.Text).name()};
            border: 1px solid {palette.color(palette.Dark).name()};
            padding: 3px;
        }}
        QPushButton {{
            background-color: {palette.color(palette.Button).name()};
            color: {palette.color(palette.ButtonText).name()};
            border: 1px solid {palette.color(palette.Dark).name()};
            padding: 5px;
        }}
        QTableWidget {{
            background-color: {palette.color(palette.Base).name()};
            color: {palette.color(palette.Text).name()};
            gridline-color: {palette.color(palette.Dark).name()};
        }}
        QHeaderView::section {{
            background-color: {palette.color(palette.Button).name()};
            color: {palette.color(palette.ButtonText).name()};
            padding: 3px;
        }}
        QScrollBar {{
            background-color: {palette.color(palette.Base).name()};
            border: 1px solid {palette.color(palette.Dark).name()};
        }}
        QLabel {{
            color: {palette.color(palette.WindowText).name()};
        }}
        QProgressBar {{
            border: 1px solid {palette.color(palette.Dark).name()};
            background-color: {palette.color(palette.Base).name()};
            color: {palette.color(palette.Text).name()};
            text-align: center;
        }}
        QCheckBox {{
            color: {palette.color(palette.WindowText).name()};
        }}
        """
        self.setStyleSheet(stylesheet)

    def changeEvent(self, event):
        if event.type() == QtCore.QEvent.PaletteChange:
            self.setup_style()
        super().changeEvent(event)