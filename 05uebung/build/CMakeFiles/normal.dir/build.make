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
CMAKE_SOURCE_DIR = /home/blackfire/Documents/ipk-exercises/05uebung

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blackfire/Documents/ipk-exercises/05uebung/build

# Include any dependencies generated for this target.
include CMakeFiles/normal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/normal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/normal.dir/flags.make

CMakeFiles/normal.dir/normal.cc.o: CMakeFiles/normal.dir/flags.make
CMakeFiles/normal.dir/normal.cc.o: ../normal.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackfire/Documents/ipk-exercises/05uebung/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/normal.dir/normal.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/normal.dir/normal.cc.o -c /home/blackfire/Documents/ipk-exercises/05uebung/normal.cc

CMakeFiles/normal.dir/normal.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/normal.dir/normal.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackfire/Documents/ipk-exercises/05uebung/normal.cc > CMakeFiles/normal.dir/normal.cc.i

CMakeFiles/normal.dir/normal.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/normal.dir/normal.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackfire/Documents/ipk-exercises/05uebung/normal.cc -o CMakeFiles/normal.dir/normal.cc.s

# Object files for target normal
normal_OBJECTS = \
"CMakeFiles/normal.dir/normal.cc.o"

# External object files for target normal
normal_EXTERNAL_OBJECTS =

normal: CMakeFiles/normal.dir/normal.cc.o
normal: CMakeFiles/normal.dir/build.make
normal: liblib.a
normal: CMakeFiles/normal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/blackfire/Documents/ipk-exercises/05uebung/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable normal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/normal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/normal.dir/build: normal

.PHONY : CMakeFiles/normal.dir/build

CMakeFiles/normal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/normal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/normal.dir/clean

CMakeFiles/normal.dir/depend:
	cd /home/blackfire/Documents/ipk-exercises/05uebung/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blackfire/Documents/ipk-exercises/05uebung /home/blackfire/Documents/ipk-exercises/05uebung /home/blackfire/Documents/ipk-exercises/05uebung/build /home/blackfire/Documents/ipk-exercises/05uebung/build /home/blackfire/Documents/ipk-exercises/05uebung/build/CMakeFiles/normal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/normal.dir/depend

