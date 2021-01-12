//
//  binaryTree2List.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/12.
//

#include "binaryTree2List.h"

void flatten(TreeNode *root) {
    if (!root) {
        return;
    }
    
    flatten(root->left);
    flatten(root->right);
    
    //后序遍历
    //左子树放到右边，记录原来的右子树
    TreeNode *tmp = root->right;
    root->right = root->left;
    root->left = nullptr;
    
    //原来的右子树接到当前右子树末端
    TreeNode *p = root;
    while (p) {
        p = p->right;
    }
    p->right = tmp;
}
