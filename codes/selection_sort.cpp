#include <iostream>

template <typename T>
void swap(T &a, T &b) {
  T c = a;
  a = b;
  b = c;
}
template <typename T>
void selection_sort(T list[], int size) {
  for (int i = 0; i < size; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (list[j] < list[min_index]) min_index = j;
    }
    swap(list[i], list[min_index]);
  }
}