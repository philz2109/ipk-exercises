# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build

# Include any dependencies generated for this target.
include CMakeFiles/canvas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/canvas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/canvas.dir/flags.make

CMakeFiles/canvas.dir/canvas.cpp.o: CMakeFiles/canvas.dir/flags.make
CMakeFiles/canvas.dir/canvas.cpp.o: ../canvas.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/canvas.dir/canvas.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/canvas.dir/canvas.cpp.o -c /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/canvas.cpp

CMakeFiles/canvas.dir/canvas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/canvas.dir/canvas.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/canvas.cpp > CMakeFiles/canvas.dir/canvas.cpp.i

CMakeFiles/canvas.dir/canvas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/canvas.dir/canvas.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/canvas.cpp -o CMakeFiles/canvas.dir/canvas.cpp.s

# Object files for target canvas
canvas_OBJECTS = \
"CMakeFiles/canvas.dir/canvas.cpp.o"

# External object files for target canvas
canvas_EXTERNAL_OBJECTS =

canvas: CMakeFiles/canvas.dir/canvas.cpp.o
canvas: CMakeFiles/canvas.dir/build.make
canvas: liblib.a
canvas: CMakeFiles/canvas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable canvas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/canvas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/canvas.dir/build: canvas

.PHONY : CMakeFiles/canvas.dir/build

CMakeFiles/canvas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/canvas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/canvas.dir/clean

CMakeFiles/canvas.dir/depend:
	cd /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02 /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02 /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles/canvas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/canvas.dir/depend

