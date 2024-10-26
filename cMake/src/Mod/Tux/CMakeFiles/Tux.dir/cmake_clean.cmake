file(REMOVE_RECURSE
  "../../../Mod/Tux/InitGui.py"
  "../../../Mod/Tux/NavigationIndicatorGui.py"
  "../../../Mod/Tux/PersistentToolbars.py"
  "../../../Mod/Tux/PersistentToolbarsGui.py"
  "../../../Mod/Tux/Tux_rc.py"
  "Tux_rc.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Tux.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
