# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mikekang/work/dailyStudyCPlus/connectedUnit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/connectedUnit.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/connectedUnit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/connectedUnit.dir/flags.make

CMakeFiles/connectedUnit.dir/main.cpp.o: CMakeFiles/connectedUnit.dir/flags.make
CMakeFiles/connectedUnit.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/connectedUnit.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/connectedUnit.dir/main.cpp.o -c /Users/mikekang/work/dailyStudyCPlus/connectedUnit/main.cpp

CMakeFiles/connectedUnit.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/connectedUnit.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikekang/work/dailyStudyCPlus/connectedUnit/main.cpp > CMakeFiles/connectedUnit.dir/main.cpp.i

CMakeFiles/connectedUnit.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/connectedUnit.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikekang/work/dailyStudyCPlus/connectedUnit/main.cpp -o CMakeFiles/connectedUnit.dir/main.cpp.s

# Object files for target connectedUnit
connectedUnit_OBJECTS = \
"CMakeFiles/connectedUnit.dir/main.cpp.o"

# External object files for target connectedUnit
connectedUnit_EXTERNAL_OBJECTS =

connectedUnit: CMakeFiles/connectedUnit.dir/main.cpp.o
connectedUnit: CMakeFiles/connectedUnit.dir/build.make
connectedUnit: CMakeFiles/connectedUnit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable connectedUnit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/connectedUnit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/connectedUnit.dir/build: connectedUnit
.PHONY : CMakeFiles/connectedUnit.dir/build

CMakeFiles/connectedUnit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/connectedUnit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/connectedUnit.dir/clean

CMakeFiles/connectedUnit.dir/depend:
	cd /Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikekang/work/dailyStudyCPlus/connectedUnit /Users/mikekang/work/dailyStudyCPlus/connectedUnit /Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug /Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug /Users/mikekang/work/dailyStudyCPlus/connectedUnit/cmake-build-debug/CMakeFiles/connectedUnit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/connectedUnit.dir/depend

