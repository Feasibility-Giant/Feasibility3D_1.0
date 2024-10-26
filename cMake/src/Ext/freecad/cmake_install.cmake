# Install script for directory: /home/jarvis/Documents/freecad-source/src/Ext/freecad

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/python3.12/dist-packages/freecad/__init__.py;/usr/local/lib/python3.12/dist-packages/freecad/freecad_doc.py;/usr/local/lib/python3.12/dist-packages/freecad/part.py;/usr/local/lib/python3.12/dist-packages/freecad/partdesign.py;/usr/local/lib/python3.12/dist-packages/freecad/project_utility.py;/usr/local/lib/python3.12/dist-packages/freecad/sketcher.py;/usr/local/lib/python3.12/dist-packages/freecad/UiTools.py;/usr/local/lib/python3.12/dist-packages/freecad/utils.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib/python3.12/dist-packages/freecad" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/cMake/Ext/freecad/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/freecad_doc.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/part.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/partdesign.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/project_utility.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/sketcher.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/UiTools.py"
    "/home/jarvis/Documents/freecad-source/src/Ext/freecad/utils.py"
    )
endif()

