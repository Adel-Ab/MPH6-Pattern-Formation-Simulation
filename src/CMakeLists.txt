cmake_minimum_required(VERSION 3.5)

project(reaction-diffusion LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GLUT

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})
if(NOT GLUT_FOUND)
  message(ERROR "GLUT not found")
endif(NOT GLUT_FOUND)

# OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
  message(ERROR "OpenGL not found")
endif(NOT OPENGL_FOUND)

# Qt5

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(reaction-diffusion
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(reaction-diffusion PRIVATE Qt5::Widgets ${GLUT_LIBRARIES} ${OPENGL_LIBRARIES})
