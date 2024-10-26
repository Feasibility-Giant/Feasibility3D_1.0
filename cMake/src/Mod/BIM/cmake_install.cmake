# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/BIM

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchComponent.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchIFC.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchIFCView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchIFCSchema.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchProject.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchWall.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Arch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchSite.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchStructure.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchCommands.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchSectionPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchWindow.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchWindowPresets.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchAxis.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchAxisSystem.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchGrid.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchVRM.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchRoof.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchStairs.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchSpace.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchRebar.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/TestArch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchFrame.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchPanel.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchEquipment.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchCutPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchMaterial.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchSchedule.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchProfile.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchPrecast.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchPipe.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchNesting.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchBuildingPart.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchReference.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchFence.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/OfflineRenderingUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchTruss.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchCurtainWall.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/ArchSketchObject.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/BimSelect.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/BimStatus.py"
    "/home/jarvis/Documents/freecad-source/cMake/src/Mod/BIM/Arch_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/Dice3DS" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Dice3DS/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Dice3DS/util.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Dice3DS/dom3ds.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/importers" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importIFC.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importIFClegacy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importIFCHelper.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importIFCmulticore.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importDAE.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importOBJ.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importWebGL.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importJSON.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importSH3D.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/import3DS.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importSHP.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/importGBXML.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/exportIFCStructuralTools.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/exportIFC.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/importers/exportIFCHelper.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/bimcommands" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimArchUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimAxis.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimBackground.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimBeam.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimBox.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimBuilder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimBuildingPart.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimClassification.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimClone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimColumn.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimCommon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimCompound.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimConvert.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimCopy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimCurtainwall.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimCutPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimCut.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimDiff.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimDimensions.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimDoor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimEmptyTrash.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimEquipment.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimExamples.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimExtrude.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimFence.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimFrame.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimFuse.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimGlue.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimHelp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimIfcElements.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimIfcExplorer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimIfcProperties.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimIfcQuantities.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimImagePlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimLayers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimLeader.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimLibrary.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimMaterial.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimMoveView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimNudge.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimOffset.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimPanel.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimPipe.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimPreflight.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimProfile.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimProjectManager.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimProject.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimRebar.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimReextrude.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimReference.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimReorder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimResetCloneColors.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimRewire.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimRoof.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSchedule.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSectionPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSetup.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimShape2DView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSimpleCopy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSite.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSketch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSlab.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimSpace.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimStairs.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimTDPage.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimTDView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimText.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimTogglePanels.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimTrash.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimTruss.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimTutorial.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimUnclone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimUngroup.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimViews.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimWall.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimWelcome.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimWindow.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimWindows.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/BimWPCommands.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/bimcommands/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/nativeifc" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_commands.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_diff.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_generator.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_geometry.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_import.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_layers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_materials.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_observer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_performance_test.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_psets.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_selftest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_status.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_tools.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_tree.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_viewproviders.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/BIM/nativeifc/ifc_openshell.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/BIM" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Presets")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/BIM/Resources/icons" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/BIM/Resources/icons/BIMWorkbench.svg")
endif()

