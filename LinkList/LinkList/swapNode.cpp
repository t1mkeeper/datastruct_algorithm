//
//  swapNode.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/12/1.
//

#include "swapNode.h"

ListNode* swapPairs1(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }
    ListNode *next = head->next;
    head->next = swapPairs1(next->next);
    next->next = head;
    return next;
    
}

ListNode* swapPairs2(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }
    ListNode *cur = head;
    ListNode *next = head->next;
    ListNode *dummy = new ListNode(-1, cur);
    ListNode *tmp = dummy;
    
    while (tmp->next && tmp->next->next) {
        cur = tmp->next;
        next = tmp->next->next;
        
        // tmp = next->next;
        tmp->next = next;
        cur->next = next->next;
        next->next = cur;
        
        tmp = cur;
    }
    
    return dummy->next;
}

