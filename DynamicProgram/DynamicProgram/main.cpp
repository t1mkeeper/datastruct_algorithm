//
//  main.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/3.
//

#include <iostream>
#include "maxSubArray.h"
#include "findLength.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    nums = {-1, -2};
    int res = maxSubArray(nums);
    
    
    vector<int> a = {0, 0, 0};
    vector<int> b = {0, 0, 0};
    findLength(a, b);

    return 0;
}
