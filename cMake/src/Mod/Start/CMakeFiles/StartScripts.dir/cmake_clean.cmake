file(REMOVE_RECURSE
  "../../../Mod/Start/Init.py"
  "../../../Mod/Start/InitGui.py"
  "../../../Mod/Start/StartMigrator.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/StartScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
