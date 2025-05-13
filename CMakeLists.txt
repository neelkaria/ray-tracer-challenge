cmake_minimum_required(VERSION 3.10)
project(ray_trace_challenge)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files from tuple/
include_directories(src/tuple)

# Add Libraries
add_library(tupleLib src/tuple/tuple.cpp)

# Add the executable
add_executable(main src/main.cpp)

# Link tuple library to the main executable
target_link_libraries(main PRIVATE tupleLib)
