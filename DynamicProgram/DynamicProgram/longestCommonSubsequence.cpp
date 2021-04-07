//
//  longestCommonSubsequence.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/5.
//

#include "longestCommonSubsequence.h"
#include <vector>

using namespace std;

int longestCommonSubsequence(std::string text1, std::string text2) {
    int max = 0;
    
    /**暴力解
     
     
     
     */
    
    
    /**dp*/
    vector<vector<int>> dp(text1.length() + 1, vector<int>(text2.length() + 1, 0));
    dp[0][0] = 0;
    for (int i = 1; i <= text1.size(); i++) {
        for (int j = 1; j <= text2.size(); j++) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else {
                dp[i][j] = fmax(dp[i][j - 1], dp[i - 1][j]);
            }
            max = fmax(max, dp[i][j]);
        }
    }
    
    return max;
}
