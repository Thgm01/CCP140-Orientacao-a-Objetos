cmake_minimum_required(VERSION 3.10)

project(Projeto1 VERSION 1.0)

#find_package(PkgConfig REQUIRED)
#pkg_check_modules(PIGPIO REQUIRED pigpio)

#include_directories(${PIGPIO_INCLUDE_DIRS})

set(SOURCES src/main.cpp)
file(GLOB_RECURSE SUB_SOURCES "src/**/*.cpp")
list(APPEND SOURCES ${SUB_SOURCES})

message(STATUS "Sources: ${SOURCES}")

add_executable(teste ${SOURCES})

target_include_directories(teste PRIVATE ${CMAKE_SOURCE_DIR}/include)
#target_link_libraries(teste ${PIGPIO_LIBRARIES})
