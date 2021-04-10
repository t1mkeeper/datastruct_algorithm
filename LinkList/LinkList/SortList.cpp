//
//  SortList.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/4/10.
//

#include "SortList.h"
#include "mergeSortedList.h"

ListNode *split(ListNode *node, int num) {
    if (!node) {
        return node;
    }
    
    ListNode *p = node;
    while (--num && p) {
        p = p->next;
    }
    if (!p) {
        return nullptr;
    }
    ListNode *res = p->next;
    p->next = nullptr;
    return res;
}

ListNode* sortList(ListNode* head) {
    if (!head) {
        return head;
    }
    ListNode *p = head;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    
    int length = 0;
    while (p) {
        length++;
        p = p->next;
    }
    
    for (int size = 1; size < length; size *= 2) {
        ListNode *pre = dummy;
        ListNode *cur = dummy->next;
        
        while (cur) {
            ListNode *l1 = cur;
            ListNode *l2 = split(l1, size);
            cur = split(l2, size);
            pre->next = mergeSortedList(l1, l2);
            while (pre->next) {
                pre = pre->next;
            }
        }
    }
    return dummy->next;
}
