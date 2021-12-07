//
//  BinaryTree.h
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/9.
//

#ifndef BinaryTree_H
#define BinaryTree_H

#include <stdio.h>

typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode *next;
    TreeNode(int val) : val(val), left(NULL), right(NULL), next(NULL) {};
}TreeNode;

void addLeftNode(TreeNode *n);
void addRightNode(TreeNode *n);
void printBinaryTree(TreeNode* root, const char *elem_fmt, FILE *fp);
#endif /* BinaryTree_H */
