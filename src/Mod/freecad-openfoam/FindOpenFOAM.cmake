# FindOpenFOAM.cmake
# Finds the OpenFOAM package and defines the following variables:
#  OpenFOAM_FOUND        - True if OpenFOAM was found
#  OpenFOAM_INCLUDE_DIRS - OpenFOAM include directories
#  OpenFOAM_LIBRARIES    - OpenFOAM libraries
#  OpenFOAM_VERSION      - OpenFOAM version string

# Find OpenFOAM installation
find_path(OpenFOAM_DIR
    NAMES etc/bashrc
    PATHS $ENV{WM_PROJECT_DIR}
          /opt/openfoam*
          /usr/lib/openfoam*
          /usr/local/lib/openfoam*
    DOC "OpenFOAM installation directory"
)

# Source the OpenFOAM environment if available
if(OpenFOAM_DIR)
    if(EXISTS ${OpenFOAM_DIR}/etc/bashrc)
        execute_process(
            COMMAND bash -c "source ${OpenFOAM_DIR}/etc/bashrc && echo $FOAM_LIBBIN"
            OUTPUT_VARIABLE OpenFOAM_LIB_DIR
            OUTPUT_STRIP_TRAILING_WHITESPACE
        )
        
        execute_process(
            COMMAND bash -c "source ${OpenFOAM_DIR}/etc/bashrc && echo $FOAM_VERSION"
            OUTPUT_VARIABLE OpenFOAM_VERSION
            OUTPUT_STRIP_TRAILING_WHITESPACE
        )
    endif()
endif()

# Find include directories
find_path(OpenFOAM_INCLUDE_DIR
    NAMES fvCFD.H
    PATHS ${OpenFOAM_DIR}/src/finiteVolume/lnInclude
          ${OpenFOAM_DIR}/src/*/lnInclude
    DOC "OpenFOAM include directory"
)

# Find libraries
find_library(OpenFOAM_finiteVolume_LIBRARY
    NAMES finiteVolume
    PATHS ${OpenFOAM_LIB_DIR}
    DOC "OpenFOAM finiteVolume library"
)

# Set libraries variable
set(OpenFOAM_LIBRARIES ${OpenFOAM_finiteVolume_LIBRARY})

# Set include directories variable
set(OpenFOAM_INCLUDE_DIRS ${OpenFOAM_INCLUDE_DIR})

# Handle REQUIRED and QUIET arguments
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(OpenFOAM
    REQUIRED_VARS 
        OpenFOAM_DIR
        OpenFOAM_INCLUDE_DIRS
        OpenFOAM_LIBRARIES
    VERSION_VAR OpenFOAM_VERSION
)

mark_as_advanced(
    OpenFOAM_DIR
    OpenFOAM_INCLUDE_DIR
    OpenFOAM_finiteVolume_LIBRARY
)