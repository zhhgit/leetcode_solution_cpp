cmake_minimum_required(VERSION 3.13)
project(session1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include) #添加头文件

FILE(GLOB_RECURSE CURRENT_INCLUDE include/*.h)
FILE(GLOB_RECURSE CURRENT_SOURCES src/*.cpp)
add_executable(session1 main.cpp ${CURRENT_SOURCES} ${CURRENT_INCLUDE})
#add_executable(session1 test.cpp ${CURRENT_SOURCES} ${CURRENT_INCLUDE})