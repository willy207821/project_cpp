cmake_minimum_required(VERSION 3.19)
SET(CMAKE_CXX_FLAGS -std=c++11)
project(test)
include_directories(include/)
file(GLOB SOURCES "src/*.cpp")
add_executable(test1 ${SOURCES})


