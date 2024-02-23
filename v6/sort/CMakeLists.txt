cmake_minimum_required(VERSION 3.0)
project(sortlib)
aux_source_directory(./ SRC)

include_directories(${HEAD_PATH})
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

#生成动态库
add_library(${SORT_LIB} SHARED ${SRC})

#[[在生成库文件的时候，这个库可以是静态库也可以是动态库，一般需要根据实际情况来确定。
如果生成的库比较大，建议将其制作成动态库。]]
