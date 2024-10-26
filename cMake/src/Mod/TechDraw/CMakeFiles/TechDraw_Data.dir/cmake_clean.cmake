file(REMOVE_RECURSE
  "../../../Mod/TechDraw/Init.py"
  "../../../Mod/TechDraw/InitGui.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandAxoLengthDimension.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandFillTemplateFields.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandHoleShaftFit.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandMoveView.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandPositionSectionView.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandShareView.py"
  "../../../Mod/TechDraw/TechDrawTools/CommandVertexCreations.py"
  "../../../Mod/TechDraw/TechDrawTools/Gui/DlgPageChooser.ui"
  "../../../Mod/TechDraw/TechDrawTools/Gui/TaskAddOffsetVertex.ui"
  "../../../Mod/TechDraw/TechDrawTools/Gui/TaskHoleShaftFit.ui"
  "../../../Mod/TechDraw/TechDrawTools/Gui/TaskMoveView.ui"
  "../../../Mod/TechDraw/TechDrawTools/TDToolsMovers.py"
  "../../../Mod/TechDraw/TechDrawTools/TDToolsUtil.py"
  "../../../Mod/TechDraw/TechDrawTools/TaskAddOffsetVertex.py"
  "../../../Mod/TechDraw/TechDrawTools/TaskFillTemplateFields.py"
  "../../../Mod/TechDraw/TechDrawTools/TaskHoleShaftFit.py"
  "../../../Mod/TechDraw/TechDrawTools/TaskMoveView.py"
  "../../../Mod/TechDraw/TechDrawTools/TaskShareView.py"
  "../../../Mod/TechDraw/TechDrawTools/__init__.py"
  "../../../Mod/TechDraw/TestTechDrawApp.py"
  "../../../Mod/TechDraw/TestTechDrawGui.py"
  "../../../share/Mod/TechDraw/CSVdata/FillTemplateFields.csv"
  "../../../share/Mod/TechDraw/LineGroup/ANSI.Y14.2M.1992.ElementDef.csv"
  "../../../share/Mod/TechDraw/LineGroup/ANSI.Y14.2M.1992.LineDef.csv"
  "../../../share/Mod/TechDraw/LineGroup/ASME.Y14.2.2008.ElementDef.csv"
  "../../../share/Mod/TechDraw/LineGroup/ASME.Y14.2.2008.LineDef.csv"
  "../../../share/Mod/TechDraw/LineGroup/ISO.128.20.1996.ElementDef.csv"
  "../../../share/Mod/TechDraw/LineGroup/ISO.128.20.1996.LineDef.csv"
  "../../../share/Mod/TechDraw/LineGroup/LineGroup.csv"
  "../../../share/Mod/TechDraw/PAT/FCPAT.pat"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/TechDraw_Data.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
