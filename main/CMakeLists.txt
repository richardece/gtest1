set(BINARY ${CMAKE_PROJECT_NAME}_run)
set(LIBRARY ${CMAKE_PROJECT_NAME}_lib)

file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.hpp)

add_executable(${BINARY} ${SOURCES} ${HEADERS})

add_library(${LIBRARY} STATIC ${SOURCES})
target_include_directories(${LIBRARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if (ENABLE_COVERAGE)
    target_compile_options(${LIBRARY} PUBLIC
                            --coverage 
                            -O0
    )
    target_link_options(${LIBRARY} PUBLIC
                            --coverage 
    )
endif()
