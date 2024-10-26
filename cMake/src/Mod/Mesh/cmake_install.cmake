# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Mesh

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
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Mesh" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/BuildRegularGeoms.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/MeshEnums.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/MeshTestsApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Mesh/App/TestData" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/TestData/NASTRAN_Test_GRID_CQUAD4.bdf"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/TestData/NASTRAN_Test_Delimited_GRID_CQUAD4.bdf"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/TestData/NASTRAN_Test_GRIDSTAR_CQUAD4.bdf"
    "/home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/TestData/NASTRAN_Test_GRID_CTRIA3.bdf"
    )
endif()

