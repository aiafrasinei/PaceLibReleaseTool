cmake_minimum_required(VERSION 3.0)

project(PaceLib)

include_directories(PaceLib/include/PaceLib)
include_directories(PaceLib/include/PaceLib/graphics)
include_directories(PaceLib/include/PaceLib/graphics/gui)
include_directories(PaceLib/include/PaceLib/graphics/conics)
include_directories(PaceLib/include/PaceLib/graphics/effects)
include_directories(PaceLib/include/PaceLib/graphics/lines)
include_directories(PaceLib/include/PaceLib/graphics/polygons)
include_directories(PaceLib/include/PaceLib/graphics/polygons/quads)
include_directories(PaceLib/include/PaceLib/utils)
include_directories(PaceLib/include/PaceLib/utils/SDL2)
include_directories(PaceLib/include/PaceLib/scene)
include_directories(PaceLib/include/PaceLib/resources)
include_directories(PaceLib/include/PaceLib/externals/nlohmann)
include_directories(PaceLib/include/PaceLib/core)
include_directories(PaceLib/include/PaceLib/core/interfaces)
include_directories(PaceLib/include/PaceLib/config)

file(GLOB sources PaceLib/src/*.cpp)

add_library(PaceLib ${sources})

target_include_directories(PaceLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/PaceLib/include)
