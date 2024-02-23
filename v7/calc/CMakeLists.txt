cmake_minimum_required(VERSION 3.0)
project(calclib)
file(GLOB SRC ${PROJECT_SOURCE_DIR}/*.cpp)

#HEAD_PATH和LIB_PATH是根cmakelists中的变量
include_directories(${HEAD_PATH})
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

#生成静态库
add_library(${CALC_LIB} STATIC ${SRC})

#链接静态库
link_directories(${PROJECT_SOURCE_DIR}/lib)
link_libraries(${CALC_LIB})
add_executable(calc_test calc.cpp)