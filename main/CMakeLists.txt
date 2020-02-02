set(BINARY ${CMAKE_PROJECT_NAME}_run)
set(LIBRARY ${CMAKE_PROJECT_NAME}_lib)

file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.hpp)

add_executable(${BINARY} ${SOURCES} ${HEADERS})

add_library(${LIBRARY} STATIC ${SOURCES})
target_include_directories(${LIBRARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})