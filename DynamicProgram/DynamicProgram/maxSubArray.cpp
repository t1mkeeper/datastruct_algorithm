//
//  maxSubArray.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/4.
//

#include "maxSubArray.h"

using namespace std;
int maxSubArray(std::vector<int> &nums) {
    int res = INT32_MIN;
    
    /**暴力解
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            res = fmax(sum, res);
        }
        res = fmax(res, sum);
    }
    */
    
    //dp
    vector<int> dp(nums.size(), 0);
//    dp[0] = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && dp[i - 1] > 0) {
            dp[i] = dp[i - 1] + nums[i];
        }else {
            dp[i] = nums[i];
        }
        res = fmax(res, dp[i]);
    }
    
    
    return res;
}
