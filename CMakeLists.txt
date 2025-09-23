#PC: require at least CMake 3.10 to process this file.
cmake_minimum_required(VERSION 3.10) 
#PC: Defines project name, It’s just a label for the project inside CMake.
project(google_tests_project)  

#PC: “compile this project with C++17.”
set(CMAKE_CXX_STANDARD 17)

# Add GoogleTest (source dir, binary dir)

#PC: First argument = path to source code of googletest.
#PC: Second argument = where to put build files for googletest inside the build tree.
# ${CMAKE_BINARY_DIR} is just the root of the build folder where we ran cmake ...
add_subdirectory("D:/programming/cpp/googletest" "${CMAKE_BINARY_DIR}/googletest")

# main.cpp, which also includes tests
#PC: defines a build target, the file lies in `project_name\build\Debug\my_project.exe`
#PC: the actual program target, can have a different name than project() in line 4.
add_executable(my_project main.cpp)

#PC: my_project is the target and in CMake, a target is basically a “thing that you want to build”.

# Link against GoogleTest
target_link_libraries(my_project gtest gtest_main)

# Make GoogleTest use shared runtime (MD/MDd) to match the project

#PC: On MSVC, it forces googletest to build with /MD (dynamic runtime) instead of /MT (static runtime).
if (MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()