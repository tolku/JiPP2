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
CMAKE_SOURCE_DIR = /Users/olku.t/CLionProjects/matrixApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/olku.t/CLionProjects/matrixApp/build

# Include any dependencies generated for this target.
include matrixLib/CMakeFiles/matrixLib.dir/depend.make
# Include the progress variables for this target.
include matrixLib/CMakeFiles/matrixLib.dir/progress.make

# Include the compile flags for this target's objects.
include matrixLib/CMakeFiles/matrixLib.dir/flags.make

matrixLib/CMakeFiles/matrixLib.dir/library.cpp.o: matrixLib/CMakeFiles/matrixLib.dir/flags.make
matrixLib/CMakeFiles/matrixLib.dir/library.cpp.o: ../matrixLib/library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olku.t/CLionProjects/matrixApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixLib/CMakeFiles/matrixLib.dir/library.cpp.o"
	cd /Users/olku.t/CLionProjects/matrixApp/build/matrixLib && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrixLib.dir/library.cpp.o -c /Users/olku.t/CLionProjects/matrixApp/matrixLib/library.cpp

matrixLib/CMakeFiles/matrixLib.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixLib.dir/library.cpp.i"
	cd /Users/olku.t/CLionProjects/matrixApp/build/matrixLib && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olku.t/CLionProjects/matrixApp/matrixLib/library.cpp > CMakeFiles/matrixLib.dir/library.cpp.i

matrixLib/CMakeFiles/matrixLib.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixLib.dir/library.cpp.s"
	cd /Users/olku.t/CLionProjects/matrixApp/build/matrixLib && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olku.t/CLionProjects/matrixApp/matrixLib/library.cpp -o CMakeFiles/matrixLib.dir/library.cpp.s

# Object files for target matrixLib
matrixLib_OBJECTS = \
"CMakeFiles/matrixLib.dir/library.cpp.o"

# External object files for target matrixLib
matrixLib_EXTERNAL_OBJECTS =

matrixLib/libmatrixLib.a: matrixLib/CMakeFiles/matrixLib.dir/library.cpp.o
matrixLib/libmatrixLib.a: matrixLib/CMakeFiles/matrixLib.dir/build.make
matrixLib/libmatrixLib.a: matrixLib/CMakeFiles/matrixLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/olku.t/CLionProjects/matrixApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmatrixLib.a"
	cd /Users/olku.t/CLionProjects/matrixApp/build/matrixLib && $(CMAKE_COMMAND) -P CMakeFiles/matrixLib.dir/cmake_clean_target.cmake
	cd /Users/olku.t/CLionProjects/matrixApp/build/matrixLib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
matrixLib/CMakeFiles/matrixLib.dir/build: matrixLib/libmatrixLib.a
.PHONY : matrixLib/CMakeFiles/matrixLib.dir/build

matrixLib/CMakeFiles/matrixLib.dir/clean:
	cd /Users/olku.t/CLionProjects/matrixApp/build/matrixLib && $(CMAKE_COMMAND) -P CMakeFiles/matrixLib.dir/cmake_clean.cmake
.PHONY : matrixLib/CMakeFiles/matrixLib.dir/clean

matrixLib/CMakeFiles/matrixLib.dir/depend:
	cd /Users/olku.t/CLionProjects/matrixApp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/olku.t/CLionProjects/matrixApp /Users/olku.t/CLionProjects/matrixApp/matrixLib /Users/olku.t/CLionProjects/matrixApp/build /Users/olku.t/CLionProjects/matrixApp/build/matrixLib /Users/olku.t/CLionProjects/matrixApp/build/matrixLib/CMakeFiles/matrixLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : matrixLib/CMakeFiles/matrixLib.dir/depend

