//
//  main.cpp
//  Stack
//
//  Created by t1mkeeper on 2021/4/7.
//

#include <iostream>
#include "NextGreaterElement.h"
#include "reverseStack.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> v1 = {4, 1, 2};
    vector<int> v2 = {1, 3, 4, 2};
    vector<int> res = nextGreaterElement(v1, v2);
    
    vector<int> vst{1, 2, 3, 4, 5};
    stack<int> st;
    for (int val : vst) {
        st.push(val);
    }
//    while (!st.empty()) {
//        printf("%d \n", st.top());
//        st.pop();
//    }
    reverseStack(st);
    
//    lz_Revers(st, false);
    
    while (!st.empty()) {
        printf("%d \n", st.top());
        st.pop();
    }

    return 0;
}
