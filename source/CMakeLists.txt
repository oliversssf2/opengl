add_subdirectory(utilities)

add_executable(FirstWindow firstwindow.cpp)
target_link_libraries(FirstWindow PRIVATE glfw)
target_link_libraries(FirstWindow PRIVATE "glad" "${CMAKE_DL_LIBS}")

add_executable(HelloTriangle helloTriangle.cpp)
target_link_libraries(HelloTriangle PRIVATE glfw)
target_link_libraries(HelloTriangle PRIVATE "glad" "${CMAKE_DL_LIBS}")

add_executable(HelloRectangle HelloRectangle.cpp)
target_link_libraries(HelloRectangle PRIVATE glfw)
target_link_libraries(HelloRectangle PRIVATE "glad" "${CMAKE_DL_LIBS}")

add_executable(twoTraingles twoTraingles.cpp)
target_link_libraries(twoTraingles PRIVATE glfw)
target_link_libraries(twoTraingles PRIVATE "glad" "${CMAKE_DL_LIBS}")

add_executable(multicolorTriangle multicolorTriangle.cpp)
target_link_libraries(multicolorTriangle PRIVATE glfw)
target_link_libraries(multicolorTriangle PRIVATE "glad" "${CMAKE_DL_LIBS}")

set_target_properties(FirstWindow HelloTriangle
        PROPERTIES
        CXX_STANDARD 17
        )