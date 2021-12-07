//
//  reverseStack.cpp
//  Stack
//
//  Created by t1mkeeper on 2021/4/20.
//

#include "reverseStack.h"

using namespace std;

void push2Bottom(stack<int> &st, int bottomVal) {
    if(st.empty()) {
        st.push(bottomVal);
        return;
    }
    int val = st.top();
    st.pop();
    push2Bottom(st, bottomVal);
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
    push2Bottom(st, val);
}

void lz_Revers(stack<int> &stack, bool is_pop_all) {
    int top = 0;
    if(!is_pop_all) {
        if(!stack.empty()) {
            top = stack.top();
            stack.pop();
            lz_Revers(stack, false);
        }
        else {
            is_pop_all = true;
            stack.push(top);
        }
    }
    else {
        stack.push(top);
        lz_Revers(stack, true);
    }
    

}
