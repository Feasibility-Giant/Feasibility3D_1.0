file(REMOVE_RECURSE
  "../../../Mod/Fem/TestFemGui.py"
  "../../../Mod/Fem/femguiobjects/__init__.py"
  "../../../Mod/Fem/femguiobjects/readme.md"
  "../../../Mod/Fem/femguiutils/__init__.py"
  "../../../Mod/Fem/femguiutils/migrate_gui.py"
  "../../../Mod/Fem/femguiutils/selection_widgets.py"
  "../../../Mod/Fem/femtaskpanels/__init__.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_bodyheatsource.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_centrif.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_currentdensity.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_electrostaticpotential.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_flowvelocity.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_initialflowvelocity.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_initialpressure.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_magnetization.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_sectionprint.py"
  "../../../Mod/Fem/femtaskpanels/task_constraint_tie.py"
  "../../../Mod/Fem/femtaskpanels/task_element_fluid1D.py"
  "../../../Mod/Fem/femtaskpanels/task_element_geometry1D.py"
  "../../../Mod/Fem/femtaskpanels/task_element_geometry2D.py"
  "../../../Mod/Fem/femtaskpanels/task_element_rotation1D.py"
  "../../../Mod/Fem/femtaskpanels/task_material_common.py"
  "../../../Mod/Fem/femtaskpanels/task_material_reinforced.py"
  "../../../Mod/Fem/femtaskpanels/task_mesh_boundarylayer.py"
  "../../../Mod/Fem/femtaskpanels/task_mesh_gmsh.py"
  "../../../Mod/Fem/femtaskpanels/task_mesh_group.py"
  "../../../Mod/Fem/femtaskpanels/task_mesh_region.py"
  "../../../Mod/Fem/femtaskpanels/task_result_mechanical.py"
  "../../../Mod/Fem/femtaskpanels/task_solver_ccxtools.py"
  "../../../Mod/Fem/femtest/gui/__init__.py"
  "../../../Mod/Fem/femtest/gui/test_open.py"
  "../../../Mod/Fem/femviewprovider/__init__.py"
  "../../../Mod/Fem/femviewprovider/view_base_femconstraint.py"
  "../../../Mod/Fem/femviewprovider/view_base_femelement.py"
  "../../../Mod/Fem/femviewprovider/view_base_femmaterial.py"
  "../../../Mod/Fem/femviewprovider/view_base_femmeshelement.py"
  "../../../Mod/Fem/femviewprovider/view_base_femobject.py"
  "../../../Mod/Fem/femviewprovider/view_constant_vacuumpermittivity.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_bodyheatsource.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_centrif.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_currentdensity.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_electrostaticpotential.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_flowvelocity.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_initialflowvelocity.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_initialpressure.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_magnetization.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_sectionprint.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_selfweight.py"
  "../../../Mod/Fem/femviewprovider/view_constraint_tie.py"
  "../../../Mod/Fem/femviewprovider/view_element_fluid1D.py"
  "../../../Mod/Fem/femviewprovider/view_element_geometry1D.py"
  "../../../Mod/Fem/femviewprovider/view_element_geometry2D.py"
  "../../../Mod/Fem/femviewprovider/view_element_rotation1D.py"
  "../../../Mod/Fem/femviewprovider/view_material_common.py"
  "../../../Mod/Fem/femviewprovider/view_material_mechanicalnonlinear.py"
  "../../../Mod/Fem/femviewprovider/view_material_reinforced.py"
  "../../../Mod/Fem/femviewprovider/view_mesh_boundarylayer.py"
  "../../../Mod/Fem/femviewprovider/view_mesh_gmsh.py"
  "../../../Mod/Fem/femviewprovider/view_mesh_group.py"
  "../../../Mod/Fem/femviewprovider/view_mesh_region.py"
  "../../../Mod/Fem/femviewprovider/view_mesh_result.py"
  "../../../Mod/Fem/femviewprovider/view_result_mechanical.py"
  "../../../Mod/Fem/femviewprovider/view_solver_ccxtools.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/FemGuiScriptsTarget.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()