/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-19 17:57:12
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-19 17:57:16
 * @FilePath: /cpp_ws/cmakelists_study/v6/sort/quick_sort.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
// quick_sort.cpp

#include "sort_algorithms.h"

namespace SortAlgorithms {
    int partition(std::vector<int> &arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; ++j) {
            if (arr[j] < pivot) {
                ++i;
                // 交换元素
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // 交换元素
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return (i + 1);
    }

    void quickSort(std::vector<int> &arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
}
