//
//  topK.cpp
//  heap
//
//  Created by t1mkeeper on 2021/4/3.
//

#include "topK.h"
#include <queue>
#include <map>
#include <unordered_map>
#include <__hash_table>
#include <iterator>


using namespace std;
std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    vector<int> res;
    unordered_map<int, int> map;
    for (int val : nums) {
        map[val]++;
    }
    
    auto cmp = [](pair<int, int> &a, pair<int, int> &b){return a.second > b.second;};
    // priority_queue<int, vector<int>, decltype(cmp)> q(cmp);
//    priority_queue<int, vector<int>, greater<int>> q;
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
    for (auto kv : map) {
        if (q.size() < k) {
            q.push(kv);
        }else {
            if (kv.second > q.top().second) {
                q.pop();
                q.push(kv);
            }
        }
    }
    
    while (!q.empty()) {
        res.push_back(q.top().first);
        q.pop();
    }
    
    return res;
}
