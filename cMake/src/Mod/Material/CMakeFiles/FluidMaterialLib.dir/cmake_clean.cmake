file(REMOVE_RECURSE
  "../../../share/Mod/Material/Resources/Materials/Fluid/Air.FCMat"
  "../../../share/Mod/Material/Resources/Materials/Fluid/Argon.FCMat"
  "../../../share/Mod/Material/Resources/Materials/Fluid/Carbon Dioxide.FCMat"
  "../../../share/Mod/Material/Resources/Materials/Fluid/Nitrogen.FCMat"
  "../../../share/Mod/Material/Resources/Materials/Fluid/None.FCMat"
  "../../../share/Mod/Material/Resources/Materials/Fluid/Water.FCMat"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/FluidMaterialLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
