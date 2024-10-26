# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Sketcher

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Sketcher/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Sketcher/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Sketcher" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/SketcherExample.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/TestSketcherApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/Profiles.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/TestSketcherGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Sketcher/ProfileLib" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/ProfileLib/Hexagon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/ProfileLib/RegularPolygon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/ProfileLib/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Sketcher/SketcherTests" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/SketcherTests/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/SketcherTests/TestSketchFillet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/SketcherTests/TestSketcherSolver.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/SketcherTests/TestSketchExpression.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Sketcher/SketcherTests/TestSketchValidateCoincidents.py"
    )
endif()

