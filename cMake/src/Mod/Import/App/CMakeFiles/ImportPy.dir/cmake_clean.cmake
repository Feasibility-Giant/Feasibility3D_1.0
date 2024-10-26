file(REMOVE_RECURSE
  "../../../../Mod/Import/PlmXmlParser.py"
  "../../../../Mod/Import/SCL/AggregationDataTypes.py"
  "../../../../Mod/Import/SCL/Aufspannung.stp"
  "../../../../Mod/Import/SCL/BaseType.py"
  "../../../../Mod/Import/SCL/Builtin.py"
  "../../../../Mod/Import/SCL/ConstructedDataTypes.py"
  "../../../../Mod/Import/SCL/Model.py"
  "../../../../Mod/Import/SCL/Part21.py"
  "../../../../Mod/Import/SCL/Product1.stp"
  "../../../../Mod/Import/SCL/Rules.py"
  "../../../../Mod/Import/SCL/SCLBase.py"
  "../../../../Mod/Import/SCL/SimpleDataTypes.py"
  "../../../../Mod/Import/SCL/SimpleReader.py"
  "../../../../Mod/Import/SCL/TypeChecker.py"
  "../../../../Mod/Import/SCL/Utils.py"
  "../../../../Mod/Import/SCL/__init__.py"
  "../../../../Mod/Import/SCL/essa_par.py"
  "../../../../Mod/Import/SCL/gasket1.p21"
  "../../../../Mod/Import/SCL_output/automotive_design.py"
  "../../../../Mod/Import/SCL_output/ifc2x3.py"
  "../../../../Mod/Import/SCL_output/ifc4.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ImportPy.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
