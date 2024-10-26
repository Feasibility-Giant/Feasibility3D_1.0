file(REMOVE_RECURSE
  "../../../Mod/Show/Containers.py"
  "../../../Mod/Show/DepGraphTools.py"
  "../../../Mod/Show/SceneDetail.py"
  "../../../Mod/Show/SceneDetails/Camera.py"
  "../../../Mod/Show/SceneDetails/ClipPlane.py"
  "../../../Mod/Show/SceneDetails/ObjectClipPlane.py"
  "../../../Mod/Show/SceneDetails/Pickability.py"
  "../../../Mod/Show/SceneDetails/VProperty.py"
  "../../../Mod/Show/SceneDetails/Workbench.py"
  "../../../Mod/Show/SceneDetails/__init__.py"
  "../../../Mod/Show/ShowUtils.py"
  "../../../Mod/Show/TVObserver.py"
  "../../../Mod/Show/TVStack.py"
  "../../../Mod/Show/__init__.py"
  "../../../Mod/Show/mTempoVis.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Show.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
