configure_file(freecad.rc.cmake ${CMAKE_CURRENT_BINARY_DIR}/feasibility3D.rc)
configure_file(freecadCmd.rc.cmake ${CMAKE_CURRENT_BINARY_DIR}/feasibility3DCmd.rc)
file(COPY icon.ico DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

if(BUILD_GUI)
    include_directories(
        ${Boost_INCLUDE_DIRS}
        ${COIN3D_INCLUDE_DIRS}
        ${ZLIB_INCLUDE_DIR}
        ${QtWidgets_INCLUDE_DIRS}
        ${QT_INCLUDE_DIR}
        ${PYTHON_INCLUDE_DIRS}
        ${XercesC_INCLUDE_DIRS}
    )
else(BUILD_GUI)
    include_directories(
        ${Boost_INCLUDE_DIRS}
        ${ZLIB_INCLUDE_DIR}
        ${QT_INCLUDE_DIR}
        ${PYTHON_INCLUDE_DIRS}
        ${XercesC_INCLUDE_DIRS}
    )
endif(BUILD_GUI)

######################## Feasibility3DMain ########################
if(BUILD_GUI)

    SET(Feasibility3D_SRCS
        ${CMAKE_CURRENT_BINARY_DIR}/feasibility3D.rc
        icon.ico
        MainGui.cpp
    )

    SET(Feasibility3D_LIBS
        FreeCADGui
    )

    if(NOT BUILD_DYNAMIC_LINK_PYTHON)
        # executables have to be linked against python libraries,
        # because extension modules are not.
        list(APPEND Feasibility3D_LIBS
            ${PYTHON_LIBRARIES}
        )
    endif(NOT BUILD_DYNAMIC_LINK_PYTHON)

    add_executable(Feasibility3DMain WIN32 ${Feasibility3D_SRCS})
    target_link_libraries(Feasibility3DMain ${Feasibility3D_LIBS})
    if (FREECAD_WARN_ERROR)
        target_compile_warn_error(Feasibility3DMain)
    endif()

    SET_BIN_DIR(Feasibility3DMain Feasibility3D)

    if(WIN32)
        INSTALL(TARGETS Feasibility3DMain
            RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
            LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )
    elseif(APPLE AND NOT BUILD_WITH_CONDA)
        INSTALL(TARGETS Feasibility3DMain
        RUNTIME DESTINATION MacOS
            LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )
    else()
        INSTALL(TARGETS Feasibility3DMain
            RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
    endif()
endif(BUILD_GUI)

######################## Feasibility3DMainCmd ########################

SET(Feasibility3DMainCmd_SRCS
    ${CMAKE_CURRENT_BINARY_DIR}/feasibility3DCmd.rc
    icon.ico
    MainCmd.cpp
)

add_executable(Feasibility3DMainCmd ${Feasibility3DMainCmd_SRCS})

SET(Feasibility3DMainCmd_LIBS
    FreeCADApp
    ${QtCore_LIBRARIES}
    ${QtXml_LIBRARIES}
)

if(NOT BUILD_DYNAMIC_LINK_PYTHON)
    # executables have to be linked against python libraries,
    # because extension modules are not.
    list(APPEND Feasibility3DMainCmd_LIBS
        ${PYTHON_LIBRARIES}
    )
endif(NOT BUILD_DYNAMIC_LINK_PYTHON)

target_link_libraries(Feasibility3DMainCmd
    ${Feasibility3DMainCmd_LIBS}
)
if (FREECAD_WARN_ERROR)
    target_compile_warn_error(Feasibility3DMainCmd)
endif()

SET_BIN_DIR(Feasibility3DMainCmd Feasibility3DCmd)

if(WIN32)
    INSTALL(TARGETS Feasibility3DMainCmd
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
elseif(APPLE AND NOT BUILD_WITH_CONDA)
    INSTALL(TARGETS Feasibility3DMainCmd
        RUNTIME DESTINATION MacOS
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
else()
    INSTALL(TARGETS Feasibility3DMainCmd
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
endif()

######################## Feasibility3DMainPy ########################

SET(Feasibility3DMainPy_SRCS
    MainPy.cpp
)

add_library(Feasibility3DMainPy SHARED ${Feasibility3DMainPy_SRCS})

target_link_libraries(Feasibility3DMainPy FreeCADApp)
if (FREECAD_WARN_ERROR)
    target_compile_warn_error(Feasibility3DMainPy)
endif()

SET_BIN_DIR(Feasibility3DMainPy Feasibility3D)
SET_PYTHON_PREFIX_SUFFIX(Feasibility3DMainPy)

if(WIN32)
    INSTALL(TARGETS Feasibility3DMainPy
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
else(WIN32)
    INSTALL(TARGETS Feasibility3DMainPy
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
endif(WIN32)

######################## Feasibility3DGuiPy ########################
if(BUILD_GUI)

    SET(Feasibility3DGuiPy_SRCS
        FreeCADGuiPy.cpp
    )

    add_library(Feasibility3DGuiPy SHARED ${Feasibility3DGuiPy_SRCS})

    target_link_libraries(Feasibility3DGuiPy FreeCADGui)
    if (FREECAD_WARN_ERROR)
        target_compile_warn_error(Feasibility3DGuiPy)
    endif()

    SET_BIN_DIR(Feasibility3DGuiPy Feasibility3DGui)
    SET_PYTHON_PREFIX_SUFFIX(Feasibility3DGuiPy)
    if(WIN32)
        # Name clash with target "FreeCADGui"
        # Must be called "Feasibility3DGuiPy_d" and "Feasibility3DGuiPy" to work so override default
        set_target_properties(Feasibility3DGuiPy PROPERTIES PDB_NAME_DEBUG "Feasibility3DGuiPy_d")
        set_target_properties(Feasibility3DGuiPy PROPERTIES PDB_NAME_RELEASE "Feasibility3DGuiPy")
    endif(WIN32)

    if(WIN32)
        INSTALL(TARGETS Feasibility3DGuiPy
            RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
            LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )
    else(WIN32)
        INSTALL(TARGETS Feasibility3DGuiPy
            LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )
    endif(WIN32)
endif(BUILD_GUI)
