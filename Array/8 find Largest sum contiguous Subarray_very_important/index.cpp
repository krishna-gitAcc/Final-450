#include <bits/stdc++.h>
using namespace std;

int maxcontiguoussum(int *arr, int size) {
  int global_max = INT_MIN;
  int current_max = 0;
  for (int i = 0; i < size; i++) {
    current_max += arr[i];
    if (current_max > global_max) {
      global_max = current_max;
    }
    if (current_max < 0) {
      current_max = 0;
    }
  }
  return global_max;
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << maxcontiguoussum(arr, size) << endl;
  delete[] arr;
  return 0;
}