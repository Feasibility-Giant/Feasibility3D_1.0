file(REMOVE_RECURSE
  "../../share/examples/AssemblyExample.FCStd"
  "../../share/examples/BIMExample.FCStd"
  "../../share/examples/EngineBlock.FCStd"
  "../../share/examples/FEMExample.FCStd"
  "../../share/examples/PartDesignExample.FCStd"
  "../../share/examples/RobotExample.FCStd"
  "../../share/examples/Schenkel.stp"
  "../../share/examples/draft_test_objects.FCStd"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Example_data.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
