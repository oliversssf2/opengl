# Project definition
cmake_minimum_required(VERSION 3.13)
project(opengl)

# Source files
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source")
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libraries")
set(SOURCES "${SRC_DIR}/main.cpp")

# Executable definition and properties
add_executable(Application ${SOURCES})
target_include_directories(Application PRIVATE "${SRC_DIR}")
set_property(TARGET Application PROPERTY CXX_STANDARD 17)

##openGL
#find_package(OpenGL REQUIRED)
#target_link_libraries(Application PUBLIC OpenGL::GL)

# GLFW
find_package(glfw3 3.2 REQUIRED)
target_link_libraries(Application PRIVATE glfw)

# glad
set(GLAD_DIR "${LIB_DIR}/glad")
add_library("glad" "${GLAD_DIR}/src/glad.c")
target_include_directories("glad" PUBLIC "${GLAD_DIR}/include")
target_link_libraries(Application PRIVATE "glad" "${CMAKE_DL_LIBS}")

