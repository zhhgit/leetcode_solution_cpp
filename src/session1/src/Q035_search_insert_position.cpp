//
// Created by zhanghao1 on 2019/10/16.
//
#include <iostream>
#include <vector>
#include "../include/Q035_search_insert_position.h"
#include "../include/common/PrintUtil.h"
using namespace std;

int Q035_search_insert_position::searchInsert(vector<int> &nums, int target) {
    int len =(int) nums.size();
    for (int i = 0;i<len;i++){
        if (target == nums[i]){
            return i;
        }
        else if (nums[i] > target) {
            return i;
        }
    }
    return len;
}

void Q035_search_insert_position::execute() {
    vector<int> nums {1,3,5,6};
    vector<int> targets {5,2,7,0};
    for (int i=0;i<targets.size();i++){
        cout << targets[i] << " ==> ";
        cout << Q035_search_insert_position::searchInsert(nums,targets[i]) << endl;
    }
}