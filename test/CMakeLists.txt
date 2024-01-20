cmake_minimum_required(VERSION 3.15.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(parallel_executor_test
  Test_Devices.cpp
  #Test_EventQueue.cpp
  #Test_Events.cpp
  #Test_Parser.cpp
)

target_link_libraries(
  parallel_executor_test
  GTest::gtest GTest::gtest_main
  parallel_srcs
)

add_test(NAME ParallelExecutorTests COMMAND parallel_executor_test)