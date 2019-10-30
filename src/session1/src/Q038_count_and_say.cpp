//
// Created by zhanghao1 on 2019/10/21.
//
#include <iostream>
#include <string>
#include "../include/Q038_count_and_say.h"
using namespace std;

string Q038_count_and_say::countAndSay(int n) {
    if (n == 1){
        return "1";
    }
    string lastStr = countAndSay(n - 1);
    int len =(int) lastStr.size();
    string ret = "";
    int start = 0;
    for (int i = 1;i<len;i++){
        if (lastStr[i] != lastStr[i - 1]){
            ret.append(to_string(i - start));
            ret.append(string(1,lastStr[start]));
            start = i;
        }
    }
    ret.append(to_string(len - start));
    ret.append(string(1,lastStr[start]));
    return ret;
}

void Q038_count_and_say::execute() {
    int nums[] = {1,2,3,4,5};
    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0;i<len;i++){
        cout << Q038_count_and_say::countAndSay(nums[i]) << endl;
    }
}
