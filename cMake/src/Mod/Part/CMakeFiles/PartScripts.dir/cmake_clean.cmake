file(REMOVE_RECURSE
  "../../../Mod/Part/AttachmentEditor/Commands.py"
  "../../../Mod/Part/AttachmentEditor/FrozenClass.py"
  "../../../Mod/Part/AttachmentEditor/TaskAttachmentEditor.py"
  "../../../Mod/Part/AttachmentEditor/TaskAttachmentEditor.ui"
  "../../../Mod/Part/AttachmentEditor/__init__.py"
  "../../../Mod/Part/BOPTools/BOPFeatures.py"
  "../../../Mod/Part/BOPTools/GeneralFuseResult.py"
  "../../../Mod/Part/BOPTools/JoinAPI.py"
  "../../../Mod/Part/BOPTools/JoinFeatures.py"
  "../../../Mod/Part/BOPTools/ShapeMerge.py"
  "../../../Mod/Part/BOPTools/SplitAPI.py"
  "../../../Mod/Part/BOPTools/SplitFeatures.py"
  "../../../Mod/Part/BOPTools/Utils.py"
  "../../../Mod/Part/BOPTools/__init__.py"
  "../../../Mod/Part/BasicShapes/CommandShapes.py"
  "../../../Mod/Part/BasicShapes/ShapeContent.py"
  "../../../Mod/Part/BasicShapes/Shapes.py"
  "../../../Mod/Part/BasicShapes/TaskTube.ui"
  "../../../Mod/Part/BasicShapes/Utils.py"
  "../../../Mod/Part/BasicShapes/ViewProviderShapes.py"
  "../../../Mod/Part/BasicShapes/__init__.py"
  "../../../Mod/Part/CompoundTools/CompoundFilter.py"
  "../../../Mod/Part/CompoundTools/Explode.py"
  "../../../Mod/Part/CompoundTools/_CommandCompoundFilter.py"
  "../../../Mod/Part/CompoundTools/_CommandExplodeCompound.py"
  "../../../Mod/Part/CompoundTools/__init__.py"
  "../../../Mod/Part/Init.py"
  "../../../Mod/Part/InitGui.py"
  "../../../Mod/Part/JoinFeatures.py"
  "../../../Mod/Part/MakeBottle.py"
  "../../../Mod/Part/PartEnums.py"
  "../../../Mod/Part/TestPartApp.py"
  "../../../Mod/Part/TestPartGui.py"
  "../../../Mod/Part/parttests/BRep_tests.py"
  "../../../Mod/Part/parttests/ColorPerFaceTest.py"
  "../../../Mod/Part/parttests/ColorTransparencyTest.py"
  "../../../Mod/Part/parttests/Geom2d_tests.py"
  "../../../Mod/Part/parttests/TopoShapeListTest.py"
  "../../../Mod/Part/parttests/TopoShapeTest.py"
  "../../../Mod/Part/parttests/__init__.py"
  "../../../Mod/Part/parttests/part_test_objects.py"
  "../../../Mod/Part/parttests/regression_tests.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/PartScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()