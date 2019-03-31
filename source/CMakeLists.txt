set(SOURCES
        firstwindow.cpp
        helloTriangle.cpp
        )

add_executable(FirstWindow firstwindow.cpp)
target_include_directories(FirstWindow PRIVATE ${SRC_DIR})
target_link_libraries(FirstWindow PRIVATE glfw)
target_link_libraries(FirstWindow PRIVATE "glad" "${CMAKE_DL_LIBS}")

add_executable(HelloTriangle helloTriangle.cpp)
target_include_directories(FirstWindow PRIVATE ${SRC_DIR})
target_link_libraries(HelloTriangle PRIVATE glfw)
target_link_libraries(HelloTriangle PRIVATE "glad" "${CMAKE_DL_LIBS}")

set_target_properties(FirstWindow HelloTriangle
        PROPERTIES
        CXX_STANDARD 17
        )