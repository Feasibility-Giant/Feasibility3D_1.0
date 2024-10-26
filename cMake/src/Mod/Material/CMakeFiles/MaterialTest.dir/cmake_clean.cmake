file(REMOVE_RECURSE
  "../../../Mod/Material/materialtests/TestMaterialCreation.py"
  "../../../Mod/Material/materialtests/TestMaterialFilter.py"
  "../../../Mod/Material/materialtests/TestMaterials.py"
  "../../../Mod/Material/materialtests/TestModels.py"
  "../../../Mod/Material/materialtests/__init__.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MaterialTest.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
