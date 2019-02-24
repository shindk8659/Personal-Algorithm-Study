//
//  main.cpp
//  RazerBraket
//
//  Created by 신동규 on 2/24/19.
//  Copyright © 2019 Algorithm_Study. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    // 레이저 자르기 문제
    string brakets;
    cout << "괄호 스트링을 입력하세요 \n";
    cin >> brakets;
    
    int barCount = 0;
    stack<char> stack;
    
    for (int i = 0; i < brakets.length(); i++) {
        if (brakets[i] == '(') {
            stack.push(i);
        }
        else {
            if (stack.top() + 1 == i) {
                stack.pop();
                barCount += stack.size();
            }
            else {
                stack.pop();
                barCount += 1;
            }
        }
        
        
    }
    
    printf("%d",barCount);
    
    return 0;
}
