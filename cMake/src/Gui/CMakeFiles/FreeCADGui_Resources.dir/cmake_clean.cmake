file(REMOVE_RECURSE
  "../../Ext/freecad/gui/RemoteDebugger.py"
  "../../Ext/freecad/gui/RemoteDebugger.ui"
  "../../share/3Dconnexion/3DConnexion.xml"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/FreeCADGui_Resources.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
