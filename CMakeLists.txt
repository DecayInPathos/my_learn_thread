cmake_minimum_required(VERSION 3.28.3)

project(thread_test)

set("${CMAKE_BINARY_DIR}" build)

add_executable(thread)

target_compile_features(thread PRIVATE cxx_std_17)

target_sources(thread PRIVATE "${CMAKE_SOURCE_DIR}/main.cpp")