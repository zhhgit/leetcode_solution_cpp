//
// Created by zhanghao1 on 2019/10/10.
//
#include <vector>
#include "./ListNode.h"
#ifndef SESSION1_LISTBUILDER_H
#define SESSION1_LISTBUILDER_H
using namespace std;

class ListBuilder {
private:
    ListNode *head, *tail;

public:
    ListNode* getHead();
    ListBuilder(vector<int> &nums);
};


#endif //SESSION1_LISTBUILDER_H
