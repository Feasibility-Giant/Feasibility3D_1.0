# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/CAM

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
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/CAM/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/CAM/libarea/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/CAM/PathSimulator/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/CAM/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathCommands.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/TestCAMApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/PathScripts" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathScripts/PathUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathScripts/PathUtilsGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathScripts/PathPropertyBag.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathScripts/PathPropertyBagGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathScripts/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Log.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Geom.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/GuiInit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Preferences.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Base" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Drillable.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/FeedRate.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Language.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/MachineState.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Property.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/PropertyBag.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/SetupSheet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/SetupSheetOpPrototype.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Util.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Base/Generator" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Generator/dogboneII.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Generator/drill.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Generator/helix.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Generator/rotation.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Generator/threadmilling.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Generator/toolchange.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Base/Gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/GetPoint.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/IconViewProvider.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/PreferencesAdvanced.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/PropertyBag.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/PropertyEditor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/SetupSheet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/SetupSheetOpPrototype.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Base/Gui/Util.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Dressup" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Utils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Boundary.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/DogboneII.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Tags.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Dressup/Gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/AxisMap.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/Dogbone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/DogboneII.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/Dragknife.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/LeadInOut.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/Boundary.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/Preferences.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/RampEntry.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/Tags.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/TagPreferences.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Dressup/Gui/ZCorrect.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Main" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Job.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Stock.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Main/Gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/Camotics.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/Fixture.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/Inspect.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/Job.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/JobCmd.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/JobDlg.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/PreferencesJob.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/SanityCmd.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/Simulator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Gui/SimulatorGL.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Main/Sanity" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/Sanity.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/ImageBuilder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/ReportGenerator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/HTMLTemplate.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/Sanity_Bulb.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/Sanity_Caution.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/Sanity_Note.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Main/Sanity/Sanity_Warning.svg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Op" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Adaptive.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Area.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Base.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/CircularHoleBase.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Custom.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Deburr.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Engrave.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/EngraveBase.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/FeatureExtension.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Drilling.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Helix.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/MillFace.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Pocket.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/PocketBase.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/PocketShape.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Probe.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Profile.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Slot.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Surface.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/SurfaceSupport.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/ThreadMilling.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Util.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Vcarve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Waterline.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Op/Gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Adaptive.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Array.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Base.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/CircularHoleBase.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Comment.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Copy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Custom.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Deburr.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Drilling.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Engrave.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/FeatureExtension.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Helix.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/MillFace.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Pocket.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/PocketBase.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/PocketShape.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Probe.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Profile.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Selection.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/SimpleCopy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Slot.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Stop.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Surface.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/ThreadMilling.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Vcarve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Op/Gui/Waterline.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Post" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/Command.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/Processor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/Utils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/UtilsArguments.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/UtilsExport.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/UtilsParse.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Post/scripts" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/centroid_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/comparams_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/dxf_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/dynapath_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/estlcam_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/example_pre.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/fablin_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/fanuc_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/fangling_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/gcode_pre.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/generic_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/grbl_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/heidenhain_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/jtech_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/KineticNCBeamicon2_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/linuxcnc_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/mach3_mach4_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/marlin_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/nccad_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/opensbp_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/opensbp_pre.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/philips_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/refactored_centroid_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/refactored_grbl_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/refactored_linuxcnc_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/refactored_mach3_mach4_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/refactored_test_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/rml_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/rrf_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/slic3r_pre.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/smoothie_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/uccnc_post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Post/scripts/wedm_post.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Tool" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Bit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Controller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Tool/Gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/Bit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/BitCmd.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/BitEdit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/BitLibraryCmd.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/BitLibrary.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Path/Tool/Gui/Controller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tests" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/boxtest.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/boxtest1.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/Drilling_1.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/drill_test1.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/FilePathTestUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/PathTestUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/test_adaptive.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/test_profile.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/test_centroid_00.ngc"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/test_filenaming.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/test_geomop.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/test_holes00.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestCAMSanity.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestCentroidPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestGrblPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestLinuxCNCPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestMach3Mach4Post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathAdaptive.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathCore.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathDepthParams.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathDressupDogbone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathDressupDogboneII.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathDressupHoldingTags.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathDrillGenerator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathDrillable.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathGeneratorDogboneII.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathGeom.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathHelix.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathHelpers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathHelixGenerator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathLanguage.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathLog.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathOpDeburr.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathOpUtil.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathPreferences.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathProfile.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathPropertyBag.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathRotationGenerator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathSetupSheet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathStock.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathToolChangeGenerator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathThreadMilling.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathThreadMillingGenerator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathToolBit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathToolController.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathUtil.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathVcarve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestPathVoronoi.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredCentroidPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredGrblPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredLinuxCNCPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredMach3Mach4Post.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredTestPost.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredTestPostGCodes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/TestRefactoredTestPostMCodes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/Tools/Bit/test-path-tool-bit-bit-00.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/Tools/Library/test-path-tool-bit-library-00.fctl"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/Tools/Shape/test-path-tool-bit-shape-00.fcstd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tests" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tests/Tools")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/PathPythonGui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathPythonGui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/PathPythonGui/simple_edit_panel.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/README.md")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools/Bit" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/45degree_chamfer.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/5mm-thread-cutter.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/5mm_Drill.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/5mm_Endmill.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/60degree_Vbit.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/6mm_Ball_End.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/6mm_Bullnose.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/probe.fctb"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Bit/slittingsaw.fctb"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools/Library" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Library/Default.fctl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools/Shape" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/ballend.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/bullnose.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/chamfer.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/dovetail.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/drill.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/endmill.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/probe.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/slittingsaw.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/thread-mill.fcstd"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Tools/Shape/v-bit.fcstd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Images/Ops" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Images/Ops/chamfer.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Images/Tools" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Images/Tools/drill.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Images/Tools/endmill.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Images/Tools/v-bit.svg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Data/Threads" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/imperial-external-2A.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/imperial-external-3A.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/imperial-internal-2B.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/imperial-internal-3B.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/metric-external-4G6G.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/metric-external-6G.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/CAM/Data/Threads/metric-internal-6H.csv"
    )
endif()

