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

# Utility rule file for Tests_run_autogen.

# Include any custom commands dependencies for this target.
include tests/CMakeFiles/Tests_run_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/Tests_run_autogen.dir/progress.make

tests/CMakeFiles/Tests_run_autogen: tests/Tests_run_autogen/timestamp

tests/Tests_run_autogen/timestamp: /usr/lib/qt5/bin/moc
tests/Tests_run_autogen/timestamp: /usr/lib/qt5/bin/uic
tests/Tests_run_autogen/timestamp: tests/CMakeFiles/Tests_run_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Tests_run"
	cd /home/jarvis/Documents/freecad-source/cMake/tests && /usr/bin/cmake -E cmake_autogen /home/jarvis/Documents/freecad-source/cMake/tests/CMakeFiles/Tests_run_autogen.dir/AutogenInfo.json ""
	cd /home/jarvis/Documents/freecad-source/cMake/tests && /usr/bin/cmake -E touch /home/jarvis/Documents/freecad-source/cMake/tests/Tests_run_autogen/timestamp

Tests_run_autogen: tests/CMakeFiles/Tests_run_autogen
Tests_run_autogen: tests/Tests_run_autogen/timestamp
Tests_run_autogen: tests/CMakeFiles/Tests_run_autogen.dir/build.make
.PHONY : Tests_run_autogen

# Rule to build all files generated by this target.
tests/CMakeFiles/Tests_run_autogen.dir/build: Tests_run_autogen
.PHONY : tests/CMakeFiles/Tests_run_autogen.dir/build

tests/CMakeFiles/Tests_run_autogen.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/tests && $(CMAKE_COMMAND) -P CMakeFiles/Tests_run_autogen.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/Tests_run_autogen.dir/clean

tests/CMakeFiles/Tests_run_autogen.dir/depend:
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/tests /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/tests /home/jarvis/Documents/freecad-source/cMake/tests/CMakeFiles/Tests_run_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/Tests_run_autogen.dir/depend

