//
// Created by zhanghao1 on 2019/9/30.
//

#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <Q014_longest_common_prefix.h>

#include "../include/Q014_longest_common_prefix.h"
using namespace std;


void Q014_longest_common_prefix::execute() {
    vector<vector<string>> strsArr;
    vector<string> strs1 {"flower","flow","flight"};
    vector<string> strs2 {"dog","racecar","car"};
    strsArr.push_back(strs1);
    strsArr.push_back(strs2);
    for (int i = 0;i< strsArr.size();i++){
        cout << Q014_longest_common_prefix:: longestCommonPrefix(strsArr[i]) << endl;
    }
}

string Q014_longest_common_prefix::longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0){
        return "";
    }
    int minLen = Q014_longest_common_prefix::minLen(strs);
    if (minLen == 0){
        return "";
    }
    string ret = "";
    for (int i = 0;i<minLen;i++){
        if (Q014_longest_common_prefix::checkSameAtPos(strs,i)){
            ret.append(string(1,strs[0][i]));
        }
        else {
            return ret;
        }
    }
    return ret;
}

int Q014_longest_common_prefix::minLen(vector<string> &strs) {
    int min = numeric_limits<int>::max();
    for (int i = 0;i<strs.size();i++){
        string curr = strs[i];
        if (curr.size() < min){
            min = (int) curr.size();
        }
    }
    return min;
}

int Q014_longest_common_prefix::checkSameAtPos(vector<string> &strs, int pos) {
    char c = strs[0][pos];
    for (int i = 1;i<strs.size();i++){
        if (strs[i][pos] != c){
            return false;
        }
    }
    return true;
}