file(REMOVE_RECURSE
  "../../../Mod/CAM/Init.py"
  "../../../Mod/CAM/InitGui.py"
  "../../../Mod/CAM/PathCommands.py"
  "../../../Mod/CAM/TestCAMApp.py"
  "../../../Mod/CAM/Tests/Drilling_1.FCStd"
  "../../../Mod/CAM/Tests/FilePathTestUtils.py"
  "../../../Mod/CAM/Tests/PathTestUtils.py"
  "../../../Mod/CAM/Tests/TestCAMSanity.py"
  "../../../Mod/CAM/Tests/TestCentroidPost.py"
  "../../../Mod/CAM/Tests/TestGrblPost.py"
  "../../../Mod/CAM/Tests/TestLinuxCNCPost.py"
  "../../../Mod/CAM/Tests/TestMach3Mach4Post.py"
  "../../../Mod/CAM/Tests/TestPathAdaptive.py"
  "../../../Mod/CAM/Tests/TestPathCore.py"
  "../../../Mod/CAM/Tests/TestPathDepthParams.py"
  "../../../Mod/CAM/Tests/TestPathDressupDogbone.py"
  "../../../Mod/CAM/Tests/TestPathDressupDogboneII.py"
  "../../../Mod/CAM/Tests/TestPathDressupHoldingTags.py"
  "../../../Mod/CAM/Tests/TestPathDrillGenerator.py"
  "../../../Mod/CAM/Tests/TestPathDrillable.py"
  "../../../Mod/CAM/Tests/TestPathGeneratorDogboneII.py"
  "../../../Mod/CAM/Tests/TestPathGeom.py"
  "../../../Mod/CAM/Tests/TestPathHelix.py"
  "../../../Mod/CAM/Tests/TestPathHelixGenerator.py"
  "../../../Mod/CAM/Tests/TestPathHelpers.py"
  "../../../Mod/CAM/Tests/TestPathLanguage.py"
  "../../../Mod/CAM/Tests/TestPathLog.py"
  "../../../Mod/CAM/Tests/TestPathOpDeburr.py"
  "../../../Mod/CAM/Tests/TestPathOpUtil.py"
  "../../../Mod/CAM/Tests/TestPathPost.py"
  "../../../Mod/CAM/Tests/TestPathPreferences.py"
  "../../../Mod/CAM/Tests/TestPathProfile.py"
  "../../../Mod/CAM/Tests/TestPathPropertyBag.py"
  "../../../Mod/CAM/Tests/TestPathRotationGenerator.py"
  "../../../Mod/CAM/Tests/TestPathSetupSheet.py"
  "../../../Mod/CAM/Tests/TestPathStock.py"
  "../../../Mod/CAM/Tests/TestPathThreadMilling.py"
  "../../../Mod/CAM/Tests/TestPathThreadMillingGenerator.py"
  "../../../Mod/CAM/Tests/TestPathToolBit.py"
  "../../../Mod/CAM/Tests/TestPathToolChangeGenerator.py"
  "../../../Mod/CAM/Tests/TestPathToolController.py"
  "../../../Mod/CAM/Tests/TestPathUtil.py"
  "../../../Mod/CAM/Tests/TestPathVcarve.py"
  "../../../Mod/CAM/Tests/TestPathVoronoi.py"
  "../../../Mod/CAM/Tests/TestRefactoredCentroidPost.py"
  "../../../Mod/CAM/Tests/TestRefactoredGrblPost.py"
  "../../../Mod/CAM/Tests/TestRefactoredLinuxCNCPost.py"
  "../../../Mod/CAM/Tests/TestRefactoredMach3Mach4Post.py"
  "../../../Mod/CAM/Tests/TestRefactoredTestPost.py"
  "../../../Mod/CAM/Tests/TestRefactoredTestPostGCodes.py"
  "../../../Mod/CAM/Tests/TestRefactoredTestPostMCodes.py"
  "../../../Mod/CAM/Tests/Tools/Bit/test-path-tool-bit-bit-00.fctb"
  "../../../Mod/CAM/Tests/Tools/Library/test-path-tool-bit-library-00.fctl"
  "../../../Mod/CAM/Tests/Tools/Shape/test-path-tool-bit-shape-00.fcstd"
  "../../../Mod/CAM/Tests/__init__.py"
  "../../../Mod/CAM/Tests/boxtest.fcstd"
  "../../../Mod/CAM/Tests/boxtest1.fcstd"
  "../../../Mod/CAM/Tests/drill_test1.FCStd"
  "../../../Mod/CAM/Tests/test_adaptive.fcstd"
  "../../../Mod/CAM/Tests/test_centroid_00.ngc"
  "../../../Mod/CAM/Tests/test_filenaming.fcstd"
  "../../../Mod/CAM/Tests/test_geomop.fcstd"
  "../../../Mod/CAM/Tests/test_holes00.fcstd"
  "../../../Mod/CAM/Tests/test_profile.fcstd"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()