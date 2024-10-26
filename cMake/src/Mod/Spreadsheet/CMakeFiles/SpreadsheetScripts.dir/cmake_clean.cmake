file(REMOVE_RECURSE
  "../../../Mod/Spreadsheet/Init.py"
  "../../../Mod/Spreadsheet/InitGui.py"
  "../../../Mod/Spreadsheet/TestSpreadsheet.py"
  "../../../Mod/Spreadsheet/importXLSX.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/SpreadsheetScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
