file(REMOVE_RECURSE
  "../../../Mod/Surface/Init.py"
  "../../../Mod/Surface/InitGui.py"
  "../../../Mod/Surface/SurfaceTests/TestBlendCurve.py"
  "../../../Mod/Surface/SurfaceTests/__init__.py"
  "../../../Mod/Surface/TestSurfaceApp.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/SurfaceScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
