//
// Created by zhanghao1 on 2019/9/26.
//
#include <vector>
#include <iostream>
#include "common/PrintUtil.h"
#include "../../include/common/ListNode.h"

using namespace std;

void PrintUtil::printNumVector(vector<int> &nums){
    int len = (int) nums.size();
    for (int i = 0; i < len;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void PrintUtil::printNodeList(ListNode *head) {
    ListNode *curr = head;
    while (curr != nullptr){
        cout << (curr -> val);
        if (curr -> next != nullptr){
            cout << " --> " ;
        }
        curr = curr -> next;
    }
    cout << endl;
}
