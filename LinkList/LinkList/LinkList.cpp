//
//  LinkList.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/1/7.
//

#include "LinkList.h"

ListNode* createList(int num) {
    ListNode *dummy = new ListNode(0);
    ListNode *cur = dummy;
    for (int i = 0; i < num; i++) {
        ListNode *node = new ListNode(i);
        cur->next = node;
        cur = node;
    }
    
    return dummy->next;
}

void printList(ListNode *head) {
    if (!head) return;
    ListNode *cur = head;
    while (cur) {
        printf("val = %d \n", cur->val);
        cur = cur->next;
    }
    printf("-------------\n");
}

void addNode(ListNode *head, ListNode *node) {
    if (!head) return;
    ListNode *cur = head;
    while (cur->next) {
        cur = cur->next;
    }
    cur->next = node;
}
