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

# Utility rule file for FreeCADMainPy_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/progress.make

src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps: /usr/lib/qt5/bin/moc
src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps: /usr/lib/qt5/bin/uic
src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps: lib/libFreeCADApp.so

FreeCADMainPy_autogen_timestamp_deps: src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps
FreeCADMainPy_autogen_timestamp_deps: src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/build.make
.PHONY : FreeCADMainPy_autogen_timestamp_deps

# Rule to build all files generated by this target.
src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/build: FreeCADMainPy_autogen_timestamp_deps
.PHONY : src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/build

src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/Main && $(CMAKE_COMMAND) -P CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/clean

src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/depend:
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/Main /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/Main /home/jarvis/Documents/freecad-source/cMake/src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Main/CMakeFiles/FreeCADMainPy_autogen_timestamp_deps.dir/depend
