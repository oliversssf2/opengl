# Project definition
cmake_minimum_required(VERSION 3.1)
project(opengl)

# Source files
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source")
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libraries")
set(SOURCES "${SRC_DIR}/main.cpp")

# Executable definition and properties
add_executable(Application ${SOURCES})
target_include_directories(Application PRIVATE "${SRC_DIR}")
set_property(TARGET Application PROPERTY CXX_STANDARD 11)

# GLFW
find_package(glfw3 REQUIRED)
target_link_libraries(Application glfw3)

# glad
set(GLAD_DIR "${LIB_DIR}/glad")
add_library("glad" "${GLAD_DIR}/src/glad.c")
target_include_directories("glad" PUBLIC "${GLAD_DIR}/include")
target_link_libraries(Application "glad" "${CMAKE_DL_LIBS}")

#openGL
find_package(OpenGL REQUIRED)