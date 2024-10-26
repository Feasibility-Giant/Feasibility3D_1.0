file(REMOVE_RECURSE
  "../../../Mod/Measure/Init.py"
  "../../../Mod/Measure/InitGui.py"
  "../../../Mod/Measure/MeasureCOM.py"
  "../../../Mod/Measure/UtilsMeasure.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MeasureScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
