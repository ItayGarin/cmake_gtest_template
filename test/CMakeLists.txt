set(test_BIN runUnitTests)
set(test_SRC greeter-test.cpp)
set(test_LIBS gtest gtest_main)

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

# compile the test-runner (contains the unit-tests)
add_executable( ${test_BIN} ${test_SRC} )

# glue it all together
target_link_libraries(${test_BIN} ${test_LIBS} greeter.a)

################################
##### TEST TARGET CONFIG #######
################################

add_custom_target(
  test
  COMMAND ${test_BIN} --gtest_color=yes
  DEPENDS ${test_BIN}
  COMMENT "Building and Executing the Unit-Tests"
  VERBATIM
  SOURCES ${test_SRC}
)
