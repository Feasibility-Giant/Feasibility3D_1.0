# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCAD2Dgeom.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADFeatures.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADCommands.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/exportCSG.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/importCSG.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/tokrules.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/colorcodeshapes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/expandplacements.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/replaceobj.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/TestOpenSCADApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/TestOpenSCADGui.py"
    "/home/jarvis/Documents/freecad-source/cMake/src/Mod/OpenSCAD/OpenSCAD_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/OpenSCAD/Resources/icons" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/Resources/icons/OpenSCADWorkbench.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/test_information.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/app" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/app/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/app/test_importCSG.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/gui/test_dummy.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/data" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/CSG.scad"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/CSG.csg"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/Cube.stl"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/Square.dxf"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/Surface.dat"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/Surface2.dat"
    "/home/jarvis/Documents/freecad-source/src/Mod/OpenSCAD/OpenSCADTest/data/Surface.png"
    )
endif()

