file(REMOVE_RECURSE
  "../../../Mod/ReverseEngineering/Init.py"
  "../../../Mod/ReverseEngineering/InitGui.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ReverseEngineeringScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
