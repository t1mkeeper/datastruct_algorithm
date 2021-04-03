//
//  findLength.cpp
//  DynamicProgram
//
//  Created by t1mkeeper on 2021/4/3.
//

#include "findLength.h"
#include <algorithm>

int findLength(std::vector<int> &a, std::vector<int> &b) {
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            int length = 0;
            while (a[i + length] == b[j + length]) {
                length++;
            }
            res = fmax(res, length);
        }
    }
    return res;
}
