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

# Utility rule file for MeshScripts.

# Include any custom commands dependencies for this target.
include src/Mod/Mesh/CMakeFiles/MeshScripts.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Mod/Mesh/CMakeFiles/MeshScripts.dir/progress.make

Mod/Mesh/Init.py: /home/jarvis/Documents/freecad-source/src/Mod/Mesh/Init.py
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /home/jarvis/Documents/freecad-source/src/Mod/Mesh/Init.py to /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/Init.py"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh && /usr/bin/cmake -E copy /home/jarvis/Documents/freecad-source/src/Mod/Mesh/Init.py /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/Init.py

Mod/Mesh/BuildRegularGeoms.py: /home/jarvis/Documents/freecad-source/src/Mod/Mesh/BuildRegularGeoms.py
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying /home/jarvis/Documents/freecad-source/src/Mod/Mesh/BuildRegularGeoms.py to /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/BuildRegularGeoms.py"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh && /usr/bin/cmake -E copy /home/jarvis/Documents/freecad-source/src/Mod/Mesh/BuildRegularGeoms.py /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/BuildRegularGeoms.py

Mod/Mesh/MeshEnums.py: /home/jarvis/Documents/freecad-source/src/Mod/Mesh/MeshEnums.py
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying /home/jarvis/Documents/freecad-source/src/Mod/Mesh/MeshEnums.py to /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/MeshEnums.py"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh && /usr/bin/cmake -E copy /home/jarvis/Documents/freecad-source/src/Mod/Mesh/MeshEnums.py /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/MeshEnums.py

Mod/Mesh/MeshTestsApp.py: /home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/MeshTestsApp.py
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying /home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/MeshTestsApp.py to /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/MeshTestsApp.py"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh && /usr/bin/cmake -E copy /home/jarvis/Documents/freecad-source/src/Mod/Mesh/App/MeshTestsApp.py /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/MeshTestsApp.py

Mod/Mesh/InitGui.py: /home/jarvis/Documents/freecad-source/src/Mod/Mesh/InitGui.py
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Copying /home/jarvis/Documents/freecad-source/src/Mod/Mesh/InitGui.py to /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/InitGui.py"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh && /usr/bin/cmake -E copy /home/jarvis/Documents/freecad-source/src/Mod/Mesh/InitGui.py /home/jarvis/Documents/freecad-source/cMake/Mod/Mesh/InitGui.py

MeshScripts: Mod/Mesh/BuildRegularGeoms.py
MeshScripts: Mod/Mesh/Init.py
MeshScripts: Mod/Mesh/InitGui.py
MeshScripts: Mod/Mesh/MeshEnums.py
MeshScripts: Mod/Mesh/MeshTestsApp.py
MeshScripts: src/Mod/Mesh/CMakeFiles/MeshScripts.dir/build.make
.PHONY : MeshScripts

# Rule to build all files generated by this target.
src/Mod/Mesh/CMakeFiles/MeshScripts.dir/build: MeshScripts
.PHONY : src/Mod/Mesh/CMakeFiles/MeshScripts.dir/build

src/Mod/Mesh/CMakeFiles/MeshScripts.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh && $(CMAKE_COMMAND) -P CMakeFiles/MeshScripts.dir/cmake_clean.cmake
.PHONY : src/Mod/Mesh/CMakeFiles/MeshScripts.dir/clean

src/Mod/Mesh/CMakeFiles/MeshScripts.dir/depend:
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/Mod/Mesh /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh /home/jarvis/Documents/freecad-source/cMake/src/Mod/Mesh/CMakeFiles/MeshScripts.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Mod/Mesh/CMakeFiles/MeshScripts.dir/depend
