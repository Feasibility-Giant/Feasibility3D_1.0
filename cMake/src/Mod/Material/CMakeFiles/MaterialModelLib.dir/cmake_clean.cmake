file(REMOVE_RECURSE
  "../../../share/Mod/Material/Resources/Models/Architectural/Architectural.yml"
  "../../../share/Mod/Material/Resources/Models/Architectural/ArchitecturalRendering.yml"
  "../../../share/Mod/Material/Resources/Models/Costs/Costs.yml"
  "../../../share/Mod/Material/Resources/Models/Electromagnetic/Electromagnetic.yml"
  "../../../share/Mod/Material/Resources/Models/Fluid/Fluid.yml"
  "../../../share/Mod/Material/Resources/Models/Legacy/Father.yml"
  "../../../share/Mod/Material/Resources/Models/Legacy/MaterialStandard.yml"
  "../../../share/Mod/Material/Resources/Models/Machining/Machinability.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/ArrudaBoyce.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/Density.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/Hardness.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/IsotropicLinearElastic.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/LinearElastic.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/MooneyRivlin.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/NeoHooke.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/OgdenN1.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/OgdenN2.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/OgdenN3.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/OgdenYld2004p18.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/OrthotropicLinearElastic.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/PolynomialN1.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/PolynomialN2.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/PolynomialN3.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/ReducedPolynomialN1.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/ReducedPolynomialN2.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/ReducedPolynomialN3.yml"
  "../../../share/Mod/Material/Resources/Models/Mechanical/Yeoh.yml"
  "../../../share/Mod/Material/Resources/Models/Patterns/PAT.yml"
  "../../../share/Mod/Material/Resources/Models/Patterns/Pattern File.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderAppleseed.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderCarpaint.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderCycles.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderDiffuse.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderDisney.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderEmission.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderGlass.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderLuxcore.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderLuxrender.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderMixed.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderOspray.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderPbrt.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderPovray.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderSubstancePBR.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderTexture.yml"
  "../../../share/Mod/Material/Resources/Models/Render Workbench/RenderWB.yml"
  "../../../share/Mod/Material/Resources/Models/Rendering/AdvancedRendering.yml"
  "../../../share/Mod/Material/Resources/Models/Rendering/BasicRendering.yml"
  "../../../share/Mod/Material/Resources/Models/Rendering/TextureRendering.yml"
  "../../../share/Mod/Material/Resources/Models/Rendering/VectorRendering.yml"
  "../../../share/Mod/Material/Resources/Models/Test/Test Model.yml"
  "../../../share/Mod/Material/Resources/Models/Thermal/Thermal.yml"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MaterialModelLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
