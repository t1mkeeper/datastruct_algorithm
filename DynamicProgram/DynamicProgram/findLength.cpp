//
//  findLength.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/3.
//

#include "findLength.h"
#include <algorithm>

using namespace std;
int findLength(std::vector<int> &a, std::vector<int> &b) {
    int res = 0;
    
    /**暴力解
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            int length = 0;
            while (a[i + length] == b[j + length]) {
                length++;
            }
            res = fmax(res, length);
        }
    }
    */
    
    vector<vector<int>> dp(a.size() + 1, vector<int>(a.size() + 1, 0));
    int max = 0;
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= a.size(); j++) {
            if (a[i - 1] != b[j - 1]) {
                dp[i][j] = 0;
            }else {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            max = fmax(max, dp[i][j]);
        }
    }
    res = max;
    return res;
}
