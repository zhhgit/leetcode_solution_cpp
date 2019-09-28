//
// Created by zhanghao1 on 2019/9/27.
//
#include <iostream>
#include "../include/Q009_palindrome_number.h"
using namespace std;

bool Q009_palindrome_number::isPalindrome(int x) {
    if (x < 0){
        return false;
    }
    else if (x == 0){
        return true;
    }
    else {
        long long xLong = (long long) x;
        return Q009_palindrome_number::isPalindromePositive(xLong);
    }
}

void Q009_palindrome_number::execute() {
    int nums[] = {0,-12,12,121,123,120,1221,1234321};
    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0;i<len;i++){
        int curr = nums[i];
        cout << curr << " ===> ";
        cout << boolalpha << Q009_palindrome_number::isPalindrome(curr) << endl;
    }
}

bool Q009_palindrome_number::isPalindromePositive(long long x) {
    long long keep = x;
    long long xRev = 0;
    while (x > 0){
        xRev = xRev * 10 + x % 10;
        x = x / 10;
    }
    return (xRev == keep);
}