/*
1157. 子数组中占绝大多数的元素
设计一个数据结构，有效地找到给定子数组的 多数元素 。

子数组的 多数元素 是在子数组中出现 threshold 次数或次数以上的元素。

实现 MajorityChecker 类:

    MajorityChecker(int[] arr) 会用给定的数组 arr 对 MajorityChecker 初始化。

    int query(int left, int right, int threshold) 
    返回子数组中的元素  arr[left...right] 至少出现 threshold 次数，如果不存在这样的元素则返回 -1。
*/ 

#include <iostream>
#include <vector>
using namespace std;

class MajorityChecker {
public:
    MajorityChecker(vector<int>& arr) {
    }
    
    int query(int left, int right, int threshold) {

    }
};

/**
 * Your MajorityChecker object will be instantiated and called as such:
 * MajorityChecker* obj = new MajorityChecker(arr);
 * int param_1 = obj->query(left,right,threshold);
 */

