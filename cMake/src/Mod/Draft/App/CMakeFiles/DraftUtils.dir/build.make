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
include src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/progress.make

# Include the compile flags for this target's objects.
include src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/flags.make

src/Mod/Draft/App/DraftUtils_autogen/timestamp: /usr/lib/qt5/bin/moc
src/Mod/Draft/App/DraftUtils_autogen/timestamp: /usr/lib/qt5/bin/uic
src/Mod/Draft/App/DraftUtils_autogen/timestamp: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target DraftUtils"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/cmake -E cmake_autogen /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/CMakeFiles/DraftUtils_autogen.dir/AutogenInfo.json ""
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/cmake -E touch /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/DraftUtils_autogen/timestamp

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/flags.make
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o: src/Mod/Draft/App/DraftUtils_autogen/mocs_compilation.cpp
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o -MF CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o -c /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/DraftUtils_autogen/mocs_compilation.cpp

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/DraftUtils_autogen/mocs_compilation.cpp > CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.i

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/DraftUtils_autogen/mocs_compilation.cpp -o CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.s

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/flags.make
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtils.cpp
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o -MF CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o.d -o CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtils.cpp

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtils.cpp > CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.i

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtils.cpp -o CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.s

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/flags.make
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtilsPy.cpp
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o -MF CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o.d -o CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtilsPy.cpp

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtilsPy.cpp > CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.i

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/AppDraftUtilsPy.cpp -o CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.s

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/flags.make
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o: /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/PreCompiled.cpp
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o -MF CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o.d -o CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o -c /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/PreCompiled.cpp

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DraftUtils.dir/PreCompiled.cpp.i"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/PreCompiled.cpp > CMakeFiles/DraftUtils.dir/PreCompiled.cpp.i

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DraftUtils.dir/PreCompiled.cpp.s"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jarvis/Documents/freecad-source/src/Mod/Draft/App/PreCompiled.cpp -o CMakeFiles/DraftUtils.dir/PreCompiled.cpp.s

# Object files for target DraftUtils
DraftUtils_OBJECTS = \
"CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o" \
"CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o" \
"CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o"

# External object files for target DraftUtils
DraftUtils_EXTERNAL_OBJECTS =

Mod/Draft/DraftUtils.so: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DraftUtils_autogen/mocs_compilation.cpp.o
Mod/Draft/DraftUtils.so: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtils.cpp.o
Mod/Draft/DraftUtils.so: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/AppDraftUtilsPy.cpp.o
Mod/Draft/DraftUtils.so: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/PreCompiled.cpp.o
Mod/Draft/DraftUtils.so: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/build.make
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libcurl.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libpthread.a
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libsz.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libz.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libdl.a
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libm.so
Mod/Draft/DraftUtils.so: Mod/Part/Part.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKMesh.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKOffset.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKFillet.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKHLR.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKFeat.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKIGES.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKBool.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKBO.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKPrim.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKSTL.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKSTEP.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKSTEPAttr.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKSTEP209.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKSTEPBase.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKXSBase.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKShHealing.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKTopAlgo.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKGeomAlgo.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKBRep.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKGeomBase.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKG3d.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKG2d.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKMath.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libTKernel.so.7.6.3
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libtbb.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
Mod/Draft/DraftUtils.so: Mod/Material/Materials.so
Mod/Draft/DraftUtils.so: lib/libFreeCADApp.so
Mod/Draft/DraftUtils.so: lib/libFreeCADBase.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/hdf5/serial/libhdf5.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libcurl.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libpthread.a
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libsz.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libz.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libdl.a
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libm.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libpython3.12.so
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libfmt.so.9.1.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.15.13
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.83.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libQt5Concurrent.so.5.15.13
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.8.0
Mod/Draft/DraftUtils.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
Mod/Draft/DraftUtils.so: src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jarvis/Documents/freecad-source/cMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../../Mod/Draft/DraftUtils.so"
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DraftUtils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/build: Mod/Draft/DraftUtils.so
.PHONY : src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/build

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/clean:
	cd /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App && $(CMAKE_COMMAND) -P CMakeFiles/DraftUtils.dir/cmake_clean.cmake
.PHONY : src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/clean

src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/depend: src/Mod/Draft/App/DraftUtils_autogen/timestamp
	cd /home/jarvis/Documents/freecad-source/cMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jarvis/Documents/freecad-source /home/jarvis/Documents/freecad-source/src/Mod/Draft/App /home/jarvis/Documents/freecad-source/cMake /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App /home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Mod/Draft/App/CMakeFiles/DraftUtils.dir/depend
