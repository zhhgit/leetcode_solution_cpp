//
// Created by zhanghao1 on 2019/9/26.
//
#include <vector>
#include <iostream>
#include "../include/PrintUtil.h"
using namespace std;

void PrintUtil::printNumVector(vector<int> &nums){
    int len = nums.size();
    for (int i = 0; i < len;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}
