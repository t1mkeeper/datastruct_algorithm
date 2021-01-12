//
//  connectNextNode.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/10.
//

#include "connectNextNode.h"
#include <queue>

using namespace std;

TreeNode *connect(TreeNode *root) {
    if(!root || root->left) return root;
    queue<TreeNode *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty()) {
        TreeNode *first = NULL;
        TreeNode *second = NULL;
        __SIZE_TYPE__ size = q.size();
        for (int i = 0; i < size; i++) {
            first = q.front();
            q.pop();
            if (first->left) {
                q.push(first->left);
            }
            if (first->right) {
                q.push(first->right);
            }
            second = q.front();
            if (i == size - 1) {
                first->next = NULL;
            }else {
                first->next = second;
            }
        }
        
    }
    
    return root;
}



void connectTwoNode(TreeNode *node1, TreeNode *node2) {
    if (!node1 || !node2) return;

    node1->next = node2;
    // node1->right->next = node2->left;
    connectTwoNode(node1->left, node1->right);
    connectTwoNode(node2->left, node2->right);
    connectTwoNode(node1->right, node2->left);
}

TreeNode *connectRecursion(TreeNode *root) {
    if (!root) return NULL;
    connectTwoNode(root->left, root->right);
    return root;
}



