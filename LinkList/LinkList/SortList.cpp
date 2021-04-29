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

//面试时写的
ListNode* partitionList(ListNode *head, int target) {
    if (!head) {
        return head;
    }
    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    
    ListNode *cur = dummy;
    ListNode *p = head;
    ListNode *pre = dummy;
    while (p) {
        if (p->val < target) {
            pre->next = p->next;
            p->next = cur->next;
            cur->next = p;
            cur = cur->next;
//            p = pre->next;
        }
        pre = pre->next;
        p = pre->next;
        
    }
    return dummy->next;
}

ListNode* partitionList2(ListNode *head, int target) {
    if (!head) {
        return head;
    }
    ListNode *left = new ListNode(-1);
    ListNode *lp = left;
    ListNode *right = new ListNode(-1);
    ListNode *rp = right;
    ListNode *cur = head;
    while (cur) {
        if (cur->val < target) {
            lp->next = cur;
            lp = lp->next;
        }else {
            rp->next = cur;
            rp = rp->next;
        }
        
        cur = cur->next;
    }
    rp->next = nullptr;
    if (left->next) {
        lp->next = right->next;
    }
    
    return left->next;
}
