cmake_minimum_required(VERSION 3.10)
project(my-first-project)

set(CMAKE_CXX_STANDARD 17)

# 包含头文件目录
include_directories(include)

# 添加可执行文件，包含所有源文件
add_executable(my-first-project 
    src/main.cpp 
    src/BookList.cpp 
    src/menu.cpp
)