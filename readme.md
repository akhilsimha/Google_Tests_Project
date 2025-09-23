# Project to get started with Google Tests

## Running a simple C++ Code
1. Check if g++ exists : `g++ --version`
2. To build the code: `g++ main.cpp -o main`
3. To run : `main`


## Installing Google Tests into the Project (Installed in a common folder, not in the project folder)
git clone https://github.com/google/googletest.git  
cd googletest  
mkdir build  
cd build  
cmake ..  
Note: If you get an error stating `'cmake' is not recognized as an internal or external command, operable program or batch file.`, follow the steps to install CMake below.   
make  


## Installing CMake
1. Download CMake from their official website and install it. Make sure you include the Path.  
2. Restart your visual studio code and run the `cmake ..` command and continue further.   


## Adding Google Tests to the Project  


## Running the Tests
mkdir build  
cd build  

Note: Configures the project and generates the build system. Only needed the first time, or if there is a change in CMakeLists.txt or the project structure.  
cmake ..  

Note: Compiles the code. Only rebuilds what is changed.   
```
cmake --build . --config Debug  
cd Debug  
my_project.exe  
```


## Changing compiler

Check if MinGW is installed:
`g++ --version`

Delete the build directory if it exists.

```
mkdir build
cd build
cmake .. -G "MinGW Makefiles" -DCMAKE_CXX_COMPILER=g++
mingw32-make
```
