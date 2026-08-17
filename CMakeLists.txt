cmake_minimum_required(VERSION 3.10)
project(MyCStart C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Sätter gemensam utdatakatalog för den färdiga .exe-filen
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable(MyCStart
        src/main.c
)

# Skickar vidare Debug/Release-flaggor till källkoden i alla miljöer (CLion, VS Code & Visual Studio)
target_compile_definitions(MyCStart PRIVATE
        $<$<CONFIG:Debug>:BUILD_MODE_DEBUG>
        $<$<CONFIG:Release>:BUILD_MODE_RELEASE>
)
