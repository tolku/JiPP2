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
CMAKE_SOURCE_DIR = /Users/olku.t/CLionProjects/simpleCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/olku.t/CLionProjects/simpleCalc/build

# Include any dependencies generated for this target.
include CMakeFiles/exec.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exec.dir/flags.make

CMakeFiles/exec.dir/src/calc.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/calc.cpp.o: ../src/calc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olku.t/CLionProjects/simpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exec.dir/src/calc.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/calc.cpp.o -c /Users/olku.t/CLionProjects/simpleCalc/src/calc.cpp

CMakeFiles/exec.dir/src/calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/calc.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olku.t/CLionProjects/simpleCalc/src/calc.cpp > CMakeFiles/exec.dir/src/calc.cpp.i

CMakeFiles/exec.dir/src/calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/calc.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olku.t/CLionProjects/simpleCalc/src/calc.cpp -o CMakeFiles/exec.dir/src/calc.cpp.s

CMakeFiles/exec.dir/src/main.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olku.t/CLionProjects/simpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exec.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/main.cpp.o -c /Users/olku.t/CLionProjects/simpleCalc/src/main.cpp

CMakeFiles/exec.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olku.t/CLionProjects/simpleCalc/src/main.cpp > CMakeFiles/exec.dir/src/main.cpp.i

CMakeFiles/exec.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olku.t/CLionProjects/simpleCalc/src/main.cpp -o CMakeFiles/exec.dir/src/main.cpp.s

# Object files for target exec
exec_OBJECTS = \
"CMakeFiles/exec.dir/src/calc.cpp.o" \
"CMakeFiles/exec.dir/src/main.cpp.o"

# External object files for target exec
exec_EXTERNAL_OBJECTS =

exec: CMakeFiles/exec.dir/src/calc.cpp.o
exec: CMakeFiles/exec.dir/src/main.cpp.o
exec: CMakeFiles/exec.dir/build.make
exec: CMakeFiles/exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/olku.t/CLionProjects/simpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable exec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exec.dir/build: exec
.PHONY : CMakeFiles/exec.dir/build

CMakeFiles/exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exec.dir/clean

CMakeFiles/exec.dir/depend:
	cd /Users/olku.t/CLionProjects/simpleCalc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/olku.t/CLionProjects/simpleCalc /Users/olku.t/CLionProjects/simpleCalc /Users/olku.t/CLionProjects/simpleCalc/build /Users/olku.t/CLionProjects/simpleCalc/build /Users/olku.t/CLionProjects/simpleCalc/build/CMakeFiles/exec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exec.dir/depend

