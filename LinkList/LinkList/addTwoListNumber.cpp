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
    
    while (l1 || l2) {
        int v1 = l1 ? l1->val : 0;
        int v2 = l2 ? l2->val : 0;
        int sum = addone ? v1 + v2 + 1 : v1 + v2;
        int val = sum >= 10 ? sum - 10 : sum;
        
        ListNode *node = new ListNode(val);
        p->next = node;
        p = p->next;
        
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
        
        addone = sum >= 10 ? true : false;
    }
    
    if (addone) {
        p->next = new ListNode(1);
    }
    
    return dummy->next;
}
