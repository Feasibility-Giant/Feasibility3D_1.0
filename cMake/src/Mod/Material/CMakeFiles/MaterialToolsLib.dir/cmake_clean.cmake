file(REMOVE_RECURSE
  "../../../Mod/Material/materialtools/MaterialModels.py"
  "../../../Mod/Material/materialtools/__init__.py"
  "../../../Mod/Material/materialtools/cardutils.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MaterialToolsLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
