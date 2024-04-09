add_executable(bin_main main.cpp)

add_library(pinLib Pin.cpp)
add_library(symbolLib Symbom.cpp)

target_link_libraries(bin_main  pinLib
                                symbolLib
                                )

if(BUILD_TESTING) 
    add_executable(test1 tests.cpp)
    target_link_libraries (test1     	gtest
                                        gtest_main
                                        pinLib
                                        symbolLib
                                        )
    include(GoogleTest)
    gtest_discover_tests(test1)
endif()