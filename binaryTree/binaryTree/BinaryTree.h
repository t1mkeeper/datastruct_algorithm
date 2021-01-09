//
//  BinaryTree.h
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/9.
//

#ifndef BinaryTree_H
#define BinaryTree_H

#include <stdio.h>

typedef struct Node {
    int val;
    Node *left;
    Node *right;
    Node *next;
    Node(int val) : val(val), left(NULL), right(NULL), next(NULL) {};
}Node;

void addLeftNode(Node *n);
void addRightNode(Node *n);

#endif /* BinaryTree_H */
