file(REMOVE_RECURSE
  "../../../Mod/Material/materialtests/Materials/TestAcrylicLegacy.FCMat"
  "../../../Mod/Material/materialtests/Materials/TestAluminumAppearance.FCMat"
  "../../../Mod/Material/materialtests/Materials/TestAluminumMixed.FCMat"
  "../../../Mod/Material/materialtests/Materials/TestAluminumPhysical.FCMat"
  "../../../Mod/Material/materialtests/Materials/TestBrassAppearance.FCMat"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MaterialPythonTestData.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
