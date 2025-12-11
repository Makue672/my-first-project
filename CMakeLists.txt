cmake_minimum_required(VERSION 3.10)
project(LibrarySystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)


add_executable(LibrarySystem 
    src/main.cpp 
    src/BookList.cpp 
    src/menu.cpp
)