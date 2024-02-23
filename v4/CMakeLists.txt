##注释行cmake lists文件
cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 11) #11 14 17

#project
project(v4)



set(TEMP "hello world")

file(GLOB SRC_1 ${PROJECT_SOURCE_DIR}/src1/*.cpp)
file(GLOB SRC_2 ${PROJECT_SOURCE_DIR}/src2/*.cpp)

#以字符串的方式进行追加
# set(SRC ${SRC_1} ${SRC_2} ${TEMP})

#以list追加
# list(APPEND SRC_1 ${SRC_1} ${SRC_2} ${TEMP})


set(var a b c d)

#移除元素
list(REMOVE_ITEM SRC_1 ${PROJECT_SOURCE_DIR}/src1/main.cpp)

#查看length
list(LENGTH SRC_1 l1)
message("the length is : ${l1}")

#指定元素
list(GET SRC_1 0 l2)
message("get element : ${l2}")

#join join是加到第1个的后面
list(JOIN SRC_1 "good" l3)
message("join element: ${l3}")
 
#append append是加到最后1个后面
list(APPEND SRC_1 "append")
message("append element: ${SRC_1}")

#insert 把元素插入到element的位置 
list(INSERT SRC_1 0 "insert")
message("insert element: ${SRC_1}")

#remove_at 把index的元素从列表中移除
list(REMOVE_AT SRC_1 0)
message("remove element: ${SRC_1}")

#reverse
list(REVERSE SRC_1)
message("reverse element: ${SRC_1}")

#sort 
list(SORT SRC_1)
# message("sort element: ${SRC_1}")



