//
// Created by zhanghao1 on 2019/9/24.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include "../include/Q001_two_sum.h"
#include "../include/PrintUtil.h"
using namespace std;

void Q001_two_sum::execute() {
    vector<int> nums {2,11,7,15};
    int target = 9;
    vector<int> ret = Q001_two_sum::twoSum(nums,target);
    PrintUtil::printNumVector(ret);
}

vector<int> Q001_two_sum::twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    vector<int> ret;
    for (int i = 0;i<nums.size();i++){
        int curr = nums[i];
        int remain = target - curr;
        if (map.find(remain) != map.end()){
            ret.push_back(map.at(remain));
            ret.push_back(i);
            return ret;
        }
        else {
            map.insert({curr,i});
        }
    }
    return ret;
}