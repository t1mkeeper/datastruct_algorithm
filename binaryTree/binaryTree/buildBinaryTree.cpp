//
//  buildBinaryTree.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/14.
//

#include "buildBinaryTree.h"

TreeNode* build(vector<int> &preorder, int preStart, int preEnd,
                vector<int> &inorder,  int inStart,  int inEnd) {
    if (preStart > preEnd) {
        return nullptr;
    }
    
    int rootVal = preorder[preStart];
    TreeNode *rootNode = new TreeNode(rootVal);
    
    int inIndex = 0;
    for (int i = 0; i <= inEnd; i++) {
        if (inorder[i] == rootVal) {
            inIndex = i;
            break;
        }
    }
    
    int leftSize = inIndex - inStart;
    
    rootNode->left = build(preorder, preStart + 1, preStart + leftSize, inorder, inStart, inIndex - 1);
    rootNode->right = build(preorder, preStart + leftSize + 1, preEnd, inorder, inIndex + 1, inEnd);
    return rootNode;
}

TreeNode* buildTree1(vector<int> &preorder, vector<int> &inorder) {
    
    return build(preorder, 0, (int)preorder.size() - 1,
                 inorder, 0, (int)inorder.size() - 1);
}





TreeNode* buildTree2(vector<int> &postorder, vector<int> &inorder) {
    
    return nullptr;
}
