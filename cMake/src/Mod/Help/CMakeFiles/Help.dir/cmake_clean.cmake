file(REMOVE_RECURSE
  "../../../Mod/Help/Help.py"
  "../../../Mod/Help/Help_rc.py"
  "../../../Mod/Help/InitGui.py"
  "../../../Mod/Help/default.css"
  "../../../Mod/Help/dlgPreferencesHelp.ui"
  "Help_rc.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Help.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
