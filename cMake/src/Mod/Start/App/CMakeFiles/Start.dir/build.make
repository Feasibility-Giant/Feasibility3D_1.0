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
include src/Mod/Start/App/CMakeFiles/Start.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Mod/Start/App/CMakeFiles/Start.dir/progress.make

# Include the compile flags for this target's objects.
include src/Mod/Start/App/CMakeFiles/Start.dir/flags.make

src/Mod/Start/App/Start_autogen/timestamp: /usr/lib/qt5/bin/moc
src/Mod/Start/App/Start_autogen/timestamp: /usr/lib/qt5/bin/uic
src/Mod/Start/App/Start_autogen/timestamp: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Start"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/cmake -E cmake_autogen /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App/CMakeFiles/Start_autogen.dir/AutogenInfo.json ""
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/cmake -E touch /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App/Start_autogen/timestamp

src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/flags.make
src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o: src/Mod/Start/App/Start_autogen/mocs_compilation.cpp
src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o -c /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App/Start_autogen/mocs_compilation.cpp

src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App/Start_autogen/mocs_compilation.cpp > CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.i

src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App/Start_autogen/mocs_compilation.cpp -o CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.s

src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/flags.make
src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Start/App/AppStart.cpp
src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.o -MF CMakeFiles/Start.dir/AppStart.cpp.o.d -o CMakeFiles/Start.dir/AppStart.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Start/App/AppStart.cpp

src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Start.dir/AppStart.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Start/App/AppStart.cpp > CMakeFiles/Start.dir/AppStart.cpp.i

src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Start.dir/AppStart.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Start/App/AppStart.cpp -o CMakeFiles/Start.dir/AppStart.cpp.s

src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/flags.make
src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Start/App/DisplayedFilesModel.cpp
src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o -MF CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o.d -o CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Start/App/DisplayedFilesModel.cpp

src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Start.dir/DisplayedFilesModel.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Start/App/DisplayedFilesModel.cpp > CMakeFiles/Start.dir/DisplayedFilesModel.cpp.i

src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Start.dir/DisplayedFilesModel.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Start/App/DisplayedFilesModel.cpp -o CMakeFiles/Start.dir/DisplayedFilesModel.cpp.s

src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/flags.make
src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Start/App/ExamplesModel.cpp
src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.o -MF CMakeFiles/Start.dir/ExamplesModel.cpp.o.d -o CMakeFiles/Start.dir/ExamplesModel.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Start/App/ExamplesModel.cpp

src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Start.dir/ExamplesModel.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Start/App/ExamplesModel.cpp > CMakeFiles/Start.dir/ExamplesModel.cpp.i

src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Start.dir/ExamplesModel.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Start/App/ExamplesModel.cpp -o CMakeFiles/Start.dir/ExamplesModel.cpp.s

src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/flags.make
src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Start/App/PreCompiled.cpp
src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.o -MF CMakeFiles/Start.dir/PreCompiled.cpp.o.d -o CMakeFiles/Start.dir/PreCompiled.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Start/App/PreCompiled.cpp

src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Start.dir/PreCompiled.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Start/App/PreCompiled.cpp > CMakeFiles/Start.dir/PreCompiled.cpp.i

src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Start.dir/PreCompiled.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Start/App/PreCompiled.cpp -o CMakeFiles/Start.dir/PreCompiled.cpp.s

src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/flags.make
src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Start/App/RecentFilesModel.cpp
src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.o: src/Mod/Start/App/CMakeFiles/Start.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.o -MF CMakeFiles/Start.dir/RecentFilesModel.cpp.o.d -o CMakeFiles/Start.dir/RecentFilesModel.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Start/App/RecentFilesModel.cpp

src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Start.dir/RecentFilesModel.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Start/App/RecentFilesModel.cpp > CMakeFiles/Start.dir/RecentFilesModel.cpp.i

src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Start.dir/RecentFilesModel.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Start/App/RecentFilesModel.cpp -o CMakeFiles/Start.dir/RecentFilesModel.cpp.s

# Object files for target Start
Start_OBJECTS = \
"CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Start.dir/AppStart.cpp.o" \
"CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o" \
"CMakeFiles/Start.dir/ExamplesModel.cpp.o" \
"CMakeFiles/Start.dir/PreCompiled.cpp.o" \
"CMakeFiles/Start.dir/RecentFilesModel.cpp.o"

# External object files for target Start
Start_EXTERNAL_OBJECTS =

Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/Start_autogen/mocs_compilation.cpp.o
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/AppStart.cpp.o
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/DisplayedFilesModel.cpp.o
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/ExamplesModel.cpp.o
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/PreCompiled.cpp.o
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/RecentFilesModel.cpp.o
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/build.make
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libcurl.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libpthread.a
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libsz.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libz.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libdl.a
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libm.so
Mod/Start/Start.so: lib/libFreeCADApp.so
Mod/Start/Start.so: lib/libFreeCADBase.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libcurl.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libpthread.a
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libsz.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libz.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libdl.a
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libm.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libpython3.12.so
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.83.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libfmt.so.9.1.0
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.15.13
Mod/Start/Start.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
Mod/Start/Start.so: src/Mod/Start/App/CMakeFiles/Start.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared library ../../../../Mod/Start/Start.so"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Start.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Mod/Start/App/CMakeFiles/Start.dir/build: Mod/Start/Start.so
.PHONY : src/Mod/Start/App/CMakeFiles/Start.dir/build

src/Mod/Start/App/CMakeFiles/Start.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App && $(CMAKE_COMMAND) -P CMakeFiles/Start.dir/cmake_clean.cmake
.PHONY : src/Mod/Start/App/CMakeFiles/Start.dir/clean

src/Mod/Start/App/CMakeFiles/Start.dir/depend: src/Mod/Start/App/Start_autogen/timestamp
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/Mod/Start/App /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App /home/jarvis/Documents/freecad-source/cMake/src/Mod/Start/App/CMakeFiles/Start.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Mod/Start/App/CMakeFiles/Start.dir/depend

