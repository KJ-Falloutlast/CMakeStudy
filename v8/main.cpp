/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-21 19:28:36
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-21 19:31:07
 * @FilePath: /cpp_ws/cmakelists_study/v8/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
// main.cpp

#include <iostream>

int main() {
#ifdef FEATURE_A
    std::cout << "Feature A is enabled!\n";
#else
    std::cout << "Feature A is disabled!\n";
#endif

#ifdef FEATURE_B
    std::cout << "Feature B is enabled!\n";
#else
    std::cout << "Feature B is disabled!\n";
#endif

#ifdef FEATURE_C
    std::cout << "Feature c is enable!\n";
#else 
    std::cout << "Feature c is enable!\n";
#endif
    return 0;
}
