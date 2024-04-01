cmake_minimum_required(VERSION 3.5.0)
project(Hello VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

add_executable(Hello hello.cpp)
add_executable(Variables variables.cpp)
add_executable(Inputs inputs.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic-errors \
-Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
