//
// Created by zhanghao1 on 2019/9/26.
//
#include <iostream>
#include <limits>

#include "../include/Q007_reverse_integer.h"

using namespace std;

void Q007_reverse_integer::execute() {
    int nums[] = {(numeric_limits<int>::max)()};
    //int nums[] = {0,123,-123,120,-120,(numeric_limits<int>::max)(), (numeric_limits<int>::min)()};
    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i= 0;i<len;i++){
        cout << nums[i] << " ===> ";
        cout << Q007_reverse_integer::reverse(nums[i]) << endl;
    }
}

int Q007_reverse_integer::reverse(int x) {
    if (x == (numeric_limits<int>::min)()){
        return 0;
    }
    if (x < 0){
        return 0 - Q007_reverse_integer::reversePositive(0 - x);
    }
    else {
        return Q007_reverse_integer::reversePositive(x);
    }
}

int Q007_reverse_integer::reversePositive(int x) {
    long long ret = 0;
    while (x > 0){
        ret = ret * 10 + (x % 10);
        if (ret > (long long)(numeric_limits<int>::max)()){
            return 0;
        }
        x = x / 10;
    }
    return (int)ret;
}