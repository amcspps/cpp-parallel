cmake_minimum_required(VERSION 3.15.0)
cmake_policy(SET CMP0016 NEW)

project(parallel_executor VERSION 1.0.0 DESCRIPTION "Синхронизация нескольких потоков исполнения через очередь сообщений на C++")

include_directories(${CMAKE_SOURCE_DIR}/src)

enable_testing()
add_subdirectory(src/parallel_executor)

add_subdirectory(test)

set(SRCS
    ${CMAKE_SOURCE_DIR}/src/parallel_executor/main.cpp
)

add_executable(cpp_parallel ${SRCS})
