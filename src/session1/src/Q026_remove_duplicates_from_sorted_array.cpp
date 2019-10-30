//
// Created by zhanghao1 on 2019/10/14.
//
#include <iostream>
#include <vector>
#include "../include/common/PrintUtil.h"
#include "../include/Q026_remove_duplicates_from_sorted_array.h"
using namespace std;

int Q026_remove_duplicates_from_sorted_array::removeDuplicates(vector<int> &nums) {
    int len =(int) nums.size();
    int index = 0;
    for (int i = 0;i<len;i++){
        if (i == 0 || nums[i] != nums[i - 1]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

void Q026_remove_duplicates_from_sorted_array::execute() {
    //vector<int> nums {1,1,2};
    vector<int> nums {0,0,1,1,1,2,2,3,3,4};
    cout << Q026_remove_duplicates_from_sorted_array::removeDuplicates(nums) << endl;
    PrintUtil::printNumVector(nums);
}