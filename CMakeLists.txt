############################################
############# CMAKE HEADER #################
############################################

cmake_minimum_required(VERSION 2.6)
project(greeter)

############################################
############# MAIN TARGETS  ################
############################################

add_subdirectory(source)

add_subdirectory(test EXCLUDE_FROM_ALL)
add_custom_target(
  test
  COMMAND test/runUnitTests --gtest_color=yes
  DEPENDS runUnitTests
  COMMENT "Building and Executing the Unit-Tests"
)
