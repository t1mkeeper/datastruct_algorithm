//
//  findDuplicateSubtrees.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/12/7.
//

#include "findDuplicateSubtrees.h"
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, int> map;
    vector<TreeNode *> res;

string postorder(TreeNode *root) {
        if (!root) {
            return "#";
        }
        string left = postorder(root->left);
        string right = postorder(root->right);
        
        string curTreeString = to_string(root->val) + "," + left + "," + right;
        // if(map[curTreeString] == 1){
        //     res.push_back(root);
        // }
        // mp[str]++;
        if (map.find(curTreeString) == map.end()) {
//            map.insert(curTreeString, 1);
            map.insert({curTreeString, 1});
        }else {
            res.push_back(root);
        }

        return curTreeString;
    }

vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
    postorder(root);
    return res;
}
