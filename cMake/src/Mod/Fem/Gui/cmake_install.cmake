# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/Fem/Resources/icons" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/icons/FemWorkbench.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/Fem/Resources/symbols" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintContact.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintDisplacement.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintFixed.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintForce.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintHeatFlux.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintPlaneRotation.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintPressure.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintRigidBody.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintSectionPrint.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintSpring.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintTemperature.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintTransform.iv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/symbols/ConstraintTie.iv"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Fem/Resources/ui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/BodyHeatSource.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ConstraintCentrif.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ConstraintTie.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ConstraintSectionPrint.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/CurrentDensity.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ElectrostaticPotential.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ElementFluid1D.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ElementGeometry1D.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ElementGeometry2D.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ElementRotation1D.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/FlowVelocity.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/InitialFlowVelocity.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/InitialPressure.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/Magnetization.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/Material.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/MaterialReinforcement.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/MeshBoundaryLayer.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/MeshGmsh.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/MeshGroup.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/MeshGroupXDMFExport.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/MeshRegion.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ResultHints.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/ResultShow.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/Fem/Gui/Resources/ui/SolverCalculix.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so"
         RPATH "/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jarvis/Documents/freecad-source/cMake/Mod/Fem/FemGui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/usr/lib/x86_64-linux-gnu/openmpi/lib:/home/jarvis/Documents/freecad-source/cMake/Mod/Fem:/home/jarvis/Documents/freecad-source/cMake/Mod/Part:/home/jarvis/Documents/freecad-source/cMake/lib:/home/jarvis/Documents/freecad-source/cMake/Mod/Material:"
         NEW_RPATH "/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/FemGui.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Fem/Gui/CMakeFiles/FemGui.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

