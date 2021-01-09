//
//  main.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/9.
//

#include <iostream>
#include "BinaryTree.h"
#include "connectNextNode.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    //迭代
//    connect(root);
    //递归
    connectRecursion(root);
    
    return 0;
}
