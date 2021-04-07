//
//  main.cpp
//  Stack
//
//  Created by t1mkeeper on 2021/4/7.
//

#include <iostream>
#include "NextGreaterElement.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> v1 = {4, 1, 2};
    vector<int> v2 = {1, 3, 4, 2};
    vector<int> res = nextGreaterElement(v1, v2);
    
    return 0;
}
