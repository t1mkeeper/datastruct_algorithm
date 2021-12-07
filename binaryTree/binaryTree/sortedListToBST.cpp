//
//  sortedListToBST.cpp
//  binaryTree
//
//  Created by t1mkeeper on 2021/12/7.
//

#include "sortedListToBST.h"

ListNode *getMidNode(ListNode *head) {
    if (!head || !head->next) {
        return head;
    }
    ListNode *p1 = head;
    ListNode *p2 = head;
    ListNode *preP1 = nullptr;
    while (p2 && p2->next) {
        preP1 = p1;
        p1 = p1->next;
        p2 = p2->next->next;
    }
    preP1->next = nullptr;
    return p1;
}

TreeNode *build(ListNode *head) {
    if (!head) {
        return nullptr;
    }
    if (!head->next) {
        return new TreeNode(head->val);
    }
    
    ListNode *mid = getMidNode(head);
    TreeNode *root = new TreeNode(mid->val);
    
    root->left = build(head);
    root->right = build(mid->next);
    return root;
}

TreeNode* sortedListToBST(ListNode* head) {
    TreeNode *root = build(head);
    return root;
}
