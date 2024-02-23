/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-19 17:52:09
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-19 17:56:40
 * @FilePath: /cpp_ws/cmakelists_study/v6/include/sort.h
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
// sort_algorithms.h

#ifndef SORT_ALGORITHMS_H
#define SORT_ALGORITHMS_H

#include <vector>

namespace SortAlgorithms {
    // 冒泡排序
    void bubbleSort(std::vector<int> &arr);

    // 快速排序
    void quickSort(std::vector<int> &arr, int low, int high);

    // 插入排序
    void insertionSort(std::vector<int> &arr);
}

#endif // SORT_ALGORITHMS_H
