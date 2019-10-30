//
// Created by zhanghao1 on 2019/10/28.
//
#include <iostream>
#include <string>
#include "Q058_length_of_last_word.h"
using namespace std;

int Q058_length_of_last_word::lengthOfLastWord(string s) {
    int startPos = Q058_length_of_last_word::findStartPos(s);
    int endPos = Q058_length_of_last_word::findEndPos(s);
    int i;
    for (i = endPos;i>=startPos && i>=0;i--){
        if (s[i] == ' '){
            return endPos - i;
        }
    }
    if (i == startPos - 1){
        return endPos - startPos + 1;
    }
    return 0;
}

void Q058_length_of_last_word::execute() {
    string sArr[] = {"", "Hello World","   Hello World  ","aaa"};
    int len = sizeof(sArr) / sizeof(sArr[0]);
    for (int i = 0;i<len;i++){
        cout << sArr[i] << " ===> " << Q058_length_of_last_word::lengthOfLastWord(sArr[i]) << endl;
    }
}

int Q058_length_of_last_word::findStartPos(string s) {
    return (int) s.find_first_not_of(" ");
}

int Q058_length_of_last_word::findEndPos(string s) {
    return (int) s.find_last_not_of(" ");
}