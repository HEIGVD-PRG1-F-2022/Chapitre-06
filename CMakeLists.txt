cmake_minimum_required(VERSION 3.23)
project(Chapitre06)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent) # once in the project to include the module

FetchContent_Declare(libdio
        GIT_REPOSITORY https://github.com/HEIGVD-PRG1-F-2022/libdio.git
        GIT_TAG v0.2.1
        )
FetchContent_MakeAvailable(libdio)

add_subdirectory(Exo_6_4)
add_subdirectory(Exo_6_5)
add_subdirectory(Exo_6_10)
add_subdirectory(Exo_6_14)
add_subdirectory(Exo_6_17)
