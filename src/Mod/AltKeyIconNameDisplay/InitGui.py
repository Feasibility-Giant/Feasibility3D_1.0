import FreeCADGui as Gui
from PySide2 import QtWidgets, QtGui, QtCore

class AltKeyIconNameDisplay(QtCore.QObject):
    def __init__(self):
        super(AltKeyIconNameDisplay, self).__init__()
        
        # List to store labels that show icon names
        self.labels = []
        
        # Detect when the "Alt" key is pressed
        self.shortcut = QtWidgets.QShortcut(QtGui.QKeySequence("Alt"), Gui.getMainWindow())
        self.shortcut.activated.connect(self.show_icon_names)
        
        # Install global event filter to catch Alt key release
        Gui.getMainWindow().installEventFilter(self)

    def show_icon_names(self):
        """Display icon names for all toolbars when Alt is pressed."""
        main_window = Gui.getMainWindow()
        
        # Clear any previous labels
        for label in self.labels:
            label.setParent(None)
        self.labels.clear()

        # Iterate over all toolbars in the main window
        for toolbar in main_window.findChildren(QtWidgets.QToolBar):
            for action in toolbar.actions():
                if action.icon().isNull():
                    continue  # Skip actions without an icon
                
                # Create a label to display the icon's name
                label = QtWidgets.QLabel(action.text(), main_window)
                label.setStyleSheet("background-color: yellow; border: 1px solid black;")
                label.setVisible(True)
                self.labels.append(label)
                
                # Get the position of the icon and move the label accordingly
                widget_for_action = toolbar.widgetForAction(action)
                if widget_for_action:
                    icon_pos = widget_for_action.geometry().topRight()
                    label.move(toolbar.mapToGlobal(icon_pos).x() + 10, toolbar.mapToGlobal(icon_pos).y())
                    
        main_window.update()

    def hide_icon_names(self):
        """Hide the icon names when the Alt key is released."""
        for label in self.labels:
            label.setVisible(False)

    def eventFilter(self, obj, event):
        """Detect key release events to hide icon names when Alt is released."""
        if event.type() == QtCore.QEvent.KeyRelease and event.key() == QtCore.Qt.Key_Alt:
            self.hide_icon_names()
        return super(AltKeyIconNameDisplay, self).eventFilter(obj, event)


def initialize():
    """Initialize the feature when the module is loaded."""
    alt_key_display = AltKeyIconNameDisplay()
