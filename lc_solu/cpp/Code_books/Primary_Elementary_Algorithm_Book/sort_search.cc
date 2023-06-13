#ifndef SORT_SEARCH
#define SORT_SEARCH

#include <deque>
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  // 尾插法
  int i = nums1.size();
  while (n > 0) {
    if (m > 0 && nums1[m - 1] > nums2[n - 1])
      nums1[--i] = nums1[--m];
    else
      nums1[--i] = nums2[--n];
  }
}

#endif