file(REMOVE_RECURSE
  "../../../Mod/PartDesign/WizardShaft/SegmentFunction.py"
  "../../../Mod/PartDesign/WizardShaft/Shaft.py"
  "../../../Mod/PartDesign/WizardShaft/ShaftDiagram.py"
  "../../../Mod/PartDesign/WizardShaft/ShaftFeature.py"
  "../../../Mod/PartDesign/WizardShaft/WizardShaft.py"
  "../../../Mod/PartDesign/WizardShaft/WizardShaft.svg"
  "../../../Mod/PartDesign/WizardShaft/WizardShaftTable.py"
  "../../../Mod/PartDesign/WizardShaft/__init__.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/WizardShaft.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
