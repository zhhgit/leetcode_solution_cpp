//
// Created by zhanghao1 on 2019/10/14.
//
#include <vector>
#include <iostream>
#include "../include/common/PrintUtil.h"
#include "../include/Q027_remove_element.h"
using namespace std;

int Q027_remove_element::removeElement(vector<int> &nums, int val) {
    int len = (int) nums.size();
    int index = 0;
    for (int i =0;i<len;i++){
        if (nums[i] != val){
            nums[index++] = nums[i];
        }
    }
    return index;
}

void Q027_remove_element::execute() {
    vector<int> nums {0,1,2,2,3,0,4,2};
    int val = 2;
    cout << Q027_remove_element::removeElement(nums,val) << endl;
    PrintUtil::printNumVector(nums);
}
