# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\uic_structured\C_example\Ternary_operator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\uic_structured\C_example\Ternary_operator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Ternary_operator.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Ternary_operator.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Ternary_operator.dir\flags.make

CMakeFiles\Ternary_operator.dir\main.cpp.obj: CMakeFiles\Ternary_operator.dir\flags.make
CMakeFiles\Ternary_operator.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\uic_structured\C_example\Ternary_operator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ternary_operator.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ternary_operator.dir\main.cpp.obj /FdCMakeFiles\Ternary_operator.dir\ /FS -c E:\uic_structured\C_example\Ternary_operator\main.cpp
<<

CMakeFiles\Ternary_operator.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ternary_operator.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe > CMakeFiles\Ternary_operator.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\uic_structured\C_example\Ternary_operator\main.cpp
<<

CMakeFiles\Ternary_operator.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ternary_operator.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ternary_operator.dir\main.cpp.s /c E:\uic_structured\C_example\Ternary_operator\main.cpp
<<

# Object files for target Ternary_operator
Ternary_operator_OBJECTS = \
"CMakeFiles\Ternary_operator.dir\main.cpp.obj"

# External object files for target Ternary_operator
Ternary_operator_EXTERNAL_OBJECTS =

Ternary_operator.exe: CMakeFiles\Ternary_operator.dir\main.cpp.obj
Ternary_operator.exe: CMakeFiles\Ternary_operator.dir\build.make
Ternary_operator.exe: CMakeFiles\Ternary_operator.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\uic_structured\C_example\Ternary_operator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ternary_operator.exe"
	"C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Ternary_operator.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Ternary_operator.dir\objects1.rsp @<<
 /out:Ternary_operator.exe /implib:Ternary_operator.lib /pdb:E:\uic_structured\C_example\Ternary_operator\cmake-build-debug\Ternary_operator.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Ternary_operator.dir\build: Ternary_operator.exe

.PHONY : CMakeFiles\Ternary_operator.dir\build

CMakeFiles\Ternary_operator.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ternary_operator.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Ternary_operator.dir\clean

CMakeFiles\Ternary_operator.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\uic_structured\C_example\Ternary_operator E:\uic_structured\C_example\Ternary_operator E:\uic_structured\C_example\Ternary_operator\cmake-build-debug E:\uic_structured\C_example\Ternary_operator\cmake-build-debug E:\uic_structured\C_example\Ternary_operator\cmake-build-debug\CMakeFiles\Ternary_operator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Ternary_operator.dir\depend

