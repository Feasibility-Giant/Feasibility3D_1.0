file(REMOVE_RECURSE
  "../../../Mod/OpenSCAD/OpenSCADTest/__init__.py"
  "../../../Mod/OpenSCAD/OpenSCADTest/app/__init__.py"
  "../../../Mod/OpenSCAD/OpenSCADTest/app/test_importCSG.py"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/CSG.csg"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/CSG.scad"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/Cube.stl"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/Square.dxf"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/Surface.dat"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/Surface.png"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/Surface2.dat"
  "../../../Mod/OpenSCAD/OpenSCADTest/data/__init__.py"
  "../../../Mod/OpenSCAD/OpenSCADTest/gui/__init__.py"
  "../../../Mod/OpenSCAD/OpenSCADTest/gui/test_dummy.py"
  "../../../Mod/OpenSCAD/OpenSCADTest/test_information.md"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/OpenSCADTests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
