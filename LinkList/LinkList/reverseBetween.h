//
//  reverseBetween.h
//  LinkList
//
//  Created by t1mkeeper on 2021/1/7.
//

#ifndef reverseBetween_H
#define reverseBetween_H

#include <stdio.h>
#include "LinkList.h"

ListNode* reverseList(ListNode *head);
ListNode* reverseListBetween(ListNode* head, int m, int n);

//递归实现
//反转整个链表
ListNode *reverseList2(ListNode *head);
//反转前n个结点
ListNode *reverseListN2(ListNode *head, int n);

#endif /* reverseBetween_H */
