#ifndef BUBBLE_SORT
#define BUBBLE_SORT

#include <assert.h>

template <typename T>
static void BubbleSort(T list[], int start, int end) {
  int i;
  bool swapped;
  assert(start < end);
  do {
    swapped = false;
    for (i = start + 1; i <= end; i++) {
      if (list[i - 1] > list[i]) {
        swap(list[i - 1], list[i]);
        swapped = true;
      }
    }
  } while (swapped);
}

#endif