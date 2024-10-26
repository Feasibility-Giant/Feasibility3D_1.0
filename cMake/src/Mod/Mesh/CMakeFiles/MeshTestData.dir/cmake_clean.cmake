file(REMOVE_RECURSE
  "../../../Mod/Mesh/App/TestData/NASTRAN_Test_Delimited_GRID_CQUAD4.bdf"
  "../../../Mod/Mesh/App/TestData/NASTRAN_Test_GRIDSTAR_CQUAD4.bdf"
  "../../../Mod/Mesh/App/TestData/NASTRAN_Test_GRID_CQUAD4.bdf"
  "../../../Mod/Mesh/App/TestData/NASTRAN_Test_GRID_CTRIA3.bdf"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MeshTestData.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
