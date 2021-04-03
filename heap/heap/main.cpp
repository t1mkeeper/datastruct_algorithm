//
//  main.cpp
//  heap
//
//  Created by t1mkeeper on 2021/4/3.
//

#include <iostream>
#include <vector>
#include "topK.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> input = {1, 2, 3, 2, 2, 1, 5, 0, 4};
    vector<int> res = topKFrequent(input, 2);
    
    return 0;
}
