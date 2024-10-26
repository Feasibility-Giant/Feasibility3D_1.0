file(REMOVE_RECURSE
  "../../../share/Mod/PartDesign/Resources/Hole/din7984.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso10642-fine.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso10642.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso12474-fine.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso14583.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso14583part.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso2009.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso4762-fine.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso4762.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso4762_7089.json"
  "../../../share/Mod/PartDesign/Resources/Hole/iso7046.json"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/PartDesignHole.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
