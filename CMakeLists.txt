cmake_minimum_required(VERSION 3.10)
project(ansi VERSION 1.0 LANGUAGES C CXX)

set(EXPORT_COMPILE_COMMANDS ON)

include_directories("${CMAKE_SOURCE_DIR}/include")

add_subdirectory(lib)
add_subdirectory(include)
if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
    add_subdirectory(examples)
endif()