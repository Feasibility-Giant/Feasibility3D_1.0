# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/TechDraw

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
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/TechDraw/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/TechDraw/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TestTechDrawApp.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TestTechDrawGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/TechDraw" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Templates" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/TechDraw" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/PAT" FILES_MATCHING REGEX "/[^/]*\\.pat[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/TechDraw" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/CSVdata" FILES_MATCHING REGEX "/[^/]*\\.csv[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/TechDraw" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/LineGroup" FILES_MATCHING REGEX "/[^/]*\\.csv[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/TechDraw" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Patterns" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/TechDraw" TYPE DIRECTORY FILES "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Symbols" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TechDrawTools" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandMoveView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandShareView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandAxoLengthDimension.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandPositionSectionView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandFillTemplateFields.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandVertexCreations.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/CommandHoleShaftFit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TaskMoveView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TaskShareView.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TaskFillTemplateFields.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TaskHoleShaftFit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TaskAddOffsetVertex.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TDToolsUtil.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TechDrawTools/TDToolsMovers.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TechDrawTools/Gui" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Gui/TaskMoveView.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Gui/TaskHoleShaftFit.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Gui/TaskAddOffsetVertex.ui"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/Gui/DlgPageChooser.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TDTest" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawHatchTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawProjectionGroupTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewAnnotationTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewImageTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewSymbolTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewDimensionTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewPartTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewSectionTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewBalloonTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/DrawViewDetailTest.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/TechDrawTestUtilities.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TDTest" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/TestHatch.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/TestImage.png"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/TestSymbol.svg"
    "/home/jarvis/Documents/freecad-source/src/Mod/TechDraw/TDTest/TestTemplate.svg"
    )
endif()

