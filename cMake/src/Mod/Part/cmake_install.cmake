# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Part

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
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Part/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Part/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/JoinFeatures.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/MakeBottle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/PartEnums.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/TestPartApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/TestPartGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/AttachmentEditor" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/AttachmentEditor/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/AttachmentEditor/Commands.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/AttachmentEditor/FrozenClass.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/AttachmentEditor/TaskAttachmentEditor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/AttachmentEditor/TaskAttachmentEditor.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/BasicShapes" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/Shapes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/Utils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/ShapeContent.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/CommandShapes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/ViewProviderShapes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BasicShapes/TaskTube.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/BOPTools" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/BOPFeatures.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/GeneralFuseResult.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/JoinAPI.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/JoinFeatures.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/ShapeMerge.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/SplitAPI.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/SplitFeatures.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/BOPTools/Utils.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/CompoundTools" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/CompoundTools/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/CompoundTools/_CommandCompoundFilter.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/CompoundTools/_CommandExplodeCompound.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/CompoundTools/CompoundFilter.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/CompoundTools/Explode.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/parttests" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/BRep_tests.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/Geom2d_tests.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/part_test_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/regression_tests.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/TopoShapeListTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/ColorPerFaceTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/ColorTransparencyTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Part/parttests/TopoShapeTest.py"
    )
endif()

