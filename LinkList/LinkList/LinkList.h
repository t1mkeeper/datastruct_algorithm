//
//  LinkList.h
//  LinkList
//
//  Created by t1mkeeper on 2021/1/7.
//

#ifndef LinkList_H
#define LinkList_H

#include <stdio.h>

typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {};
    ListNode(int val, ListNode *next) : val(val), next(next) {};
}ListNode;

ListNode* createList(int num);

void printList(ListNode *head);

void addNode(ListNode *head, ListNode *node);

#endif /* LinkList_H */
