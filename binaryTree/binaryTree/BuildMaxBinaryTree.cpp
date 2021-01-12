//
//  BuildMaxBinaryTree.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/12.
//

#include "BuildMaxBinaryTree.h"

TreeNode* build(vector<int> &nums, int start, int end) {
    if (start > end) return nullptr;
    
    int maxVal = -1;
    int maxIndex = 0;
    for (int i = start; i <= end; i++) {
        if (maxVal < nums[i]) {
            maxVal = nums[i];
            maxIndex = i;
        }
    }
    TreeNode *node = new TreeNode(maxVal);
    node->left = build(nums, start, maxIndex - 1);
    node->right = build(nums, maxIndex + 1, end);
    return node;
}

TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return build(nums, 0, (int)nums.size() - 1);
}

