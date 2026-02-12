cmake_minimum_required(VERSION 3.20)
project(StudioI VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Add libs which dont have a cmake file
add_subdirectory(libs)

# Add the main executable
add_executable(StudioI
    src/main.cpp
    src/StudioOne.cpp
)

include_directories(StudioI PRIVATE
    libs/SDL/include
    libs/imgui
    libs/imgui/backends
)

target_include_directories(StudioI PRIVATE
    include
)

target_link_libraries(StudioI
    opengl32
    SDL2main SDL2-static
    imgui
)

