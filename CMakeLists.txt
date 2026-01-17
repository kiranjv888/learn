cmake_minimum_required(VERSION 3.10)
project(SimpleCppProject)

set(CMAKE_CXX_STANDARD 17)

# Create a library for our logic so both main and tests can use it
add_library(MathLib math_functions.cpp)

# The main application
add_executable(my_app main.cpp)
target_link_libraries(my_app MathLib)

# The test application
add_executable(run_tests test_math.cpp)
target_link_libraries(run_tests MathLib)
