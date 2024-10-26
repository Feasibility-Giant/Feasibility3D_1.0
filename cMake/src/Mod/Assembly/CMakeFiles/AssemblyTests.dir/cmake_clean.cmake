file(REMOVE_RECURSE
  "../../../Mod/Assembly/AssemblyImport.py"
  "../../../Mod/Assembly/AssemblyTests/TestCore.py"
  "../../../Mod/Assembly/AssemblyTests/__init__.py"
  "../../../Mod/Assembly/CommandCreateAssembly.py"
  "../../../Mod/Assembly/CommandCreateBom.py"
  "../../../Mod/Assembly/CommandCreateJoint.py"
  "../../../Mod/Assembly/CommandCreateView.py"
  "../../../Mod/Assembly/CommandExportASMT.py"
  "../../../Mod/Assembly/CommandInsertLink.py"
  "../../../Mod/Assembly/CommandSolveAssembly.py"
  "../../../Mod/Assembly/Init.py"
  "../../../Mod/Assembly/InitGui.py"
  "../../../Mod/Assembly/JointObject.py"
  "../../../Mod/Assembly/Preferences.py"
  "../../../Mod/Assembly/TestAssemblyWorkbench.py"
  "../../../Mod/Assembly/UtilsAssembly.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/AssemblyTests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
