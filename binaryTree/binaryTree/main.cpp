//
//  main.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/9.
//

#include <iostream>
#include <vector>
#include "BinaryTree.h"
#include "connectNextNode.h"
#include "buildBinaryTree.h"
#include "deleteTreeNode.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    //迭代
//    connect(root);
    //递归
    connectRecursion(root);
    
    std::vector<int> preorder = {5,3,2,4,6,7};
    std::vector<int> inorder = {2,3,4,5,6,7};
    TreeNode *root1 = buildTree1(preorder, inorder);
    
    
    TreeNode *root2 = deleteNode(root1, 3);
    
    return 0;
}
