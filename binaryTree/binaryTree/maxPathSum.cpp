//
//  maxPathSum.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/12/9.
//

#include "maxPathSum.h"
//#include "limits.h"
#include <math.h>

/**
 var maxPathSum = function (root) {
   let maxSum = Number.MIN_SAFE_INTEGER; // 最大路径和

   const dfs = (root) => {
     if (root == null) {
       // 遍历到null节点，收益0
       return 0;
     }
     const left = dfs(root.left); // 左子树提供的最大路径和
     const right = dfs(root.right); // 右子树提供的最大路径和

     const innerMaxSum = left + root.val + right; // 当前子树内部的最大路径和
     maxSum = Math.max(maxSum, innerMaxSum); // 挑战最大纪录

     const outputMaxSum = root.val + Math.max(left, right); // 当前子树对外提供的最大和

     // 对外提供的路径和为负，直接返回0。否则正常返回
     return outputMaxSum < 0 ? 0 : outputMaxSum;
   };

   dfs(root); // 递归的入口
   return maxSum;
 };
 */

int maxSum = INT32_MIN;

int dfs(TreeNode *root) {
    if (!root) {
        return 0;
    }
    int left = dfs(root->left);
    int right = dfs(root->right);
    
    int innerMaxSum = left + root->val + right;
    maxSum = fmax(maxSum, innerMaxSum);
    
    int outMaxSum = root->val + fmax(left, right);
    
    return outMaxSum;
}

int maxPathSum(TreeNode *root) {
    
    dfs(root);
    return maxSum;
}
