#ifndef MAX_SUBARRAY_SUM
#define MAX_SUBARRAY_SUM

#include <iostream>
// 分治
template <class T>
T max(T a, T b, T c) {
  return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

template <class T>
T maxCrossingSubarraySum(T A[], int low, int mid, int high) {
  T left_sum = 0;
  T right_sum = 0;
  T sum = 0;

  for (int i = mid; i >= low; i--) {
    sum += A[i];
    if (sum > left_sum) left_sum = sum;
  }

  sum = 0;
  for (int i = mid + 1; i <= high; i++) {
    sum += A[i];
    if (sum > right_sum) right_sum = sum;
  }

  return left_sum + right_sum;
}

template <class T>
T max_subarray_sum(T A[], int low, int high) {
  if (low == high) return A[low];

  int mid = (low + high) / 2;

  T left_sum = maxSubarraySum(A, low, mid);  // 递归计算左子序列最大子段和
  T right_sum = maxSubarraySum(A, mid + 1, high);  // 递归计算右子序列最大子段和
  T cross_sum =
      maxCrossingSubarraySum(A, low, mid, high);  // 跨越中间位置的最大子段和

  return max(left_sum, right_sum, cross_sum);  // 返回三者中的最大值
}

// dp
template <class T>
T max(T a, T b) {
  return a > b ? a : b;
}
template <class T>
T max_subarray_sum(T list[], int n) {
  T dp[n + 1];
  dp[0] = 0;
  T res = list[0];
  for (int i = 1; i < n + 1; i++) {
    dp[i] = max(dp[i - 1] + list[i - 1], dp[i - 1]);
    res = max(dp[i], res);
  }
  return res;
}

#endif