add_library(Shader INTERFACE)
target_sources(Shader INTERFACE Shader.h)
target_link_libraries(Shader INTERFACE "glad")