//
//  BuildMaxBinaryTree.h
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/12.
//

#ifndef BuildMaxBinaryTree_H
#define BuildMaxBinaryTree_H

#include <stdio.h>
#include "BinaryTree.h"
#include <vector>

using namespace std;

/**
 给定一个不含重复元素的整数数组 nums 。一个以此数组直接递归构建的 最大二叉树 定义如下：

 二叉树的根是数组 nums 中的最大元素。
 左子树是通过数组中 最大值左边部分 递归构造出的最大二叉树。
 右子树是通过数组中 最大值右边部分 递归构造出的最大二叉树。
 返回有给定数组 nums 构建的 最大二叉树 。
 */
TreeNode* constructMaximumBinaryTree(vector<int>& nums);

#endif /* BuildMaxBinaryTree_H */
