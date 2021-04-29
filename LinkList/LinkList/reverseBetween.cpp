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

ListNode *reverseList2(ListNode *head) {
    if (head->next == nullptr) return head;
    ListNode *last = reverseList2(head->next);
    head->next->next = head;
    head->next = nullptr;
    return last;
}

ListNode *successor = nullptr; // 后驱节点

// 反转以 head 为起点的 n 个节点，返回新的头结点
ListNode *reverseListN2(ListNode *head, int n) {
    if (n == 1) {
        // 记录第 n + 1 个节点
        successor = head->next;
        return head;
    }
    // 以 head.next 为起点，需要反转前 n - 1 个节点
    ListNode *last = reverseListN2(head->next, n - 1);

    head->next->next = head;
    // 让反转之后的 head 节点和后面的节点连起来
    head->next = successor;
    return last;
}
