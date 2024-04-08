cmake_minimum_required(VERSION 3.8)
project(ComponentsLibrary)

#Enabling testing and GTest setup
include(${PROJECT_SOURCE_DIR}/cmake/UpdateSubmodules.cmake)
add_subdirectory(${PROJECT_SOURCE_DIR}/external)
include(CTest)
enable_testing()

include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
