# AssetManager.py
import os
import json

class AssetManager:
    def __init__(self, asset_dir):
        self.asset_dir = asset_dir
        self.asset_file = os.path.join(self.asset_dir, 'assets.json')

    def add_asset(self, name, category, tags, path):
        """Add new asset to the library."""
        new_asset = {
            "name": name,
            "category": category,
            "tags": tags,
            "path": path
        }
        with open(self.asset_file, 'r+') as f:
            assets = json.load(f)
            assets.append(new_asset)
            f.seek(0)
            json.dump(assets, f, indent=4)

    def remove_asset(self, name):
        """Remove asset by name."""
        with open(self.asset_file, 'r+') as f:
            assets = json.load(f)
            assets = [asset for asset in assets if asset['name'] != name]
            f.seek(0)
            json.dump(assets, f, indent=4)

    def get_assets(self):
        """Retrieve all assets."""
        with open(self.asset_file, 'r') as f:
            return json.load(f)

    def get_asset_by_name(self, name):
        """Find asset by name."""
        with open(self.asset_file, 'r') as f:
            assets = json.load(f)
            return next((asset for asset in assets if asset['name'] == name), None)
