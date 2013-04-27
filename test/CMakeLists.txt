################################
########### GTest #############
################################

# compile gtest (easy since it also uses CMake)
add_subdirectory(gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
########## UNIT TEST ###########
################################

# compile each of the tested modules to a static library
add_library( greeter.a STATIC ../source/greeter.c )

# compile and link the test-runner (contains the unit-tests)
add_executable( runUnitTests greeter-test.cpp )
target_link_libraries(runUnitTests gtest gtest_main greeter.a)