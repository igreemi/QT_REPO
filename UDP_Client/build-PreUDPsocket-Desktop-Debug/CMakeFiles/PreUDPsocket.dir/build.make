# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cmake-3.26.0-rc2-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\cmake-3.26.0-rc2-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/PreUDPsocket.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PreUDPsocket.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PreUDPsocket.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PreUDPsocket.dir/flags.make

CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj: CMakeFiles/PreUDPsocket.dir/flags.make
CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj: CMakeFiles/PreUDPsocket.dir/includes_CXX.rsp
CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj: PreUDPsocket_autogen/mocs_compilation.cpp
CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj: CMakeFiles/PreUDPsocket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\PreUDPsocket.dir\PreUDPsocket_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\PreUDPsocket.dir\PreUDPsocket_autogen\mocs_compilation.cpp.obj -c C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\PreUDPsocket_autogen\mocs_compilation.cpp

CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\PreUDPsocket_autogen\mocs_compilation.cpp > CMakeFiles\PreUDPsocket.dir\PreUDPsocket_autogen\mocs_compilation.cpp.i

CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\PreUDPsocket_autogen\mocs_compilation.cpp -o CMakeFiles\PreUDPsocket.dir\PreUDPsocket_autogen\mocs_compilation.cpp.s

CMakeFiles/PreUDPsocket.dir/main.cpp.obj: CMakeFiles/PreUDPsocket.dir/flags.make
CMakeFiles/PreUDPsocket.dir/main.cpp.obj: CMakeFiles/PreUDPsocket.dir/includes_CXX.rsp
CMakeFiles/PreUDPsocket.dir/main.cpp.obj: C:/kurs_cpp/Qt/UDP_Client/PreUDPsocket/main.cpp
CMakeFiles/PreUDPsocket.dir/main.cpp.obj: CMakeFiles/PreUDPsocket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PreUDPsocket.dir/main.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PreUDPsocket.dir/main.cpp.obj -MF CMakeFiles\PreUDPsocket.dir\main.cpp.obj.d -o CMakeFiles\PreUDPsocket.dir\main.cpp.obj -c C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\main.cpp

CMakeFiles/PreUDPsocket.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PreUDPsocket.dir/main.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\main.cpp > CMakeFiles\PreUDPsocket.dir\main.cpp.i

CMakeFiles/PreUDPsocket.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PreUDPsocket.dir/main.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\main.cpp -o CMakeFiles\PreUDPsocket.dir\main.cpp.s

CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj: CMakeFiles/PreUDPsocket.dir/flags.make
CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj: CMakeFiles/PreUDPsocket.dir/includes_CXX.rsp
CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj: C:/kurs_cpp/Qt/UDP_Client/PreUDPsocket/mainwindow.cpp
CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj: CMakeFiles/PreUDPsocket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj -MF CMakeFiles\PreUDPsocket.dir\mainwindow.cpp.obj.d -o CMakeFiles\PreUDPsocket.dir\mainwindow.cpp.obj -c C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\mainwindow.cpp

CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\mainwindow.cpp > CMakeFiles\PreUDPsocket.dir\mainwindow.cpp.i

CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\mainwindow.cpp -o CMakeFiles\PreUDPsocket.dir\mainwindow.cpp.s

CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj: CMakeFiles/PreUDPsocket.dir/flags.make
CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj: CMakeFiles/PreUDPsocket.dir/includes_CXX.rsp
CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj: C:/kurs_cpp/Qt/UDP_Client/PreUDPsocket/udpworker.cpp
CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj: CMakeFiles/PreUDPsocket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj -MF CMakeFiles\PreUDPsocket.dir\udpworker.cpp.obj.d -o CMakeFiles\PreUDPsocket.dir\udpworker.cpp.obj -c C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\udpworker.cpp

CMakeFiles/PreUDPsocket.dir/udpworker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PreUDPsocket.dir/udpworker.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\udpworker.cpp > CMakeFiles\PreUDPsocket.dir\udpworker.cpp.i

CMakeFiles/PreUDPsocket.dir/udpworker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PreUDPsocket.dir/udpworker.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket\udpworker.cpp -o CMakeFiles\PreUDPsocket.dir\udpworker.cpp.s

# Object files for target PreUDPsocket
PreUDPsocket_OBJECTS = \
"CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/PreUDPsocket.dir/main.cpp.obj" \
"CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj" \
"CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj"

# External object files for target PreUDPsocket
PreUDPsocket_EXTERNAL_OBJECTS =

PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/PreUDPsocket_autogen/mocs_compilation.cpp.obj
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/main.cpp.obj
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/mainwindow.cpp.obj
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/udpworker.cpp.obj
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/build.make
PreUDPsocket.exe: C:/Qt/6.4.2/mingw_64/lib/libQt6Widgets.a
PreUDPsocket.exe: C:/Qt/6.4.2/mingw_64/lib/libQt6Network.a
PreUDPsocket.exe: C:/Qt/6.4.2/mingw_64/lib/libQt6Gui.a
PreUDPsocket.exe: C:/Qt/6.4.2/mingw_64/lib/libQt6Core.a
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/linkLibs.rsp
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/objects1.rsp
PreUDPsocket.exe: CMakeFiles/PreUDPsocket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable PreUDPsocket.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PreUDPsocket.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PreUDPsocket.dir/build: PreUDPsocket.exe
.PHONY : CMakeFiles/PreUDPsocket.dir/build

CMakeFiles/PreUDPsocket.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PreUDPsocket.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PreUDPsocket.dir/clean

CMakeFiles/PreUDPsocket.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket C:\kurs_cpp\Qt\UDP_Client\PreUDPsocket C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug C:\kurs_cpp\Qt\UDP_Client\build-PreUDPsocket-Desktop-Debug\CMakeFiles\PreUDPsocket.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PreUDPsocket.dir/depend

