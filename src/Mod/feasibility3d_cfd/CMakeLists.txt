cmake_minimum_required(VERSION 3.12)

# Project name and version
project(Feasibility3DCfdWorkbench)

# Set FreeCAD-specific paths and settings
if (NOT CMAKE_INSTALL_PREFIX)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "Installation directory")
endif()

# Find Python (Ensure this matches your Python version)
find_package(Python3 REQUIRED COMPONENTS Interpreter)

# Define module directories
set(FEASIBILITY3D_CFD_DIR "${CMAKE_SOURCE_DIR}/feasibility3d_cfd")

# Install Python files into the FreeCAD Mod directory
install(DIRECTORY ${FEASIBILITY3D_CFD_DIR}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/Mod/Feasibility3DCfd
        FILES_MATCHING PATTERN "*.py"
        PATTERN "__pycache__" EXCLUDE)

# Install individual Python files
install(FILES
        ${FEASIBILITY3D_CFD_DIR}/__init__.py
        ${FEASIBILITY3D_CFD_DIR}/gui/__init__.py
        ${FEASIBILITY3D_CFD_DIR}/gui/workbench.py
        ${FEASIBILITY3D_CFD_DIR}/gui/task_panels/__init__.py
        ${FEASIBILITY3D_CFD_DIR}/gui/task_panels/post_processor_panel.py
        ${FEASIBILITY3D_CFD_DIR}/gui/task_panels/visualization_settings.py
        ${FEASIBILITY3D_CFD_DIR}/core/__init__.py
        ${FEASIBILITY3D_CFD_DIR}/core/vtk_handler.py
        ${FEASIBILITY3D_CFD_DIR}/core/visualization.py
        ${FEASIBILITY3D_CFD_DIR}/core/animation.py
        ${FEASIBILITY3D_CFD_DIR}/core/streamlines.py
        ${FEASIBILITY3D_CFD_DIR}/core/isosurface.py
        ${FEASIBILITY3D_CFD_DIR}/utils/__init__.py
        ${FEASIBILITY3D_CFD_DIR}/utils/file_utils.py
        ${FEASIBILITY3D_CFD_DIR}/utils/colormap_utils.py
        DESTINATION ${CMAKE_INSTALL_PREFIX}/Mod/Feasibility3DCfd)

# Optional: Add specific installation instructions or dependencies here
# for example, handling icons or additional resources.
