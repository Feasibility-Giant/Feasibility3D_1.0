# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/ReverseEngineering/Gui

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so"
         RPATH "/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jarvis/Documents/freecad-source/cMake/Mod/ReverseEngineering/ReverseEngineeringGui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/usr/lib/x86_64-linux-gnu/openmpi/lib:/home/jarvis/Documents/freecad-source/cMake/Mod/ReverseEngineering:/home/jarvis/Documents/freecad-source/cMake/Mod/Mesh:/home/jarvis/Documents/freecad-source/cMake/Mod/Part:/home/jarvis/Documents/freecad-source/cMake/Mod/Material:/home/jarvis/Documents/freecad-source/cMake/Mod/Points:/home/jarvis/Documents/freecad-source/cMake/lib:"
         NEW_RPATH "/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ReverseEngineeringGui.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/ReverseEngineering/Gui/CMakeFiles/ReverseEngineeringGui.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/ReverseEngineering/Resources/icons" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/ReverseEngineering/Gui/Resources/icons/ReverseEngineeringWorkbench.svg")
endif()
