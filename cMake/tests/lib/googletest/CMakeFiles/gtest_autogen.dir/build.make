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

# Utility rule file for gtest_autogen.

# Include any custom commands dependencies for this target.
include tests/lib/googletest/CMakeFiles/gtest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/lib/googletest/CMakeFiles/gtest_autogen.dir/progress.make

tests/lib/googletest/CMakeFiles/gtest_autogen: tests/lib/googletest/gtest_autogen/timestamp

tests/lib/googletest/gtest_autogen/timestamp: /usr/lib/qt5/bin/moc
tests/lib/googletest/gtest_autogen/timestamp: /usr/lib/qt5/bin/uic
tests/lib/googletest/gtest_autogen/timestamp: tests/lib/googletest/CMakeFiles/gtest_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gtest"
	cd /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest && /usr/bin/cmake -E cmake_autogen /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest/CMakeFiles/gtest_autogen.dir/AutogenInfo.json ""
	cd /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest && /usr/bin/cmake -E touch /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest/gtest_autogen/timestamp

gtest_autogen: tests/lib/googletest/CMakeFiles/gtest_autogen
gtest_autogen: tests/lib/googletest/gtest_autogen/timestamp
gtest_autogen: tests/lib/googletest/CMakeFiles/gtest_autogen.dir/build.make
.PHONY : gtest_autogen

# Rule to build all files generated by this target.
tests/lib/googletest/CMakeFiles/gtest_autogen.dir/build: gtest_autogen
.PHONY : tests/lib/googletest/CMakeFiles/gtest_autogen.dir/build

tests/lib/googletest/CMakeFiles/gtest_autogen.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_autogen.dir/cmake_clean.cmake
.PHONY : tests/lib/googletest/CMakeFiles/gtest_autogen.dir/clean

tests/lib/googletest/CMakeFiles/gtest_autogen.dir/depend:
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/tests/lib/googletest /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest /home/jarvis/Documents/freecad-source/cMake/tests/lib/googletest/CMakeFiles/gtest_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/lib/googletest/CMakeFiles/gtest_autogen.dir/depend

