#ifndef KNAPSACK
#define KNAPSACK

#include <iostream>

template <class T>
T max(T a, T b) {
  return a > b ? a : b;
}
template <class T> //0-1背包问题
T bool_knapsack(T v[], T w[], int n, int W) {
  T dp[n + 1][W + 1];
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= W; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      } else if (w[i - 1] <= j) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  return dp[n][W];
}

//背包问题
template<class T> 
T* percent(T v[], T w[], int n) {
  T* p = new T[n];
  for (int i = 0; i < n; i++) {
    p[i] = (double)(v[i] / w[i]);
  }
  return p;
}

template<class T>
T knapsack(T v[], T w[], int n, int W) {
  T* p = percent(v, w, n);
  sort(p, p+n, greater<T>());
  T res = 0;
  int ww = 0;
  for (int i = 0; i < n; i++) {
    if (ww >= W) { break; }
    if (W - ww >= w[i]) {
      ww += w[i];
      res += v[i];
    }
    if (W - ww < w[i]) {
      res += (W - ww) * p[i];
      ww = W;
    }
  }
  delete[] p;
  return res;
}

#endif