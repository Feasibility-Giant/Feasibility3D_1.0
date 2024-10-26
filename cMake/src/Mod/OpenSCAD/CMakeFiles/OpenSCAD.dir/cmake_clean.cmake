file(REMOVE_RECURSE
  "../../../Mod/OpenSCAD/Init.py"
  "../../../Mod/OpenSCAD/InitGui.py"
  "../../../Mod/OpenSCAD/OpenSCAD2Dgeom.py"
  "../../../Mod/OpenSCAD/OpenSCADCommands.py"
  "../../../Mod/OpenSCAD/OpenSCADFeatures.py"
  "../../../Mod/OpenSCAD/OpenSCADUtils.py"
  "../../../Mod/OpenSCAD/OpenSCAD_rc.py"
  "../../../Mod/OpenSCAD/TestOpenSCADApp.py"
  "../../../Mod/OpenSCAD/TestOpenSCADGui.py"
  "../../../Mod/OpenSCAD/colorcodeshapes.py"
  "../../../Mod/OpenSCAD/expandplacements.py"
  "../../../Mod/OpenSCAD/exportCSG.py"
  "../../../Mod/OpenSCAD/importCSG.py"
  "../../../Mod/OpenSCAD/replaceobj.py"
  "../../../Mod/OpenSCAD/tokrules.py"
  "../../../share/Mod/OpenSCAD/Resources/icons/OpenSCADWorkbench.svg"
  "OpenSCAD_rc.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/OpenSCAD.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
