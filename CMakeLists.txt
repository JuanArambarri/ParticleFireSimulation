cmake_minimum_required(VERSION 3.28)
project(ParticleFireSimulation)


set(CMAKE_CXX_STANDARD 26)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)

set(SDL2_PATH "D:/Bau/ProgrammingStudy/ParticleFireSimulation/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(ParticleFireSimulation main.cpp
        Screen.cpp
        Screen.h
        Particle.cpp
        Particle.h
        Swarm.cpp
        Swarm.h)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})