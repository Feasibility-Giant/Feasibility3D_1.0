# FeasibleAssets.py
"""
Main module entry point for FeasibleAssets
"""
import FreeCAD
import os

FREECAD_USER_DIR = FreeCAD.getUserAppDataDir()
ASSETS_ROOT = os.path.join(FREECAD_USER_DIR, "FeasibleAssets")