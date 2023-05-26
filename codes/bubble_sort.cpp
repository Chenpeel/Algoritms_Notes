#include <iostream>
using std::cout;
using std::endl;
template <typename T>
void swap(T &a, T &b) {
  T c = a;
  a = b;
  b = c;
}
template <typename T>
void bubble_sort(T list[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (list[i] > list[j + 1]) {
        swap(list[i], list[j + 1]);
      }
    }
  }
}

//test
int main() {
  int arr[] = {4, 1, 6, 2, 8, 3};
  bubble_sort<int>(arr, 6);
  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}