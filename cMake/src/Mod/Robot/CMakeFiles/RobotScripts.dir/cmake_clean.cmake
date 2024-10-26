file(REMOVE_RECURSE
  "../../../Mod/Robot/Init.py"
  "../../../Mod/Robot/InitGui.py"
  "../../../Mod/Robot/KukaExporter.py"
  "../../../Mod/Robot/MovieTool.py"
  "../../../Mod/Robot/RobotExample.py"
  "../../../Mod/Robot/RobotExampleTrajectoryOutOfShapes.py"
  "../../../share/Mod/Robot/Lib/Kuka/kr125_2.pdf"
  "../../../share/Mod/Robot/Lib/Kuka/kr125_3.wrl"
  "../../../share/Mod/Robot/Lib/Kuka/kr16.wrl"
  "../../../share/Mod/Robot/Lib/Kuka/kr210.WRL"
  "../../../share/Mod/Robot/Lib/Kuka/kr500_1.csv"
  "../../../share/Mod/Robot/Lib/Kuka/kr500_1.wrl"
  "../../../share/Mod/Robot/Lib/Kuka/kr_125.csv"
  "../../../share/Mod/Robot/Lib/Kuka/kr_16.csv"
  "../../../share/Mod/Robot/Lib/Kuka/kr_16.pdf"
  "../../../share/Mod/Robot/Lib/Kuka/kr_210_2.csv"
  "../../../share/Mod/Robot/Lib/Kuka/kr_210_2.pdf"
  "../../../share/Mod/Robot/Lib/Kuka/kr_500_2.pdf"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/RobotScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
