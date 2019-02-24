//
//  main.cpp
//  StackBracket
//
//  Created by 신동규 on 2/24/19.
//  Copyright © 2019 Algorithm_Study. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    //괄호 스택 문제
    
    string brakets;
    cout << "괄호 스트링을 입력하세요!\n";
    cin >> brakets;
    
    stack<char> stack;
    
    for (int i = 0; i<brakets.length(); i++) {
        if (brakets[i] == '(') {
            stack.push(brakets.at(i));
        }
        else {
            if (!stack.empty()) {
                stack.pop();
            }
            else {
                printf("실패\n");
                return  0;
            }
           
        }
    }
    
    if (stack.empty()) {
        printf("성공\n");
    }
    else {
        printf("실패\n");
    }
    
 
    
    return 0;
    
    
    
   
}
