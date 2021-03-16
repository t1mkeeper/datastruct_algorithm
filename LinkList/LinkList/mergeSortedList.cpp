//
//  mergeSortedList.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/3/16.
//

#include "mergeSortedList.h"

ListNode *mergeSortedList(ListNode *l1, ListNode *l2) {
    if (!l1) {
        return l2;
    }else if (!l2) {
        return l1;
    }
    
    ListNode *dummy = new ListNode(-1);
    ListNode *cur = dummy;
    
    while (l1 && l2) {
        if (l1->val < l2->val) {
            cur->next = l1;
            l1 = l1->next;
        }else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    
    if (l1) {
        cur->next = l1;
    }else {
        cur->next = l2;
    }
    return dummy->next;
}
