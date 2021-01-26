//
//  deleteTreeNode.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/26.
//

#include "deleteTreeNode.h"

TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return root;
    
    if (key == root->val) {
        if (!root->left && !root->right) {
            return nullptr;
        }
        if (!root->left && root->right) {
            return root->right;
        }
        if (root->left && !root->right) {
            return root->left;
        }
        if (root->left && root->right) {
            TreeNode *p = root->right;
            while (p->left) {
                p = p->left;
            }
         
            //两种做法都可以
#if 0
            /**
             1. 没有实际删除目标节点，而是替换了val
             2. 删除了右子树的值最小的节点
             */
            root->val = p->val;
            root->right = deleteNode(p, p->val);
#else
            /**
             1.找到右子树下最小的节点，这个节点的left指向待删除节点的左子树
             2.返回待删除节点的右子树，从而删除了待删除节点
             */
            p->left = root->left;
            root = root->right;
            return root;
#endif
        }
    }
    
    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }
    if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }
    return root;
}
