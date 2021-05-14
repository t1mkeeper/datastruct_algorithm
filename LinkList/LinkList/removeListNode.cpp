//
//  removeListNode.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/4/30.
//

#include "removeListNode.h"

ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (!head) {
        return head;
    }
    ListNode *dummy = new ListNode(-1, head);
    ListNode *cur = head;
    ListNode *pre = dummy;
    int count = 0;
    while (cur) {
        if (count >= n) {
            pre = pre->next;
        }
        cur = cur->next;
        count++;
    }
    pre->next = pre->next->next;
    
    return dummy->next;
}
