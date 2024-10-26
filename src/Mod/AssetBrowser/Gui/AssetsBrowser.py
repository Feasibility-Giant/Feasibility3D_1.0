# AssetsBrowser.py
from PyQt5 import uic, QtWidgets
import os
import json

class AssetsBrowser(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()

        # Dynamically construct the path to the .ui file
        ui_path = os.path.join(os.path.dirname(__file__), 'AssetsBrowser.ui')
        uic.loadUi(ui_path, self)
        
        # Load assets data
        self.assets = self.load_assets()
        
        # Connect signals
        self.searchBar.textChanged.connect(self.search_assets)
        self.filterComboBox.currentTextChanged.connect(self.filter_assets)
        self.assetsListView.doubleClicked.connect(self.open_asset)

    def load_assets(self):
        """Load assets from JSON file."""
        with open('Data/assets.json', 'r') as f:
            assets = json.load(f)
        return assets

    def search_assets(self):
        """Search for assets by keyword."""
        keyword = self.searchBar.text().lower()
        filtered_assets = [asset for asset in self.assets if keyword in asset['name'].lower()]
        self.display_assets(filtered_assets)

    def filter_assets(self, category):
        """Filter assets based on category."""
        if category == "All":
            self.display_assets(self.assets)
        else:
            filtered_assets = [asset for asset in self.assets if asset['category'] == category]
            self.display_assets(filtered_assets)

    def display_assets(self, assets):
        """Display assets in the list view."""
        model = QtWidgets.QStandardItemModel()
        for asset in assets:
            item = QtWidgets.QStandardItem(asset['name'])
            model.appendRow(item)
        self.assetsListView.setModel(model)

    def open_asset(self, index):
        """Open selected asset."""
        asset_name = self.assetsListView.model().itemFromIndex(index).text()
        asset = next(asset for asset in self.assets if asset['name'] == asset_name)
        asset_path = asset['path']
        
        # Load asset in Feasibility3D (assuming there’s a ModelLoader class to handle this)
        ModelLoader.load_model(asset_path)

if __name__ == "__main__":
    app = QtWidgets.QApplication([])
    window = AssetsBrowser()
    window.show()
    app.exec_()
