cmake_minimum_required(VERSION 3.20)
project(StudioOne VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Add libs which dont have a cmake file
add_subdirectory(libs)

# glob the source files
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

# Add the main executable
add_executable(StudioOne src/main.cpp ${SOURCE_FILES})

include_directories(StudioOne PRIVATE
    libs/SDL/include
    libs/imgui
    libs/imgui/backends
)

target_include_directories(StudioOne PRIVATE
    include
)

target_link_libraries(StudioOne
    opengl32
    SDL2main SDL2-static
    imgui
)

