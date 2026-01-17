cmake_minimum_required(VERSION 4.1)
project(KitsuneEngine)

set(CMAKE_CXX_STANDARD 23)
find_package(raylib CONFIG REQUIRED)
add_executable(KitsuneEngine src/KitsuneEngine.cpp)
target_link_libraries(KitsuneEngine PRIVATE raylib)
