//
//  main.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/1/7.
//

#include <iostream>
#include "LinkList.h"
#include "reverseBetween.h"
#include "mergeSortedList.h"
#include "addTwoListNumber.h"
#include "SortList.h"
#include "LRU.h"

#include <unordered_map>
#include <unordered_set>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int m = 4;
    while (--m) {
        printf("%d \n", m);
    }
    
    ListNode *list = createList(10);
    printList(list);
    
//    addNode(list, new ListNode(99));
//    printList(list);
    
    ListNode *reverse = reverseList2(list);
    printList(reverse);
//
//    ListNode *reverseBetween = reverseListBetween(reverse, 1, 3);
//    printList(reverseBetween);
    
    
//    ListNode *l1 = new ListNode(1);
//    addNode(l1, new ListNode(2));
//    addNode(l1, new ListNode(4));
//    addNode(l1, new ListNode(10));
//    ListNode *l2 = new ListNode(4);
//    addNode(l2, new ListNode(5));
//    addNode(l2, new ListNode(6));
//    addNode(l2, new ListNode(11));
//    ListNode *merge = mergeSortedList(l1, l2);
//    printList(merge);
    
//    ListNode *l1 = new ListNode(9);
//    addNode(l1, new ListNode(9));
//    ListNode *l2 = new ListNode(9);
//    addNode(l2, new ListNode(9));
//    addNode(l2, new ListNode(9));
    ListNode *l1 = new ListNode(3);
    addNode(l1, new ListNode(7));
    ListNode *l2 = new ListNode(9);
    addNode(l2, new ListNode(2));
    ListNode *sum = addTwoNumbers(l1, l2);
    printList(sum);
    
    ListNode *sort = new ListNode(3);
    addNode(sort, new ListNode(2));
    addNode(sort, new ListNode(5));
    addNode(sort, new ListNode(1));
    addNode(sort, new ListNode(9));
    addNode(sort, new ListNode(8));
    addNode(sort, new ListNode(10));
    addNode(sort, new ListNode(4));
    
//    ListNode *lll = createList(10);
    printList(sortList(sort));
    
    ListNode *move = new ListNode(3);
    addNode(move, new ListNode(10));
    addNode(move, new ListNode(2));
    addNode(move, new ListNode(5));
    addNode(move, new ListNode(9));
    addNode(move, new ListNode(1));
    addNode(move, new ListNode(8));
    addNode(move, new ListNode(4));
    
//    printList(moveList(move, 6));
    printList(partitionList2(move, 6));
    
    LRU *lru = new LRU();
    std::vector<std::vector<int>> input = {{1,1,1},{1,2,2},{1,3,2},{2,1},{1,4,4},{2,2}};
    lru->test(input, 3);
    
    return 0;
}
