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
CMAKE_SOURCE_DIR = /Users/mikekang/work/dailyStudyCPlus/recommandNewId

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/recommandNewId.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/recommandNewId.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recommandNewId.dir/flags.make

CMakeFiles/recommandNewId.dir/main.cpp.o: CMakeFiles/recommandNewId.dir/flags.make
CMakeFiles/recommandNewId.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/recommandNewId.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/recommandNewId.dir/main.cpp.o -c /Users/mikekang/work/dailyStudyCPlus/recommandNewId/main.cpp

CMakeFiles/recommandNewId.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/recommandNewId.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikekang/work/dailyStudyCPlus/recommandNewId/main.cpp > CMakeFiles/recommandNewId.dir/main.cpp.i

CMakeFiles/recommandNewId.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/recommandNewId.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikekang/work/dailyStudyCPlus/recommandNewId/main.cpp -o CMakeFiles/recommandNewId.dir/main.cpp.s

# Object files for target recommandNewId
recommandNewId_OBJECTS = \
"CMakeFiles/recommandNewId.dir/main.cpp.o"

# External object files for target recommandNewId
recommandNewId_EXTERNAL_OBJECTS =

recommandNewId: CMakeFiles/recommandNewId.dir/main.cpp.o
recommandNewId: CMakeFiles/recommandNewId.dir/build.make
recommandNewId: CMakeFiles/recommandNewId.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable recommandNewId"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/recommandNewId.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recommandNewId.dir/build: recommandNewId
.PHONY : CMakeFiles/recommandNewId.dir/build

CMakeFiles/recommandNewId.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/recommandNewId.dir/cmake_clean.cmake
.PHONY : CMakeFiles/recommandNewId.dir/clean

CMakeFiles/recommandNewId.dir/depend:
	cd /Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikekang/work/dailyStudyCPlus/recommandNewId /Users/mikekang/work/dailyStudyCPlus/recommandNewId /Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug /Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug /Users/mikekang/work/dailyStudyCPlus/recommandNewId/cmake-build-debug/CMakeFiles/recommandNewId.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/recommandNewId.dir/depend
