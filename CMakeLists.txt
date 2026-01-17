cmake_minimum_required(VERSION 4.1)
project(KitsuneEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Find raylib
find_package(raylib CONFIG REQUIRED)

# Collect all cpp files
file(GLOB_RECURSE ENGINE_SOURCES
        src/*.cpp)

add_executable(KitsuneEngine ${ENGINE_SOURCES}
        src/lib/Scene.cpp
        src/lib/Scene.h)

# Include directories
target_include_directories(KitsuneEngine PRIVATE
        src
        src/game
        src/lib
)

# Link raylib
target_link_libraries(KitsuneEngine PRIVATE raylib)

# macOS frameworks (raylib needs these)
if (APPLE)
    target_link_libraries(KitsuneEngine PRIVATE
            "-framework OpenGL"
            "-framework Cocoa"
            "-framework IOKit"
            "-framework CoreVideo"
    )
endif()