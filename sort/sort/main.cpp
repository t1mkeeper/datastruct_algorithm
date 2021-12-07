//
//  main.cpp
//  sort
//
//  Created by t1mkeeper on 2021/12/7.
//

#include <iostream>
#include "QuickSort.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    int a[] = {57, 68, 59, 52, 72, 28, 96, 33, 24};
    vector<int> arr = {57, 68, 59, 52, 72, 28, 96, 33, 24};
    QuickSort(arr, 0, 8);
    
    return 0;
}
