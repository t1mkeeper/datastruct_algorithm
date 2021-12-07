//
//  QuickSort.cpp
//  sort
//
//  Created by t1mkeeper on 2021/12/7.
//

#include "QuickSort.h"

using namespace std;

int Paritition1(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int count = 0;
    int size = high - low;
    while (low < high) {
        while (low < high && arr[high] >= pivot) {
            --high;
            count++;
        }
        arr[low] = arr[high];
        while (low < high && arr[low] <= pivot) {
            ++low;
            count++;
        }
        arr[high] = arr[low];
    }
    arr[low] = pivot;
    printf("size %d, count %d \n", size, count);
    return low;
}

int partition(vector<int> &arr, int l, int r) {
    if (l >= r) return 0;
    int tmp = arr[l];
    while (l < r) {
        while (l < r && arr[r] > tmp) {
            r--;
        }
        arr[l] = arr[r];
        while (l < r && arr[l] < tmp) {
            l++;
        }
        arr[r] = arr[l];
    }
    arr[l] = tmp;
    return l;
}

void QuickSort(vector<int> &arr, int low, int high) //快排母函数
{
    if (low < high) {
//        int pivot = Paritition1(arr, low, high);
        int pivot = partition(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    }
}


