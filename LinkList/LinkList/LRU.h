//
//  LRU.h
//  LinkList
//
//  Created by t1mkeeper on 2021/12/30.
//

#ifndef LRU_h
#define LRU_h

#include <stdio.h>
#include <list>
#include <unordered_map>
#include <vector>

class LRU {
    std::list<std::pair<int, int>> list;
    std::unordered_map<int, int> map;
    int capacity;
    
public:
    std::vector<int> test(std::vector<std::vector<int> >& operators, int k) {
        // write code here
        capacity = k;
        std::vector<int> res;
        for (auto &input : operators) {
            if (input[0] == 1) {
                set(input[1], input[2]);
            }else {
                res.push_back(get(input[1]));
            }
        }
        
        return res;
    }
    
    void set(int key, int value) {
        std::pair<int, int> node = std::pair<int, int>(key, value);
        
        if (map.find(key) == map.end()) {
            if (list.size() >= capacity) {
                std::pair<int, int> tail = list.back();
                list.pop_back();
                map.erase(tail.first);
            }
            list.push_front(node);
            map[key] = value;
        }else {
            list.remove(std::pair<int, int>(key, map[key]));
            list.push_front(node);
            map.erase(key);
//            map.insert(node.first, node.second);
            map[node.first] = node.second;
        }
    }
    
    int get(int key) {
        if (map.find(key) == map.end()) {
            return -1;
        }
        set(key, map[key]);
        return map[key];
    }
};

#endif /* LRU_h */
