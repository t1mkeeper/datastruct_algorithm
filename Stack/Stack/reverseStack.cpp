//
//  reverseStack.cpp
//  Stack
//
//  Created by t1mkeeper on 2021/4/20.
//

#include "reverseStack.h"

using namespace std;

void pushToBottom(stack<int> &st, int value) {
    int tmp;
    if(st.empty()) {
        st.push(value);
        return;
    }
    
    tmp = st.top();
    st.pop();
    pushToBottom(st,value);
    st.push(tmp);
}

void reverseStack(std::stack<int> &st) {
    if (st.empty()) {
        return;
    }
    
    int val = st.top();
    st.pop();
    reverseStack(st);
    pushToBottom(st, val);
    
}
