//
//  buildBinaryTree.h
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/14.
//

#ifndef buildBinaryTree_H
#define buildBinaryTree_H

#include <stdio.h>
#include <vector>
#include "BinaryTree.h"
using namespace std;

//前序遍历和中序遍历构建二叉树
TreeNode* buildTree1(vector<int> &preorder, vector<int> &inorder);

//后序遍历和中序遍历构建二叉树
TreeNode* buildTree2(vector<int> &postorder, vector<int> &inorder);

#endif /* buildBinaryTree_H */
