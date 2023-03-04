cmake_minimum_required(VERSION 3.24)
project(photorent)

set(CMAKE_CXX_STANDARD 17)

add_executable(photorent main.cpp camera.h camera.cpp)
