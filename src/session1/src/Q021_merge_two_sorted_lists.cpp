//
// Created by zhanghao1 on 2019/10/10.
//

#include "../include/Q021_merge_two_sorted_lists.h"
#include "../include/common/ListNode.h"
#include "../include/common/ListBuilder.h"
#include "../include/common/PrintUtil.h"

ListNode *Q021_merge_two_sorted_lists::mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr){
        return l2;
    }
    if (l2 == nullptr){
        return l1;
    }
    if (l1 -> val < l2 -> val){
        ListNode *nextHead = l1 -> next;
        l1 -> next = Q021_merge_two_sorted_lists::mergeTwoLists(nextHead, l2);
        return l1;
    }
    else {
        ListNode *nextHead = l2 -> next;
        l2 -> next = Q021_merge_two_sorted_lists::mergeTwoLists(l1, nextHead);
        return l2;
    }
}

void Q021_merge_two_sorted_lists::execute() {
    vector<int> nums1 {1,2,3};
    vector<int> nums2 {1,2,4};
    ListBuilder listBuilder1(nums1),listBuilder2(nums2);
    ListNode* l1 = listBuilder1.getHead();
    ListNode* l2 = listBuilder2.getHead();
    ListNode* resultPtr = Q021_merge_two_sorted_lists::mergeTwoLists(l1,l2);
    PrintUtil::printNodeList(resultPtr);
}
