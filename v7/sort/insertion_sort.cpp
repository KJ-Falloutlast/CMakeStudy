/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-19 17:57:42
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-19 17:57:48
 * @FilePath: /cpp_ws/cmakelists_study/v6/sort/insertion_sort.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
// insertion_sort.cpp

#include "sort_algorithms.h"

namespace SortAlgorithms {
    void insertionSort(std::vector<int> &arr) {
        int n = arr.size();
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }
}
