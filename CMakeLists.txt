cmake_minimum_required(VERSION 3.10)

# used internally by CMake to identify your project
project(a3)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Include the directory headers are located
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add the main executable
add_executable(reverse src/main.cpp)

####################################################

# Add the test executable
add_executable(test.out tests/test.cpp)

# Include directories for the test target
target_include_directories(test.out PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Enable testing
enable_testing()

# Register the test executable with CTest (optional)
add_test(NAME test.out COMMAND test.out)
