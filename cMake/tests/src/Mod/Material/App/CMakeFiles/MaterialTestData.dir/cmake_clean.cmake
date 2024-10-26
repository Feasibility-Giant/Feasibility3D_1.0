file(REMOVE_RECURSE
  "../../../../Materials/TestAcrylicLegacy.FCMat"
  "../../../../Materials/TestAluminumAppearance.FCMat"
  "../../../../Materials/TestAluminumMixed.FCMat"
  "../../../../Materials/TestAluminumPhysical.FCMat"
  "../../../../Materials/TestBrassAppearance.FCMat"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MaterialTestData.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
