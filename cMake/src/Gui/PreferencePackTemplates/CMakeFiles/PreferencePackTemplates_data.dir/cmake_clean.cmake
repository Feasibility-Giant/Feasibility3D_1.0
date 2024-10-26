file(REMOVE_RECURSE
  "../../../share/Gui/PreferencePackTemplates/Arch_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/Console_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/Draft_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/Editor_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/Editor_Font.cfg"
  "../../../share/Gui/PreferencePackTemplates/Main_window_layout.cfg"
  "../../../share/Gui/PreferencePackTemplates/Part_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/Path_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/Shortcuts.cfg"
  "../../../share/Gui/PreferencePackTemplates/Sketcher_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/TechDraw_Colors.cfg"
  "../../../share/Gui/PreferencePackTemplates/View.cfg"
  "../../../share/Gui/PreferencePackTemplates/Window_Colors.cfg"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/PreferencePackTemplates_data.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
