cmake_minimum_required(VERSION 3.10)
project(MyCStart C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Skriv ut build mode (Debug eller Release)
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(BUILD_MODE_DEBUG)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_definitions(BUILD_MODE_RELEASE)
endif()

add_executable(MyCStart
    src/main.c
)
target_include_directories(MyCStart PRIVATE include)