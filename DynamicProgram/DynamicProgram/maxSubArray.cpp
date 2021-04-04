//
//  maxSubArray.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/4.
//

#include "maxSubArray.h"

int maxSubArray(std::vector<int> &nums) {
    int res = INT32_MIN;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            res = fmax(sum, res);
        }
        res = fmax(res, sum);
    }
    return res;
}
