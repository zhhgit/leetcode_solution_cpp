//
// Created by zhanghao1 on 2019/9/29.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include "../include/Q013_roman_to_integer.h"
using namespace std;

void Q013_roman_to_integer::execute() {
    string strs[] = {"III","IV","IX","LVIII","MCMXCIV"};
    int len = sizeof(strs) / sizeof(strs[0]);
    for (int i = 0;i<len;i++){
        int result = Q013_roman_to_integer::romanToInt(strs[i]);
        cout << strs[i] << " ===> " << result << endl;
    }
}

int Q013_roman_to_integer::romanToInt(string s) {
    unordered_map<string, int> dict;
    string strs[] = {"I","V","X","L","C","D","M"};
    int nums[] = {1,5,10,50,100,500,1000};
    int len = sizeof(strs) / sizeof(strs[0]);
    for (int i = 0;i<len;i++){
        dict.insert({strs[i],nums[i]});
    }
    int ret = 0;
    int minus = 0;
    for (int i = 0;i<s.size();i++){
        char c = s[i];
        ret += dict.at(string(1,c));
    }
    for (int i = 0;i<s.size() - 1;i++){
        int leftVal = dict.at(string(1,s[i]));
        int rightVal = dict.at(string(1,s[i + 1]));
        if (leftVal < rightVal){
            minus += leftVal;
        }
    }
    return ret - 2 * minus;
}
