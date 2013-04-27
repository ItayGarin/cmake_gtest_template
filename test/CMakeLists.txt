################################
# GTest
################################

add_subdirectory(gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################

# Add test cpp file
add_executable( runUnitTests greeter-test.cpp )
add_library( greeter.a STATIC ../source/greeter.c )

# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main greeter.a)
add_test( runUnitTests runUnitTests )