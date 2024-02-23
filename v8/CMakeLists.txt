cmake_minimum_required(VERSION 3.0)
project(if_while_test)


# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# 定义编译选项

##方法1.用add_definitions
# add_definitions(-DFEATURE_A)

##方法2.用option和target_compile_definitions
#option和add_definitions都是用来定义宏
option(FEATURE_A "feature_a" ON)
option(FEATURE_B "feature_b" off)
add_executable(main main.cpp) 

# 根据编译选项定义预处理宏,如果是Feature_a，则只输出跟feature_a下面的代码
if(FEATURE_A)
    target_compile_definitions(main PRIVATE FEATURE_A)
elseif(FEATURE_B)
    target_compile_definitions(main PRIVATE FEATURE_B)
endif()

#=======================if操作文件=====================
# 定义一个变量
set(NUMBER 10)

# 如果 NUMBER 大于 5，则输出 "NUMBER is greater than 5"，否则输出 "NUMBER is not greater than 5"
if(NUMBER GREATER 5)
    message(STATUS "number is greater than 5")
elseif(NUMBER LESS 20)
    message(STATUS "number is less than 20")
else()
    message("number is 10")
endif()

# 检查文件是否存在
if(EXISTS "${PROJECT_SOURCE_DIR}/example.txt")
    message("example exists")
else()
    message("example doesn't exist")
endif()

# 如果 example.txt 存在，则输出其中的内容
if(EXISTS "${PROJECT_SOURCE_DIR}/example.txt")
    file(READ "${PROJECT_SOURCE_DIR}/example.txt" FILE_CONTENT)
    message("Content of example.txt: ${FILE_CONTENT}")
endif()

#=======================循环=====================
#for-each
#方法1.RANGE：关键字，表示要遍历范围
foreach(item RANGE 10)
    message(STATUS "当前遍历的值为: ${item}" )
endforeach()

#方法2.
foreach(item RANGE 10 30 2) #起点，终点，步长
    message(STATUS "当前遍历的值为: ${item}" )
endforeach()

#方法3.
#[[
IN：关键字，表示在 xxx 里边
LISTS：关键字，对应的是列表list，通过set、list可以获得
ITEMS：关键字，对应的也是列表]]

set(WORD a b c d) #word = abcd
set(NAME ace sabo luffy) #name = acd sabo luffy
# 遍历 list
foreach(item IN ITEMS ${WORD} ${NAME}) #item IN ITEMS表示遍历item
    message(STATUS "当前遍历的值为: ${item}" )
endforeach()

#方法4.
#ZIP_LISTS：关键字，对应的是列表list，通过set 、list可以获得
# 通过list给列表添加数据
list(APPEND WORD hello world "hello world")
list(APPEND NAME ace sabo luffy zoro sanji)
# 遍历列表
foreach(item1 item2 IN ZIP_LISTS WORD NAME) 
    message(STATUS "当前遍历的值为: item1 = ${item1}, item2=${item2}" )
endforeach()

message("=============================")
# 遍历列表
#变量名_0, 变量名_1为每个item中每个元素
foreach(item IN ZIP_LISTS WORD NAME)
    message(STATUS "当前遍历的值为: item1 = ${item_0}, item2=${item_1}" )
endforeach()


#while
set(NAME luffy sanji zoro nami robin)
# 得到列表长度
list(LENGTH NAME LEN) #NAME是对象，不要加${}
# 循环
while(${LEN} GREATER  0)
    message(STATUS "names = ${NAME}")
    # 弹出列表头部元素
    list(POP_FRONT NAME)
    # 更新列表长度
    list(LENGTH NAME LEN)
endwhile()
