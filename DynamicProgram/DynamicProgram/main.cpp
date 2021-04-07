//
//  main.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/3.
//

#include <iostream>
#include "maxSubArray.h"
#include "findLength.h"
#include "longestCommonSubsequence.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    nums = {-1, -2};
    int res = maxSubArray(nums);
    
    
    vector<int> a = {1,2,3,2,1};
    vector<int> b = {3,2,1,4,7};
    findLength(a, b);
    
    string s1 = "abcde";
    string s2 = "ace";
    int max = longestCommonSubsequence(s1, s2);
    
    
    return 0;
}
