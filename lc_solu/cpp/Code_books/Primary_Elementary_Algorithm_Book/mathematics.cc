#ifndef MATHEMATICS
#define MATHEMATICS

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief
 * 计数质数
 */
// 埃氏筛   O(n) = nlog(logn)
int countPrimes(int n) {
  int res = 0;
  if (n == 0 || n == 1) return res;
  vector<bool> v(n, true);
  for (int i = 2; i * i <= n; i++) {
    if (v[i] == false) {
      res++;
      if ((long)i * i < n) {
        for (int j = i * i; j < v.size(); j += i) v[j] = true;
      }
    }
  }
  for (int i = 2; i < n; i++) {
    if (v[i] == false) res++;
  }
  return res;
}

// 线性筛

bool isPowerOfThree(int n) {
  // 递归
  return n > 0 && (n == 1 || (n % 3 == 0 && isPowerOfThree(n / 3)));
}

int trans(char c) {
  switch (c) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
  }
  return 0;
}

int romanToInt(string s) {
  if (s.size() == 0) return 0;
  int sum = 0, prenum = trans(s[0]);
  for (int i = 1; i < s.size(); i++) {
    int num = trans(s[i]);

    if (prenum < num) {
      sum -= prenum;
    }

    else {
      sum += prenum;
    }
    prenum = num;
  }
  sum += prenum;
  return sum;
}

#endif