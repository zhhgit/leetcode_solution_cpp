//
// Created by zhanghao1 on 2019/10/15.
//
#include <iostream>
#include <string>
#include <Q028_implement_strstr.h>

#include "Q028_implement_strstr.h"
using namespace std;

int Q028_implement_strstr::strStr(string haystack, string needle) {
    int len1 =(int) haystack.size();
    int len2 =(int) needle.size();
    if (len2 == 0){
        return 0;
    }
    if (len1 < len2){
        return -1;
    }
    for (int i=0;i<len1 - len2 + 1;i++){
        if (Q028_implement_strstr::isSameAtPos(haystack,needle,i)){
            return i;
        }
    }
    return -1;
}

void Q028_implement_strstr::execute() {
    string haystackArr[] = {"hell","aaaaaa"};
    string needleArr[] = {"ll","baa"};
    int len = sizeof(haystackArr) / sizeof(haystackArr[0]);
    for(int i = 0;i<len;i++){
        string haystack = haystackArr[i];
        string needle = needleArr[i];
        cout << Q028_implement_strstr::strStr(haystack,needle) << endl;
    }
}

bool Q028_implement_strstr::isSameAtPos(string haystack, string needle, int pos) {
    int len =(int) needle.size();
    for (int i = 0;i < len;i++){
        if (haystack[i + pos] != needle[i]){
            return false;
        }
    }
    return true;
}
