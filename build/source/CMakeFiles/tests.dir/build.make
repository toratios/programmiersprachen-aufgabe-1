# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build

# Include any dependencies generated for this target.
include source/CMakeFiles/tests.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/tests.dir/flags.make

source/CMakeFiles/tests.dir/tests.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/tests.cpp.o: ../source/tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/tests.dir/tests.cpp.o"
	cd /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/tests.cpp.o -c /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/source/tests.cpp

source/CMakeFiles/tests.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/tests.cpp.i"
	cd /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/source/tests.cpp > CMakeFiles/tests.dir/tests.cpp.i

source/CMakeFiles/tests.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/tests.cpp.s"
	cd /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/source/tests.cpp -o CMakeFiles/tests.dir/tests.cpp.s

source/CMakeFiles/tests.dir/tests.cpp.o.requires:

.PHONY : source/CMakeFiles/tests.dir/tests.cpp.o.requires

source/CMakeFiles/tests.dir/tests.cpp.o.provides: source/CMakeFiles/tests.dir/tests.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/tests.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/tests.cpp.o.provides

source/CMakeFiles/tests.dir/tests.cpp.o.provides.build: source/CMakeFiles/tests.dir/tests.cpp.o


# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/tests.cpp.o"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

source/tests: source/CMakeFiles/tests.dir/tests.cpp.o
source/tests: source/CMakeFiles/tests.dir/build.make
source/tests: source/CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests"
	cd /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/tests.dir/build: source/tests

.PHONY : source/CMakeFiles/tests.dir/build

source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/tests.cpp.o.requires

.PHONY : source/CMakeFiles/tests.dir/requires

source/CMakeFiles/tests.dir/clean:
	cd /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source && $(CMAKE_COMMAND) -P CMakeFiles/tests.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/tests.dir/clean

source/CMakeFiles/tests.dir/depend:
	cd /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1 /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/source /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source /home/max/Documents/Uni/Progspr/programmiersprachen-aufgabe-1/build/source/CMakeFiles/tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/tests.dir/depend

