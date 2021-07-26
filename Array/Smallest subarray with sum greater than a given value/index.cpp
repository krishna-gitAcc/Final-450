#include <bits/stdc++.h>
using namespace std;

int smallestsubarray(int *arr, int size, int key) {
  int sm = size + 1;
  int l = 0;
  int sum = 0;
  int end = 0;
  while (end < size) {
    while (sum <= key && end < size) {
      sum += arr[end++];
    }
    while (sum > key && l < size) {
      if ((end - l) < sm) {
        sm = (end - l);
      }
      sum -= arr[l++];
    }
  }
  if (sm == size + 1) {
    sm = 0;
  }
  return sm;
}

int main() {
  int size, key;
  cin >> size >> key;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << smallestsubarray(arr, size, key) << endl;

  return 0;
}