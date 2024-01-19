cmake_minimum_required(VERSION 3.15.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(parallel_executor
    Device.h
)

target_include_directories(parallel_executor PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)