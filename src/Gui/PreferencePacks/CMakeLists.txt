
SET(PreferencePacks_Files
"package.xml"
)

SET(PreferencePacks_Directories
"Feasibility3D Classic"
"Dark behave"
"Feasibility3D Light"
"Feasibility3D Dark"
)

ADD_CUSTOM_TARGET(PreferencePacks_data ALL
SOURCES ${PreferencePacks_Files} ${PreferencePacks_Directories}
)

FILE(COPY ${PreferencePacks_Files} ${PreferencePacks_Directories} DESTINATION "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_DATADIR}/Gui/PreferencePacks")

INSTALL(
FILES
    ${PreferencePacks_Files}
DESTINATION
    ${CMAKE_INSTALL_DATADIR}/Gui/PreferencePacks
)

INSTALL(
DIRECTORY
    ${PreferencePacks_Directories}
DESTINATION
    ${CMAKE_INSTALL_DATADIR}/Gui/PreferencePacks
)