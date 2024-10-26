# Install script for directory: /home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Gui/PreferencePackTemplates" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Arch_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Console_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Draft_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Editor_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Editor_Font.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Main_window_layout.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Part_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Path_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Shortcuts.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Sketcher_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/TechDraw_Colors.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/View.cfg"
    "/home/jarvis/Documents/freecad-source/src/Gui/PreferencePackTemplates/Window_Colors.cfg"
    )
endif()

