cmake_minimum_required(VERSION 3.16)
project(pet-sim-99-farm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(petsim99farm
    src/main.cpp
    src/coins.cpp
    src/hatch.cpp
    src/rare.cpp
    src/cli.cpp
)

target_include_directories(petsim99farm PRIVATE include)

if(WIN32)
    target_link_libraries(petsim99farm PRIVATE userenv)
endif()
