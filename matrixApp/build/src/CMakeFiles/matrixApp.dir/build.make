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
include src/CMakeFiles/matrixApp.dir/depend.make
# Include the progress variables for this target.
include src/CMakeFiles/matrixApp.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/matrixApp.dir/flags.make

src/CMakeFiles/matrixApp.dir/main.cpp.o: src/CMakeFiles/matrixApp.dir/flags.make
src/CMakeFiles/matrixApp.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olku.t/CLionProjects/matrixApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/matrixApp.dir/main.cpp.o"
	cd /Users/olku.t/CLionProjects/matrixApp/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrixApp.dir/main.cpp.o -c /Users/olku.t/CLionProjects/matrixApp/src/main.cpp

src/CMakeFiles/matrixApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixApp.dir/main.cpp.i"
	cd /Users/olku.t/CLionProjects/matrixApp/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olku.t/CLionProjects/matrixApp/src/main.cpp > CMakeFiles/matrixApp.dir/main.cpp.i

src/CMakeFiles/matrixApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixApp.dir/main.cpp.s"
	cd /Users/olku.t/CLionProjects/matrixApp/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olku.t/CLionProjects/matrixApp/src/main.cpp -o CMakeFiles/matrixApp.dir/main.cpp.s

# Object files for target matrixApp
matrixApp_OBJECTS = \
"CMakeFiles/matrixApp.dir/main.cpp.o"

# External object files for target matrixApp
matrixApp_EXTERNAL_OBJECTS =

src/matrixApp: src/CMakeFiles/matrixApp.dir/main.cpp.o
src/matrixApp: src/CMakeFiles/matrixApp.dir/build.make
src/matrixApp: matrixLib/libmatrixLib.a
src/matrixApp: src/CMakeFiles/matrixApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/olku.t/CLionProjects/matrixApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrixApp"
	cd /Users/olku.t/CLionProjects/matrixApp/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/matrixApp.dir/build: src/matrixApp
.PHONY : src/CMakeFiles/matrixApp.dir/build

src/CMakeFiles/matrixApp.dir/clean:
	cd /Users/olku.t/CLionProjects/matrixApp/build/src && $(CMAKE_COMMAND) -P CMakeFiles/matrixApp.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/matrixApp.dir/clean

src/CMakeFiles/matrixApp.dir/depend:
	cd /Users/olku.t/CLionProjects/matrixApp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/olku.t/CLionProjects/matrixApp /Users/olku.t/CLionProjects/matrixApp/src /Users/olku.t/CLionProjects/matrixApp/build /Users/olku.t/CLionProjects/matrixApp/build/src /Users/olku.t/CLionProjects/matrixApp/build/src/CMakeFiles/matrixApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/matrixApp.dir/depend

