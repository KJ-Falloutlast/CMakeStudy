// test_sort_algorithms.cpp

#include <iostream>
#include <vector>
#include "sort_algorithms.h"

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    
    // 测试冒泡排序
    std::vector<int> arr_bubble = arr;
    SortAlgorithms::bubbleSort(arr_bubble);
    std::cout << "Bubble Sort Result: ";
    for (int num : arr_bubble) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 测试快速排序
    std::vector<int> arr_quick = arr;
    SortAlgorithms::quickSort(arr_quick, 0, arr_quick.size() - 1);
    std::cout << "Quick Sort Result: ";
    for (int num : arr_quick) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 测试插入排序
    std::vector<int> arr_insertion = arr;
    SortAlgorithms::insertionSort(arr_insertion);
    std::cout << "Insertion Sort Result: ";
    for (int num : arr_insertion) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
