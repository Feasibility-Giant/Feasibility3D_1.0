"""
Drag and drop functionality
"""
from PySide2 import QtCore, QtWidgets, QtGui

class DragDropListWidget(QtWidgets.QListWidget):
    def __init__(self):
        super().__init__()
        self.setAcceptDrops(True)
        self.setViewMode(QtWidgets.QListWidget.IconMode)
        self.setIconSize(QtCore.QSize(100, 100))
        self.setSpacing(10)
        self.setDragEnabled(True)
        self.setDragDropMode(QtWidgets.QAbstractItemView.DragDrop)