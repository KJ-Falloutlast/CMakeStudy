cmake_minimum_required(VERSION 3.0)
project(v5)
# 自定义 DEBUG 宏 
# add_definitions(-D宏名称),加入了debug后就可以直接debug的内容
add_definitions(-DDEBUG)
add_executable(main main.cpp)

#project_source_dir都是在
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")
message("EXECUTABLE_OUTPUT_PATH: ${EXECUTABLE_OUTPUT_PATH}")
message("LIBRARY_OUTPUT_PATH: ${LIBRARY_OUTPUT_PATH}")
message("PROJECT_NAME: ${PROJECT_NAME}")
message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")