cmake_minimum_required(VERSION 3.6)
project(lista_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CPoint2D.cpp CPoint2D.h CRectangle.cpp CRectangle.h)
add_executable(lista_2 ${SOURCE_FILES})