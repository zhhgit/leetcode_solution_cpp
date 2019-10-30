//
// Created by zhanghao1 on 2019/9/30.
//
#include <vector>
#include <string>
using namespace std;
#ifndef SESSION1_Q014_LONGEST_COMMON_PREFIX_H
#define SESSION1_Q014_LONGEST_COMMON_PREFIX_H


class Q014_longest_common_prefix {
public:
    void execute();
    string longestCommonPrefix(vector<string>& strs);

private:
    int minLen(vector<string>& strs);
    int checkSameAtPos(vector<string>& strs, int pos);
};

#endif //SESSION1_Q014_LONGEST_COMMON_PREFIX_H