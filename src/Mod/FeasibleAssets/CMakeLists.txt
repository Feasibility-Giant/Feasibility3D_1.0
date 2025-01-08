cmake_minimum_required(VERSION 3.13)

# Install files - using relative paths from this CMakeLists.txt location
install(
    DIRECTORY feasibleassets
    DESTINATION Mod/FeasibleAssets
    FILES_MATCHING PATTERN "*.py"
)

install(
    DIRECTORY Resources
    DESTINATION Mod/FeasibleAssets
    FILES_MATCHING
    PATTERN "*.svg"
    PATTERN "*.ui"
    PATTERN "*.qm"
)