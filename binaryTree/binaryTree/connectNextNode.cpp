//
//  connectNextNode.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/1/10.
//

#include "connectNextNode.h"
#include <queue>

using namespace std;

Node *connect(Node *root) {
    if(!root || root->left) return root;
    queue<Node *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty()) {
        Node *first = NULL;
        Node *second = NULL;
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
