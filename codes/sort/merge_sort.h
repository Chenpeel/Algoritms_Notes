#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <iostream>
#include <vector>
using std::vector;
template <typename T>
void merge(vector<T>& arr, int left, int mid, int right) {
  vector<T> tmp(right - left + 1);
  int i = left, j = mid + 1, k = 0;
  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j]) {
      tmp[k++] = arr[i++];
    } else {
      tmp[k++] = arr[j++];
    }
  }
  while (i <= mid) {
    tmp[k++] = arr[i++];
  }
  while (j <= right) {
    tmp[k++] = arr[j++];
  }
  for (i = 0; i < k; i++) {
    arr[left + i] = tmp[i];
  }
}

template <typename T>
void merge_sort(vector<T>& arr, int left, int right) {
  if (left >= right) {
    return;
  }
  int mid = left + (right - left) / 2;
  merge_sort(arr, left, mid);
  merge_sort(arr, mid + 1, right);
  merge(arr, left, mid, right);
}

template <typename T>
void merge_sort(vector<T>& arr) {
  auto n = arr.size();
  merge_sort(arr, 0, n - 1);
}
#endif