# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Idf

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Idf/Idflibs" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/License.txt"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/0603_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/0805_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/1206_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/1210_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/1812_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/2225_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/2512_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/CAP_50SGV_8_10.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/EPL22_6_16.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/footprints_models.csv"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/I22_2_5_16.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/I22_2_5_16withEPL22_6_16.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/MSOP_10.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/RLF_12545.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/RLF_7030.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SMB_DO_214AA.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SMC_DO_214AB.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOD_323.igs"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOD_323.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOD_523.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT23.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT404.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT428_DPAK.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT_323_3.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT_96.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/TCMT1107_4.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/TSM_103_01_L_DV_A.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/TSM_104_01_L_DV_A.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/TSS0P_8.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/VC0603_SMD.stp"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/RLF_12545.igs"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT23.igs"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idflibs/SOT404.igs"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Idf" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Idf/Idf.py"
    )
endif()

