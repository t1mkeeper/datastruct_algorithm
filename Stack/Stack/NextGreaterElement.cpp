//
//  NextGreaterElement.cpp
//  Stack
//
//  Created by t1mkeeper on 2021/4/7.
//

#include "NextGreaterElement.h"
#include <stack>
#include <unordered_map>

using namespace std;
std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
    stack<int> s;
    vector<int> res;
    unordered_map<int, int> m;
    
    for (int i = 0; i < nums2.size(); i++) {
        while (!s.empty() && s.top() < nums2[i]) {
            m[s.top()] = nums2[i];
            s.pop();
        }
        s.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++) {
        res.push_back(m.count(nums1[i]) ? m[nums1[i]] : -1);
    }
    return res;
}
