cmake_minimum_required(VERSION 3.13)
project(Feasibility3D_OpenFOAM_Addon)

# Add cmake directory to module path
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set OpenFOAM specific variables
set(OpenFOAM_ROOT "/usr/lib/openfoam/openfoam2312")
set(OpenFOAM_DIR ${OpenFOAM_ROOT})

# Source OpenFOAM configuration
execute_process(
    COMMAND bash -c "source ${OpenFOAM_ROOT}/etc/config.sh && echo $FOAM_LIBBIN"
    OUTPUT_VARIABLE FOAM_LIBBIN
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Set OpenFOAM include and library paths
set(OpenFOAM_INCLUDE_DIRS 
    ${OpenFOAM_ROOT}/src/finiteVolume/lnInclude
    ${OpenFOAM_ROOT}/src/meshTools/lnInclude
    ${OpenFOAM_ROOT}/src/OpenFOAM/lnInclude
)
set(OpenFOAM_LIBRARY_DIR ${FOAM_LIBBIN})

# Add OpenFOAM compile definitions
add_definitions(
    -DWM_LABEL_SIZE=32
    -DWM_DP
    -DNoRepository
    -DOPENFOAM=2312
)

# Set path to Feasibility3D source
set(FEASIBILITY3D_SOURCE_DIR "${CMAKE_SOURCE_DIR}/../..")
set(FEASIBILITY3D_INCLUDE_DIR "${FEASIBILITY3D_SOURCE_DIR}/src")

# Required packages
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
find_package(PySide2 REQUIRED)

# Define Feasibility3D module installation directory
if(NOT DEFINED FEASIBILITY3D_INSTALL_PREFIX)
    if(WIN32)
        set(FEASIBILITY3D_INSTALL_PREFIX "C:/Program Files/Feasibility3D/Mod")
    else()
        set(FEASIBILITY3D_INSTALL_PREFIX "$ENV{HOME}/.Feasibility3D/Mod")
    endif()
endif()

set(FEASIBILITY3D_MOD_DIR "${FEASIBILITY3D_INSTALL_PREFIX}/OpenFOAM")

# Set source and binary directories
set(FEASIBILITY3D_OPENFOAM_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(FEASIBILITY3D_OPENFOAM_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})

# Include Feasibility3D headers
include_directories(
    ${FEASIBILITY3D_INCLUDE_DIR}
    ${FEASIBILITY3D_INCLUDE_DIR}/Base
    ${FEASIBILITY3D_INCLUDE_DIR}/App
    ${FEASIBILITY3D_INCLUDE_DIR}/Gui
)

# Install Python modules
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/feasibility3d_openfoam
        DESTINATION ${FEASIBILITY3D_MOD_DIR}
        FILES_MATCHING 
        PATTERN "*.py"
        PATTERN "__pycache__" EXCLUDE
        PATTERN ".git" EXCLUDE)

# Create Feasibility3D module structure
set(MODULE_FILES
    Init.py
    InitGui.py
)

install(FILES ${MODULE_FILES}
        DESTINATION ${FEASIBILITY3D_MOD_DIR})

# Set compiler flags
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Output configuration summary
message(STATUS "")
message(STATUS "Configuration Summary")
message(STATUS "--------------------")
message(STATUS "OpenFOAM root: ${OpenFOAM_ROOT}")
message(STATUS "OpenFOAM library dir: ${FOAM_LIBBIN}")
message(STATUS "Feasibility3D source dir: ${FEASIBILITY3D_SOURCE_DIR}")
message(STATUS "Python version: ${Python3_VERSION}")
message(STATUS "Installation prefix: ${FEASIBILITY3D_MOD_DIR}")
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "")