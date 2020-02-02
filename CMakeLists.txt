cmake_minimum_required(VERSION 3.5)
project(gtestExample1)

set(CMAKE_CXX_STANDARD 14)

include_directories(main)

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(lib/googletest)