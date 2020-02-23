cmake_minimum_required(VERSION 3.5)
project(gtestExample1)

set(CMAKE_CXX_STANDARD 11)

option(ENABLE_COVERAGE "Enable coverage reporting fo rclang/gcc" TRUE)



include_directories(main)

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(lib/googletest)