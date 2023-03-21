cmake_minimum_required(VERSION 3.24)
project(use_abseil)

set(CMAKE_CXX_STANDARD 17)

find_package(absl CONFIG REQUIRED)

add_executable(use_abseil main.cpp)

target_include_directories(use_abseil PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

find_package(absl REQUIRED)
target_link_libraries(use_abseil absl::strings)
