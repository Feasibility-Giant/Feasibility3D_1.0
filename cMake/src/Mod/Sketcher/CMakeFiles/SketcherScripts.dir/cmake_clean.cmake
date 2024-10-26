file(REMOVE_RECURSE
  "../../../Mod/Sketcher/Init.py"
  "../../../Mod/Sketcher/InitGui.py"
  "../../../Mod/Sketcher/ProfileLib/Hexagon.py"
  "../../../Mod/Sketcher/ProfileLib/RegularPolygon.py"
  "../../../Mod/Sketcher/ProfileLib/__init__.py"
  "../../../Mod/Sketcher/Profiles.py"
  "../../../Mod/Sketcher/SketcherExample.py"
  "../../../Mod/Sketcher/SketcherTests/TestSketchExpression.py"
  "../../../Mod/Sketcher/SketcherTests/TestSketchFillet.py"
  "../../../Mod/Sketcher/SketcherTests/TestSketchValidateCoincidents.py"
  "../../../Mod/Sketcher/SketcherTests/TestSketcherSolver.py"
  "../../../Mod/Sketcher/SketcherTests/__init__.py"
  "../../../Mod/Sketcher/TestSketcherApp.py"
  "../../../Mod/Sketcher/TestSketcherGui.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/SketcherScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
