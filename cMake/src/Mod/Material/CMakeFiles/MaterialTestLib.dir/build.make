# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jarvis/Documents/freecad-source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jarvis/Documents/freecad-source/cMake

# Utility rule file for MaterialTestLib.

# Include any custom commands dependencies for this target.
include src/Mod/Material/CMakeFiles/MaterialTestLib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Mod/Material/CMakeFiles/MaterialTestLib.dir/progress.make

share/Mod/Material/Resources/Materials/Test/Test\ Material.FCMat: /home/jarvis/Documents/freecad-source/src/Mod/Material/Resources/Materials/Test/Test\ Material.FCMat
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /home/jarvis/Documents/freecad-source/src/Mod/Material/Resources/Materials/Test/Test Material.FCMat to /home/jarvis/Documents/freecad-source/cMake/share/Mod/Material/Resources/Materials/Test/Test Material.FCMat"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Material && /usr/bin/cmake -E copy /home/jarvis/Documents/freecad-source/src/Mod/Material/Resources/Materials/Test/Test\ Material.FCMat /home/jarvis/Documents/freecad-source/cMake/share/Mod/Material/Resources/Materials/Test/Test\ Material.FCMat

MaterialTestLib: share/Mod/Material/Resources/Materials/Test/Test\ Material.FCMat
MaterialTestLib: src/Mod/Material/CMakeFiles/MaterialTestLib.dir/build.make
.PHONY : MaterialTestLib

# Rule to build all files generated by this target.
src/Mod/Material/CMakeFiles/MaterialTestLib.dir/build: MaterialTestLib
.PHONY : src/Mod/Material/CMakeFiles/MaterialTestLib.dir/build

src/Mod/Material/CMakeFiles/MaterialTestLib.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Material && $(CMAKE_COMMAND) -P CMakeFiles/MaterialTestLib.dir/cmake_clean.cmake
.PHONY : src/Mod/Material/CMakeFiles/MaterialTestLib.dir/clean

src/Mod/Material/CMakeFiles/MaterialTestLib.dir/depend:
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/Mod/Material /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/Mod/Material /home/jarvis/Documents/freecad-source/cMake/src/Mod/Material/CMakeFiles/MaterialTestLib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Mod/Material/CMakeFiles/MaterialTestLib.dir/depend

