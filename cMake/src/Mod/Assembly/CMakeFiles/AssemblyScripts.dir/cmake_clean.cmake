file(REMOVE_RECURSE
  "../../../Mod/Assembly/Assembly/__init__.py"
  "../../../Mod/Assembly/AssemblyTests/TestCore.py"
  "../../../Mod/Assembly/AssemblyTests/__init__.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/AssemblyScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
