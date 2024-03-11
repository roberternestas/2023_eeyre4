cmake_minimum_required(VERSION 3.12)
project(calc)

# Ensure that BUILD_SHARED_LIBS is explicitly set to OFF
set(BUILD_SHARED_LIBS ON)

# Add your static library
add_library(maths adder.cpp)

# Optionally, add a definition if needed
# add_definitions(-Dmaths_STATIC)

# Add your executable and link it with the static library
add_executable(calc calc.cpp)
target_link_libraries(calc PRIVATE maths)
