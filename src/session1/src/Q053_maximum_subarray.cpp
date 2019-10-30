//
// Created by zhanghao1 on 2019/10/24.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "Q053_maximum_subarray.h"
using namespace std;

int Q053_maximum_subarray::maxSubArray(vector<int> &nums) {
    int len = (int) nums.size();
    vector<int> maxArr {};
    int maxRet = nums[0];
    maxArr.push_back(nums[0]);
    for (int i = 1;i<len;i++){
        if (maxArr[i - 1] < 0){
            maxArr.push_back(nums[i]);
        }
        else {
            maxArr.push_back(maxArr[i - 1] + nums[i]);
        }
        maxRet = max(maxArr[i],maxRet);
    }
    return maxRet;
}

void Q053_maximum_subarray::execute() {
    vector<int> nums {-2,1,-3,4,-1,2,1,-5,4};
    cout << Q053_maximum_subarray::maxSubArray(nums) << endl;
}
