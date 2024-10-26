import FreeCADGui
from PySide import QtCore, QtGui

class BoxSelector(QtGui.QWidget):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.start_point = None
        self.end_point = None
        self.is_dragging = False
        self.setMouseTracking(True)
        self.setAttribute(QtCore.Qt.WA_TransparentForMouseEvents, True)  # Ensure interaction with the 3D view is maintained

    def mousePressEvent(self, event):
        if event.button() == QtCore.Qt.LeftButton:  # Left-click instead of right-click for selection
            self.start_point = event.pos()
            self.is_dragging = True

    def mouseMoveEvent(self, event):
        if self.is_dragging:
            self.end_point = event.pos()
            self.update()

    def mouseReleaseEvent(self, event):
        if self.is_dragging and event.button() == QtCore.Qt.LeftButton:
            self.end_point = event.pos()
            self.is_dragging = False
            self.select_objects_within_box()
            self.update()

    def paintEvent(self, event):
        if self.is_dragging and self.start_point and self.end_point:
            painter = QtGui.QPainter(self)
            pen = QtGui.QPen(QtCore.Qt.DashLine)
            pen.setColor(QtCore.Qt.green)  # Color for the selection box
            painter.setPen(pen)
            rect = QtCore.QRect(self.start_point, self.end_point)
            painter.drawRect(rect)

    def select_objects_within_box(self):
        view = FreeCADGui.ActiveDocument.ActiveView
        start_3d = view.getPoint(self.start_point.x(), self.start_point.y())
        end_3d = view.getPoint(self.end_point.x(), self.end_point.y())
        
        bbox = FreeCAD.BoundBox(start_3d, end_3d)
        for obj in FreeCAD.ActiveDocument.Objects:
            if hasattr(obj, "Shape") and obj.Shape.BoundBox.isValid():
                if bbox.isInside(obj.Shape.BoundBox):
                    FreeCADGui.Selection.addSelection(obj)

def start_box_selector():
    mw = FreeCADGui.getMainWindow()  # Get FreeCAD's main window
    view_widget = mw.findChild(QtGui.QWidget, "Qt5_ViewProviderGeometry")  # Get the FreeCAD 3D viewport
    box_selector = BoxSelector(view_widget)  # Attach the box selector to the viewport
    box_selector.setGeometry(view_widget.rect())  # Set the selector over the entire viewport
    box_selector.show()

# Call the box selector automatically at startup
start_box_selector()
