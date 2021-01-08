//
//  main.cpp
//  LinkList
//
//  Created by t1mkeeper on 2021/1/7.
//

#include <iostream>
#include "LinkList.h"
#include "reverseBetween.h"

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
    
    ListNode *reverse = reverseList(list);
    printList(reverse);
    
    ListNode *reverseBetween = reverseListBetween(reverse, 1, 3);
    printList(reverseBetween);
    
    return 0;
}
