//
// Created by zhanghao1 on 2019/10/8.
//
#include <iostream>
#include <string>
#include <stack>
#include "../include/Q020_valid_parentheses.h"
using namespace std;

void Q020_valid_parentheses::execute() {
    string strs[] = {"()","()[]{}","(]","([)]","{[]}","){"};
    int len = sizeof(strs) / sizeof(strs[0]);
    for (int i = 0;i<len;i++){
        cout << strs[i] << " ===> ";
        cout << boolalpha << Q020_valid_parentheses::isValid(strs[i]) << endl;
    }
}

bool Q020_valid_parentheses::isValid(string s) {
    int sLen = (int) s.length();
    if (sLen == 0){
        return true;
    }
    if (sLen % 2 == 1){
        return false;
    }
    stack<char> stack1;
    for (auto currChar:s){
        if (currChar == '(' || currChar == '{' || currChar == '[' ){
            stack1.push(currChar);
        }
        else if (currChar == ')' || currChar == '}' || currChar == ']' ){
            if (stack1.empty()){
                return false;
            }
            char topChar = stack1.top();
            if ((topChar == '(' && currChar == ')') || (topChar == '{' && currChar == '}') || (topChar == '[' && currChar == ']') ){
                stack1.pop();
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    return stack1.empty();
}
