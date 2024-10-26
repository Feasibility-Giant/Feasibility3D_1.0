# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Show

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Show" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/Containers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/DepGraphTools.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetail.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/mTempoVis.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/TVObserver.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/TVStack.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/ShowUtils.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Show/SceneDetails" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/Camera.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/ClipPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/ObjectClipPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/Pickability.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/VProperty.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Show/SceneDetails/Workbench.py"
    )
endif()

