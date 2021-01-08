//
//  reverseBetween.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/1/7.
//

#include "reverseBetween.h"

ListNode *reverseList(ListNode *head) {
    if (!head || !head->next) return head;
    
    ListNode *pre = nullptr;
    ListNode *cur = head;
    while (cur) {
        ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

ListNode* reverseListBetween(ListNode* head, int m, int n) {
    if (!head || m == n || !head->next) {
        return head;
    }
    
    ListNode *dummy = new ListNode(-100);
    dummy->next = head;
    
    ListNode *cur = dummy;
    ListNode *pre = dummy;
    ListNode *mPreNode = nullptr;
    ListNode *mNode = nullptr;
    
    int count = 0;
    while (cur) {
        
        if (count >= m - 1 && count <= n) {
            if (count == m - 1) {
                pre = cur;
                mPreNode = cur;
                mNode = cur->next;
                cur = cur->next;
                count++;
                continue;
            }
            
            ListNode *tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
            
            if (count == n) {
                mPreNode->next = pre;
                mNode->next = cur;
                break;
            }
        }else {
            cur = cur->next;
        }
        
        count++;
    }
    
    return dummy->next;
}
