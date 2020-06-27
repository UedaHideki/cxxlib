cmake_minimum_required(VERSION 3.10)

project(calclibrary CXX)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}")

add_library(calc SHARED
  calc.cxx
)



