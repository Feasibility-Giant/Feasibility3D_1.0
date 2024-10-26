file(REMOVE_RECURSE
  "../../../Mod/Material/Init.py"
  "../../../Mod/Material/InitGui.py"
  "../../../Mod/Material/MaterialEditor.py"
  "../../../Mod/Material/Templatematerial.yml"
  "../../../Mod/Material/TestMaterialsApp.py"
  "../../../Mod/Material/importFCMat.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MaterialScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
