file(REMOVE_RECURSE
  "../../../Mod/Points/pointscommands/__init__.py"
  "../../../Mod/Points/pointscommands/commands.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/PointsScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
