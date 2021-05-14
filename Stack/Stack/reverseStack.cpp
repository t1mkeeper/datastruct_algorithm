//
//  reverseStack.cpp
//  Stack
//
//  Created by t1mkeeper on 2021/4/20.
//

#include "reverseStack.h"

using namespace std;

void pushToBottom(stack<int> &st, int bottomVal) {
    if(st.empty()) {
        st.push(bottomVal);
        return;
    }
    int val = st.top();
    st.pop();
    pushToBottom(st, bottomVal);
    st.push(val);
}

void reverseStack(std::stack<int> &st) {
    if (st.empty()) {
        return;
    }
    int val = st.top();
    st.pop();
    reverseStack(st);
    //val : 1-2-3-4-5
    pushToBottom(st, val);
}
