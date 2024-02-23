/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-19 17:56:59
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-19 17:57:03
 * @FilePath: /cpp_ws/cmakelists_study/v6/sort/bubble_sort.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
// bubble_sort.cpp

#include "sort_algorithms.h"

namespace SortAlgorithms {
    void bubbleSort(std::vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // 交换元素
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}
