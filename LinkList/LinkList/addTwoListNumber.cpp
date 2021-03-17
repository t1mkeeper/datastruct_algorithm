//
//  addTwoListNumber.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/3/17.
//

#include "addTwoListNumber.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *dummy = new ListNode(-1);
    ListNode *p = dummy;
    bool addone = false;
    while (l1 && l2) {
        int sum = addone ? l1->val + l2->val + 1 : l1->val + l2->val;
        int val = sum;
        if (sum >= 10) {
            val = sum - 10;
        }
        ListNode *node = new ListNode(val);
        p->next = node;
        p = p->next;
        
        l1 = l1->next;
        l2 = l2->next;
        
        addone = sum >= 10 ? true : false;
    }
    
    ListNode *p2 = l1 ? l1 : l2;
    while(p2) {
        int sum = addone ? p2->val + 1 : p2->val;
        int val = sum;
        if (sum >= 10) {
            val -= 10;
        }
        ListNode *node = new ListNode(val);
        p->next = node;
        p = p->next;
        
        p2 = p2->next;
        addone = sum >= 10 ? true : false;
    }
    if (addone) {
        p->next = new ListNode(1);
    }
    
    return dummy->next;
}
