# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/PartDesign

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
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/PartDesign/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/PartDesign/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/TestPartDesignApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/TestPartDesignGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/InvoluteGearFeature.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/InvoluteGearFeature.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/SprocketFeature.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/SprocketFeature.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/Scripts" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/DistanceBolt.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/Epitrochoid.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/FilletArc.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/Gear.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/Parallelepiped.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/RadialCopy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Scripts/Spring.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestDatum.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestShapeBinder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestPad.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestPocket.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestHelix.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestHole.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestRevolve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestLoft.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestPipe.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestPrimitive.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestMirrored.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestLinearPattern.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestPolarPattern.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestMultiTransform.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestBoolean.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestFillet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestChamfer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestDraft.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestThickness.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestTopologicalNamingProblem.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestInvoluteGear.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/TestMaterial.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests/Fixtures" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/Fixtures/InvoluteGear_v0-20.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/PartDesignTests/Fixtures/InternalInvoluteGear_v0-20.FCStd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcgear" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcgear/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcgear/fcgear.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcgear/involute.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcgear/svggear.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcsprocket" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcsprocket/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcsprocket/fcsprocket.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcsprocket/fcsprocketdialog.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/fcsprocket/sprocket.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/PartDesign/Resources/Hole" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/din7984.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso10642.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso10642-fine.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso12474-fine.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso14583.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso14583part.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso2009.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso4762_7089.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso4762.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso4762-fine.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/Resources/Hole/iso7046.json"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/WizardShaft" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/WizardShaft.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/WizardShaft.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/WizardShaftTable.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/Shaft.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/ShaftFeature.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/ShaftDiagram.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/PartDesign/WizardShaft/SegmentFunction.py"
    )
endif()

