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

# Utility rule file for RobotGui_autogen.

# Include any custom commands dependencies for this target.
include src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/progress.make

src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen: src/Mod/Robot/Gui/RobotGui_autogen/timestamp

src/Mod/Robot/Gui/RobotGui_autogen/timestamp: /usr/lib/qt5/bin/moc
src/Mod/Robot/Gui/RobotGui_autogen/timestamp: /usr/lib/qt5/bin/uic
src/Mod/Robot/Gui/RobotGui_autogen/timestamp: src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target RobotGui"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui && /usr/bin/cmake -E cmake_autogen /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/AutogenInfo.json ""
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui && /usr/bin/cmake -E touch /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui/RobotGui_autogen/timestamp

RobotGui_autogen: src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen
RobotGui_autogen: src/Mod/Robot/Gui/RobotGui_autogen/timestamp
RobotGui_autogen: src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/build.make
.PHONY : RobotGui_autogen

# Rule to build all files generated by this target.
src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/build: RobotGui_autogen
.PHONY : src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/build

src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui && $(CMAKE_COMMAND) -P CMakeFiles/RobotGui_autogen.dir/cmake_clean.cmake
.PHONY : src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/clean

src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/depend:
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/Mod/Robot/Gui /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui /home/jarvis/Documents/freecad-source/cMake/src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Mod/Robot/Gui/CMakeFiles/RobotGui_autogen.dir/depend
