#ifndef QUICK_SORT_H
#define QUICK_SORT_U

#include <iostream>
using std::vector;

template <typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
int part(vector<T>& v, int left, int right) {
  int n = v.size();
  int pivot = left + rand() % (right - left + 1);
  int i = left, j = right;
  while (i < j) {
    while (i < j && v[j] >= v[pivot]) {
      j--;
    }
    while (i < j && v[i] < v[pivot]) {
      i++;
    }
    if (i < j) {
      swap(v[i], v[j]);
    }
  }
  swap(v[i], v[pivot]);
  return i;
}

template <typename T>
void quick_sort(vector<T>& v, int left, int right) {
  if (left >= right) {
    return;
  }
  int mid = part(v, left, right);
  quick_sort(v, left, mid - 1);
  quick_sort(v, mid + 1, right);
}

template <typename T>
void quick_sort(vector<T>& v) {
  quick_sort(v, 0, v.size() - 1);
}
#endif