# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aya/CLionProjects/Threads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aya/CLionProjects/Threads/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Thread.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Thread.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Thread.dir/flags.make

CMakeFiles/Thread.dir/main.c.o: CMakeFiles/Thread.dir/flags.make
CMakeFiles/Thread.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Thread.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Thread.dir/main.c.o   -c /home/aya/CLionProjects/Threads/main.c

CMakeFiles/Thread.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Thread.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aya/CLionProjects/Threads/main.c > CMakeFiles/Thread.dir/main.c.i

CMakeFiles/Thread.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Thread.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aya/CLionProjects/Threads/main.c -o CMakeFiles/Thread.dir/main.c.s

CMakeFiles/Thread.dir/MergeSort.c.o: CMakeFiles/Thread.dir/flags.make
CMakeFiles/Thread.dir/MergeSort.c.o: ../MergeSort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Thread.dir/MergeSort.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Thread.dir/MergeSort.c.o   -c /home/aya/CLionProjects/Threads/MergeSort.c

CMakeFiles/Thread.dir/MergeSort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Thread.dir/MergeSort.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aya/CLionProjects/Threads/MergeSort.c > CMakeFiles/Thread.dir/MergeSort.c.i

CMakeFiles/Thread.dir/MergeSort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Thread.dir/MergeSort.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aya/CLionProjects/Threads/MergeSort.c -o CMakeFiles/Thread.dir/MergeSort.c.s

CMakeFiles/Thread.dir/MatrixMultiplication.c.o: CMakeFiles/Thread.dir/flags.make
CMakeFiles/Thread.dir/MatrixMultiplication.c.o: ../MatrixMultiplication.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Thread.dir/MatrixMultiplication.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Thread.dir/MatrixMultiplication.c.o   -c /home/aya/CLionProjects/Threads/MatrixMultiplication.c

CMakeFiles/Thread.dir/MatrixMultiplication.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Thread.dir/MatrixMultiplication.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aya/CLionProjects/Threads/MatrixMultiplication.c > CMakeFiles/Thread.dir/MatrixMultiplication.c.i

CMakeFiles/Thread.dir/MatrixMultiplication.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Thread.dir/MatrixMultiplication.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aya/CLionProjects/Threads/MatrixMultiplication.c -o CMakeFiles/Thread.dir/MatrixMultiplication.c.s

CMakeFiles/Thread.dir/ReadFromFile.c.o: CMakeFiles/Thread.dir/flags.make
CMakeFiles/Thread.dir/ReadFromFile.c.o: ../ReadFromFile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Thread.dir/ReadFromFile.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Thread.dir/ReadFromFile.c.o   -c /home/aya/CLionProjects/Threads/ReadFromFile.c

CMakeFiles/Thread.dir/ReadFromFile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Thread.dir/ReadFromFile.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aya/CLionProjects/Threads/ReadFromFile.c > CMakeFiles/Thread.dir/ReadFromFile.c.i

CMakeFiles/Thread.dir/ReadFromFile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Thread.dir/ReadFromFile.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aya/CLionProjects/Threads/ReadFromFile.c -o CMakeFiles/Thread.dir/ReadFromFile.c.s

CMakeFiles/Thread.dir/WriteInFile.c.o: CMakeFiles/Thread.dir/flags.make
CMakeFiles/Thread.dir/WriteInFile.c.o: ../WriteInFile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Thread.dir/WriteInFile.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Thread.dir/WriteInFile.c.o   -c /home/aya/CLionProjects/Threads/WriteInFile.c

CMakeFiles/Thread.dir/WriteInFile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Thread.dir/WriteInFile.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aya/CLionProjects/Threads/WriteInFile.c > CMakeFiles/Thread.dir/WriteInFile.c.i

CMakeFiles/Thread.dir/WriteInFile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Thread.dir/WriteInFile.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aya/CLionProjects/Threads/WriteInFile.c -o CMakeFiles/Thread.dir/WriteInFile.c.s

# Object files for target Thread
Thread_OBJECTS = \
"CMakeFiles/Thread.dir/main.c.o" \
"CMakeFiles/Thread.dir/MergeSort.c.o" \
"CMakeFiles/Thread.dir/MatrixMultiplication.c.o" \
"CMakeFiles/Thread.dir/ReadFromFile.c.o" \
"CMakeFiles/Thread.dir/WriteInFile.c.o"

# External object files for target Thread
Thread_EXTERNAL_OBJECTS =

Thread: CMakeFiles/Thread.dir/main.c.o
Thread: CMakeFiles/Thread.dir/MergeSort.c.o
Thread: CMakeFiles/Thread.dir/MatrixMultiplication.c.o
Thread: CMakeFiles/Thread.dir/ReadFromFile.c.o
Thread: CMakeFiles/Thread.dir/WriteInFile.c.o
Thread: CMakeFiles/Thread.dir/build.make
Thread: CMakeFiles/Thread.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Thread"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Thread.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Thread.dir/build: Thread

.PHONY : CMakeFiles/Thread.dir/build

CMakeFiles/Thread.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Thread.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Thread.dir/clean

CMakeFiles/Thread.dir/depend:
	cd /home/aya/CLionProjects/Threads/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aya/CLionProjects/Threads /home/aya/CLionProjects/Threads /home/aya/CLionProjects/Threads/cmake-build-debug /home/aya/CLionProjects/Threads/cmake-build-debug /home/aya/CLionProjects/Threads/cmake-build-debug/CMakeFiles/Thread.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Thread.dir/depend

