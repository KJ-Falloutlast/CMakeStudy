##注释行cmake lists文件
cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 11) #11 14 17

#project
project(v2)




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


#-----------------
##制作动态库或静态库
#[[shared,static分别代表动态库和静态库，动态库有可执行权限，静态库没有
lib + 名字 + .so/.a 为动态库/静态库，其中libcalc.so, libcalc.a
静态库和动态库本质都是二进制文件]]

#设置动态库/静态库生成路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#添加库文件
add_library(calc SHARED ${SRC_LIST}) #动态库
# add_library(calc STATIC ${SRC_LIST}) #静态库

#链接静态库
#动态库路径
link_directories(${PROJECT_SOURCE_DIR}/lib)
link_libraries(libcalc.a) #calc / libcalc.a


add_executable(app ${SRC_LIST} main.cpp)
# add_executable(app
#     ${SRC_LIST} main.cpp)


