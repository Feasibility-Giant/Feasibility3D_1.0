file(REMOVE_RECURSE
  "../../../Mod/Mesh/BuildRegularGeoms.py"
  "../../../Mod/Mesh/Init.py"
  "../../../Mod/Mesh/InitGui.py"
  "../../../Mod/Mesh/MeshEnums.py"
  "../../../Mod/Mesh/MeshTestsApp.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MeshScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
