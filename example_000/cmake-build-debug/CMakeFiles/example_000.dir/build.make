# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /Users/alex/CLionProjects/example_000

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alex/CLionProjects/example_000/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/example_000.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example_000.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example_000.dir/flags.make

CMakeFiles/example_000.dir/main.c.o: CMakeFiles/example_000.dir/flags.make
CMakeFiles/example_000.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alex/CLionProjects/example_000/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/example_000.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/example_000.dir/main.c.o   -c /Users/alex/CLionProjects/example_000/main.c

CMakeFiles/example_000.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/example_000.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alex/CLionProjects/example_000/main.c > CMakeFiles/example_000.dir/main.c.i

CMakeFiles/example_000.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/example_000.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alex/CLionProjects/example_000/main.c -o CMakeFiles/example_000.dir/main.c.s

# Object files for target example_000
example_000_OBJECTS = \
"CMakeFiles/example_000.dir/main.c.o"

# External object files for target example_000
example_000_EXTERNAL_OBJECTS =

example_000: CMakeFiles/example_000.dir/main.c.o
example_000: CMakeFiles/example_000.dir/build.make
example_000: CMakeFiles/example_000.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alex/CLionProjects/example_000/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable example_000"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_000.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example_000.dir/build: example_000

.PHONY : CMakeFiles/example_000.dir/build

CMakeFiles/example_000.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example_000.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example_000.dir/clean

CMakeFiles/example_000.dir/depend:
	cd /Users/alex/CLionProjects/example_000/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alex/CLionProjects/example_000 /Users/alex/CLionProjects/example_000 /Users/alex/CLionProjects/example_000/cmake-build-debug /Users/alex/CLionProjects/example_000/cmake-build-debug /Users/alex/CLionProjects/example_000/cmake-build-debug/CMakeFiles/example_000.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example_000.dir/depend
