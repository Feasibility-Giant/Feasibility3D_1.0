file(REMOVE_RECURSE
  "../../../Mod/TechDraw/TDTest/DrawHatchTest.py"
  "../../../Mod/TechDraw/TDTest/DrawProjectionGroupTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewAnnotationTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewBalloonTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewDetailTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewDimensionTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewImageTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewPartTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewSectionTest.py"
  "../../../Mod/TechDraw/TDTest/DrawViewSymbolTest.py"
  "../../../Mod/TechDraw/TDTest/TechDrawTestUtilities.py"
  "../../../Mod/TechDraw/TDTest/TestHatch.svg"
  "../../../Mod/TechDraw/TDTest/TestImage.png"
  "../../../Mod/TechDraw/TDTest/TestSymbol.svg"
  "../../../Mod/TechDraw/TDTest/TestTemplate.svg"
  "../../../Mod/TechDraw/TDTest/__init__.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/TDTestTarget.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
