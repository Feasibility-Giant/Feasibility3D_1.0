file(REMOVE_RECURSE
  "../../../../Mod/Fem/Resources/ui/BodyHeatSource.ui"
  "../../../../Mod/Fem/Resources/ui/ConstraintCentrif.ui"
  "../../../../Mod/Fem/Resources/ui/ConstraintSectionPrint.ui"
  "../../../../Mod/Fem/Resources/ui/ConstraintTie.ui"
  "../../../../Mod/Fem/Resources/ui/CurrentDensity.ui"
  "../../../../Mod/Fem/Resources/ui/ElectrostaticPotential.ui"
  "../../../../Mod/Fem/Resources/ui/ElementFluid1D.ui"
  "../../../../Mod/Fem/Resources/ui/ElementGeometry1D.ui"
  "../../../../Mod/Fem/Resources/ui/ElementGeometry2D.ui"
  "../../../../Mod/Fem/Resources/ui/ElementRotation1D.ui"
  "../../../../Mod/Fem/Resources/ui/FlowVelocity.ui"
  "../../../../Mod/Fem/Resources/ui/InitialFlowVelocity.ui"
  "../../../../Mod/Fem/Resources/ui/InitialPressure.ui"
  "../../../../Mod/Fem/Resources/ui/Magnetization.ui"
  "../../../../Mod/Fem/Resources/ui/Material.ui"
  "../../../../Mod/Fem/Resources/ui/MaterialReinforcement.ui"
  "../../../../Mod/Fem/Resources/ui/MeshBoundaryLayer.ui"
  "../../../../Mod/Fem/Resources/ui/MeshGmsh.ui"
  "../../../../Mod/Fem/Resources/ui/MeshGroup.ui"
  "../../../../Mod/Fem/Resources/ui/MeshGroupXDMFExport.ui"
  "../../../../Mod/Fem/Resources/ui/MeshRegion.ui"
  "../../../../Mod/Fem/Resources/ui/ResultHints.ui"
  "../../../../Mod/Fem/Resources/ui/ResultShow.ui"
  "../../../../Mod/Fem/Resources/ui/SolverCalculix.ui"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/FemPythonUi.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
