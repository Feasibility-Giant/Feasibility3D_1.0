file(REMOVE_RECURSE
  "../../../Mod/Import/Init.py"
  "../../../Mod/Import/InitGui.py"
  "../../../Mod/Import/TestImportGui.py"
  "../../../Mod/Import/stepZ.py"
  "../../../share/Mod/Import/DxfPlate/blocks10.rub"
  "../../../share/Mod/Import/DxfPlate/blocks112.rub"
  "../../../share/Mod/Import/DxfPlate/blocks114.rub"
  "../../../share/Mod/Import/DxfPlate/classes14.rub"
  "../../../share/Mod/Import/DxfPlate/entities0.rub"
  "../../../share/Mod/Import/DxfPlate/entities12.rub"
  "../../../share/Mod/Import/DxfPlate/entities14.rub"
  "../../../share/Mod/Import/DxfPlate/header0.rub"
  "../../../share/Mod/Import/DxfPlate/header12.rub"
  "../../../share/Mod/Import/DxfPlate/header14.rub"
  "../../../share/Mod/Import/DxfPlate/objects14.rub"
  "../../../share/Mod/Import/DxfPlate/tables10.rub"
  "../../../share/Mod/Import/DxfPlate/tables112.rub"
  "../../../share/Mod/Import/DxfPlate/tables114.rub"
  "../../../share/Mod/Import/DxfPlate/tables20.rub"
  "../../../share/Mod/Import/DxfPlate/tables212.rub"
  "../../../share/Mod/Import/DxfPlate/tables214.rub"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ImportScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
