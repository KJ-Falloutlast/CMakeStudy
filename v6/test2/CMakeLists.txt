cmake_minimum_required(VERSION 3.0)
project(sort_test)
aux_source_directory(./ SRC)
#包含头文件路径，HEAD_PATH变量是在根节点文件中定义的
include_directories(${HEAD_PATH}) 
#指定可执行程序生成的路径，EXEC_PATH变量是在根节点文件中定义的
set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
#指定可执行程序要链接的动态库的路径，LIB_PATH变量是在根节点文件中定义的
link_directories(${LIB_PATH})
#生成可执行程序，APP_NAME_2变量是在根节点文件中定义的
add_executable(${APP_NAME_2} ${SRC})
#指定可执行程序要链接的动态库的名字
target_link_libraries(${APP_NAME_2} ${SORT_LIB})

