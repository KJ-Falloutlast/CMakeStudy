##注释行cmake lists文件
cmake_minimum_required(VERSION 3.15)

##指定CXX标准
#方法1：在cmake中指定
set(CMAKE_CXX_STANDARD 11) #11 14 17

#方法2：在执行cmake指定 cmake .. -DCMAKE_CXX_STANDARD=11


#注释块
#[[
注释块
]]

#project
project(cmake_base)




#-----------------
##变量
# set(SRC_LIST add.cpp sub.cpp mult.cpp div.cpp main.cpp) #变量大写
# add_executable(app
#              add.cpp sub.cpp mult.cpp div.cpp main.cpp)
      

##指定可执行文件的输出路径 EXECUTABLE_OUTPUT_PATH
# set(HOME /home/kim-james/CPP_WS/cpp_ws/cmakelists_study/base)
# set(EXECUTABLE_OUTPUT_PATH ${HOME}/build)

#-------------------
##搜索文件 
#方法1：在 CMake 中使用aux_source_directory 命令可以查找某个路径下的所有源文件，命令格式为：
#(这里把head.h放入include, xxx.cpp放入src中)
include_directories(${PROJECT_SOURCE_DIR}/include)
#搜索src下的文件
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
#PROJECT_SOURCE_DIR和CMAKE_CURRENT_SOURCE_DIR都是cmakelists的上级目录

#方法2：避免源文件太多，在CMake中为我们提供了搜索文件的命令，他就是file，直接搜索cpp文件
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
# file(GLOB HEAD_LIST ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)
add_executable(app
    ${SRC_LIST} ${HEAD_LIST})


