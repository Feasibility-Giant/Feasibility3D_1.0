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

# Include any dependencies generated for this target.
include src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.make

# Include the progress variables for this target.
include src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/progress.make

# Include the compile flags for this target's objects.
include src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make

src/3rdParty/salomesmesh/DriverDAT_autogen/timestamp: /usr/lib/qt5/bin/uic
src/3rdParty/salomesmesh/DriverDAT_autogen/timestamp: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic UIC for target DriverDAT"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/cmake -E cmake_autogen /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh/CMakeFiles/DriverDAT_autogen.dir/AutogenInfo.json ""
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/cmake -E touch /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh/DriverDAT_autogen/timestamp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DAT_Test.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DAT_Test.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DAT_Test.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DAT_Test.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.s

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.s

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.s

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.s

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.s

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.s

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/flags.make
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o: /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o -MF CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o.d -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o -c /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp > CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.i

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp -o CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.s

# Object files for target DriverDAT
DriverDAT_OBJECTS = \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o" \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o" \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o" \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o" \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o" \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o" \
"CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o"

# External object files for target DriverDAT
DriverDAT_EXTERNAL_OBJECTS =

lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DAT_Test.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMDS_Mesh.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Document.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_R_SMESHDS_Mesh.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMDS_Mesh.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Document.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/src/DriverDAT/DriverDAT_W_SMESHDS_Mesh.cpp.o
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/build.make
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libcurl.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libpthread.a
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libsz.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libz.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libdl.a
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libm.so
lib/libDriverDAT.so: lib/libSMDS.so
lib/libDriverDAT.so: lib/libDriver.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersVerdict-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkverdict-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOMPIParallel-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOParallel-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOGeometry-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOImage-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkImagingCore-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5_hl.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOXML-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOXMLParser-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkParallelMPI-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkParallelCore-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOLegacy-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkIOCore-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libmpi.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingUI-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingCore-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersSources-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersCore-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkCommonMisc-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkCommonMath-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkkissfft-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libX11.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtkCommonCore-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libtbb.so.12.11
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libvtksys-9.1.so.9.1.0
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libcurl.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libpthread.a
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libsz.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libz.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libdl.a
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libm.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKOffset.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKFillet.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKFeat.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKSTL.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKBin.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKBinL.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKMeshVS.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKRWMesh.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKXDESTEP.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKSTEP.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKSTEPAttr.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKSTEP209.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKSTEPBase.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKXDEIGES.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKIGES.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKXSBase.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKBool.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKXCAF.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKVCAF.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKCAF.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKBO.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKPrim.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKV3d.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKMesh.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKShHealing.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKHLR.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKTopAlgo.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKGeomAlgo.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKBRep.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKGeomBase.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKG3d.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKG2d.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKService.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKMath.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libfreeimage.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKLCAF.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKCDF.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libTKernel.so.7.6.3
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libtbb.so
lib/libDriverDAT.so: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
lib/libDriverDAT.so: src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX shared library ../../../lib/libDriverDAT.so"
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DriverDAT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/build: lib/libDriverDAT.so
.PHONY : src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/build

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh && $(CMAKE_COMMAND) -P CMakeFiles/DriverDAT.dir/cmake_clean.cmake
.PHONY : src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/clean

src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/depend: src/3rdParty/salomesmesh/DriverDAT_autogen/timestamp
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/3rdParty/salomesmesh /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh /home/jarvis/Documents/freecad-source/cMake/src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/3rdParty/salomesmesh/CMakeFiles/DriverDAT.dir/depend
