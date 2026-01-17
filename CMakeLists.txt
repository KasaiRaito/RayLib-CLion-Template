cmake_minimum_required(VERSION 4.1)
project(RayLib)

set(CMAKE_CXX_STANDARD 23)
find_package(raylib CONFIG REQUIRED)
add_executable(RayLib src/main.cpp)
target_link_libraries(RayLib PRIVATE raylib)
