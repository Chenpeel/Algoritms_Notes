#ifndef RESOURCE_ALLOC
#define RESOURCE_ALLOC

#include <iostream>

template <class T>

T resource_alloc(T w[], T v[], int n, int a) {
  T dp[a + 1];
  std::fill(dp, dp + a + 1, 0);
  for (int i = 0; i < n; i++) {
    for (int j = a; j >= w[i]; j--) {
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
  }
  return dp[a];
}

#endif