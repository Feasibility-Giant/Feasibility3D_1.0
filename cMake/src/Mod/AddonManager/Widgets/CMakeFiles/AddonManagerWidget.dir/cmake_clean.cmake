file(REMOVE_RECURSE
  "../../../../Mod/AddonManager/Widgets/__init__.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_colors.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_addon_buttons.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_filter_selector.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_global_buttons.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_package_details_view.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_progress_bar.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_readme_browser.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_search.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_view_control_bar.py"
  "../../../../Mod/AddonManager/Widgets/addonmanager_widget_view_selector.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/AddonManagerWidget.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
