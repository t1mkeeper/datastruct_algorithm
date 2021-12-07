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

std::vector<std::string> topKFrequent2(std::vector<std::string>& words, int k) {
    vector<string> res(k);
    unordered_map<string, int> map;
    for (string str : words) {
        map[str]++;
    }
    auto cmp = [](pair<string, int> &a, pair<string, int> &b){
        if (a.second == b.second) {
            int aval = a.first[0];
            int bval = b.first[0];
            return a.first < b.first;
        }
        return a.second > b.second;
    };
    priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> q(cmp);
     for (auto kv : map) {
         q.push(kv);
         if (q.size() > k) {
             q.pop();
         }
     }
    
    // for (int i = 0; i < k; i++) {
    //     res[i] = q.top().first;
    //     q.pop();
    // }
    // while (!q.empty()) {
    //     res.push_back(q.top().first);
    //     q.pop();
    // }
    
//    for (auto& it : map) {
//        q.emplace(it);
//        if (q.size() > k) {
//            q.pop();
//        }
//    }
//    for (int i = k - 1; i >= 0; i--) {
//        res[i] = q.top().first;
//        q.pop();
//    }
     for (int i = 0; i < k; i++) {
         res[i] = q.top().first;
         q.pop();
     }
    return res;
}
