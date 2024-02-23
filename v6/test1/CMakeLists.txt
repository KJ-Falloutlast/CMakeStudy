cmake_minimum_required(VERSION 3.0)
project(calc_test)
aux_source_directory(./ SRC)

include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})
link_libraries(${CALC_LIB}) #link静态库需要用link_libraries

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME_1} ${SRC})
