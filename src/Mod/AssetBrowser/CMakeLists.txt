# CMakeLists.txt for Asset Browser Workbench

# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(AssetBrowserWorkbench)

# Feasibility3D/FreeCAD includes and libraries (adjust according to your project setup)
set(FREECAD_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/src)
set(FREECAD_LIB_DIR ${CMAKE_BINARY_DIR}/lib)

# Add include directories for FreeCAD
include_directories(${FREECAD_INCLUDE_DIR})

# Qt5 for UI files
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# List of Python source files
set(PYTHON_FILES
    Init.py
    InitGui.py
    AssetManager.py
    AssetBrowserWorkbench.py
    Gui/AssetsBrowser.py
    Gui/ModelLoader.py
)

# UI files
set(UI_FILES
    Gui/AssetsBrowser.ui
)

# Install Python scripts into the Mod folder in the build directory
install(FILES ${PYTHON_FILES} DESTINATION ${CMAKE_BINARY_DIR}/Mod/AssetBrowser)

# Install the UI file into the Mod/AssetBrowser/Gui folder in the build directory
install(FILES ${UI_FILES} DESTINATION ${CMAKE_BINARY_DIR}/Mod/AssetBrowser/Gui)
