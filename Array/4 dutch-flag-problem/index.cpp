#include <bits/stdc++.h>
using namespace std;

void cntmethod(int *arr, int size) {
  int cnt0 = 0, cnt1 = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      cnt0++;
    }
    if (arr[i] == 1) {
      cnt1++;
    }
  }
  for (int i = 0; i < size; i++) {
    arr[i] = 2;
  }
  for (int i = 0; i < cnt0; i++) {
    arr[i] = 0;
  }
  for (int i = 0; i < cnt1; i++) {
    arr[cnt0 + i] = 1;
  }
  return;
}

void pivotmethod(int *arr, int size) {
  int l = 0, u = size - 1;
  // int i;
  for (int i = 0; i <= u; i++) {
    if (arr[i] == 0) {
      swap(arr[l], arr[i]);
      l++;
    }
    if (arr[i] == 2) {
      swap(arr[i], arr[u]);
      u--;
      i--;
    }
  }
  return;
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  pivotmethod(arr, size);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  delete []arr;
  return 0;
}