# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/AddonManager

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/AddonManager/Widgets/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/add_toolbar_button_dialog.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/Addon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonStats.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManager.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManager.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_cache.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_connection_checker.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_dependency_installer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_add_content.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_license_selector.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_licenses_table.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_metadata_checker.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_person_editor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_people_table.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_predictor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_devmode_validators.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_firstrun.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_freecad_interface.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_git.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_installer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_installer_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_licenses.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_macro.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_macro_parser.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_metadata.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_package_details_controller.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_preferences_defaults.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_pyside_interface.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_readme_controller.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_update_all_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_uninstaller.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_uninstaller_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_utilities.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_workers_installation.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_workers_startup.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/addonmanager_workers_utility.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerOptions.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerOptions_AddCustomRepository.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerOptions.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/ALLOWED_PYTHON_PACKAGES.txt"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/change_branch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/change_branch.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/compact_view.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/composite_view.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/dependency_resolution_dialog.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_add_content.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_advanced_freecad_versions.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_copyright_info.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_dependencies.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_edit_dependency.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_freecad_versions.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_license.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_licenses_table.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_people.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_people_table.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_select_from_list.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/developer_mode_tags.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/expanded_view.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/first_run.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/install_to_toolbar.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/loading.html"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/manage_python_dependencies.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/NetworkManager.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/package_list.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/PythonDependencyUpdateDialog.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/select_toolbar_dialog.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/TestAddonManagerApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/update_all.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/TestAddonManagerGui.py"
    "/home/jarvis/Documents/freecad-source/cMake/src/Mod/AddonManager/AddonManager_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/test_information.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/app" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/mocks.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_addon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_cache.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_dependency_installer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_freecad_interface.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_git.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_installer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_macro.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_macro_parser.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_metadata.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_utilities.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/app/test_uninstaller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/gui_mocks.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/test_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/test_installer_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/test_update_all_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/test_uninstaller_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/test_workers_startup.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/gui/test_workers_utility.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/data" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/addon_update_stats.json"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/bad_macro_metadata.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/combination.xml"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/corrupted_metadata.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/depends_on_all_workbenches.xml"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/DoNothing.FCMacro"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/git_submodules.txt"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/good_macro_metadata.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/good_package.xml"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/icon_cache.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/icon_cache.zip.sha1"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/macro_only.xml"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/macro_template.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/MacrosRecipesWikiPage.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/metadata.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/missing_macro_metadata.FCStd"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/prefpack_only.xml"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/test_addon_with_fcmacro.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/test_github_style_repo.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/test_repo.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/test_simple_repo.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/test_version_detection.xml"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/TestWorkbench.zip"
    "/home/jarvis/Documents/freecad-source/src/Mod/AddonManager/AddonManagerTest/data/workbench_only.xml"
    )
endif()

