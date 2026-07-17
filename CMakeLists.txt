cmake_minimum_required(VERSION 3.10)
project(MyCStart C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# S?tt separata kataloger f?r Debug och Release
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/Release)

add_executable(MyCStart
    src/main.c
)
target_include_directories(MyCStart PRIVATE include)