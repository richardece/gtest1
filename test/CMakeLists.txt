set(BINARY ${CMAKE_PROJECT_NAME}_tst)

#file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.hpp)
#set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${SOURCES})

add_test(
    NAME ${BINARY} 
    COMMAND ${BINARY}
)

target_link_libraries(${BINARY} PUBLIC 
    gtest_main
    ${CMAKE_PROJECT_NAME}_lib   
    gtest
)

if (ENABLE_COVERAGE)
    target_compile_options(${BINARY} PRIVATE
                            --coverage 
                            -O0
    )
    target_link_options(${BINARY} PRIVATE
                            --coverage 
    )
endif()
