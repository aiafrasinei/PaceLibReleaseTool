cmake_minimum_required(VERSION 3.0)

project(PaceLib)

include_directories(PaceLib/include/PaceLib)
include_directories(PaceLib/include/PaceLib/graphics)
include_directories(PaceLib/include/PaceLib/graphics/gui)
include_directories(PaceLib/include/PaceLib/graphics/conics)
include_directories(PaceLib/include/PaceLib/graphics/effects)
include_directories(PaceLib/include/PaceLib/graphics/points)
include_directories(PaceLib/include/PaceLib/graphics/lines)
include_directories(PaceLib/include/PaceLib/graphics/polygons)
include_directories(PaceLib/include/PaceLib/graphics/polygons/quads)
include_directories(PaceLib/include/PaceLib/utils)
include_directories(PaceLib/include/PaceLib/scene)
include_directories(PaceLib/include/PaceLib/resources)
include_directories(PaceLib/include/PaceLib/externals/nlohmann)
include_directories(PaceLib/include/PaceLib/core)
include_directories(PaceLib/include/PaceLib/core/interfaces)
include_directories(PaceLib/include/PaceLib/config)
include_directories("/mingw64/include/")
include_directories("/opt/homebrew/include")

link_directories("/opt/homebrew/lib/")
link_directories("/usr/local/lib64/")
link_directories("/mingw64/lib/")

set(CMAKE_CXX_FLAGS "-std=c++20")

file(GLOB sources PaceLib/src/*.cpp)

add_library(PaceLib ${sources})

target_include_directories(PaceLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/PaceLib/include)
