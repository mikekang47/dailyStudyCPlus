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
CMAKE_SOURCE_DIR = /Users/mikekang/work/dailyStudyCPlus/wordCompression

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/wordCompression.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/wordCompression.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wordCompression.dir/flags.make

CMakeFiles/wordCompression.dir/main.cpp.o: CMakeFiles/wordCompression.dir/flags.make
CMakeFiles/wordCompression.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wordCompression.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wordCompression.dir/main.cpp.o -c /Users/mikekang/work/dailyStudyCPlus/wordCompression/main.cpp

CMakeFiles/wordCompression.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wordCompression.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikekang/work/dailyStudyCPlus/wordCompression/main.cpp > CMakeFiles/wordCompression.dir/main.cpp.i

CMakeFiles/wordCompression.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wordCompression.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikekang/work/dailyStudyCPlus/wordCompression/main.cpp -o CMakeFiles/wordCompression.dir/main.cpp.s

# Object files for target wordCompression
wordCompression_OBJECTS = \
"CMakeFiles/wordCompression.dir/main.cpp.o"

# External object files for target wordCompression
wordCompression_EXTERNAL_OBJECTS =

wordCompression: CMakeFiles/wordCompression.dir/main.cpp.o
wordCompression: CMakeFiles/wordCompression.dir/build.make
wordCompression: CMakeFiles/wordCompression.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable wordCompression"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wordCompression.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wordCompression.dir/build: wordCompression
.PHONY : CMakeFiles/wordCompression.dir/build

CMakeFiles/wordCompression.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wordCompression.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wordCompression.dir/clean

CMakeFiles/wordCompression.dir/depend:
	cd /Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikekang/work/dailyStudyCPlus/wordCompression /Users/mikekang/work/dailyStudyCPlus/wordCompression /Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug /Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug /Users/mikekang/work/dailyStudyCPlus/wordCompression/cmake-build-debug/CMakeFiles/wordCompression.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wordCompression.dir/depend

