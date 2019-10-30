//
// Created by zhanghao1 on 2019/10/10.
//


#include <vector>
#include "../../include/common/ListBuilder.h"
using namespace std;

ListNode *ListBuilder::getHead() {
    return head;
}

ListBuilder::ListBuilder(vector<int> &nums) {
    head = nullptr;
    tail = nullptr;
    int len = (int) nums.size();
    for (int i = 0;i<len;i++){
        // 此处不可以用 ListNode node(nums[i]); 因为栈内存退出代码块后会被回收
        ListNode *node = new ListNode(nums[i]);
        if (head == nullptr){
            tail = node;
            head = tail;
        }
        else {
            tail ->next = node;
            tail = tail->next;
        }
    }
}