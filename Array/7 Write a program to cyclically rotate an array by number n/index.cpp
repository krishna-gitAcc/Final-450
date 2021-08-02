#include <bits/stdc++.h>
using namespace std;

void rotate(int *arr, int size, int n) {
  if (n > size) {
    n %= size;
  }
  vector<int> v;
  for (int i = 0; i < n; i++) {
    v.push_back(arr[i]);
  }
  for (int i = n; i < size; i++) {
    arr[i - n] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    arr[size - n + i] = v[i];
  }

  return;
}

int main() {
  int size, n;
  cin >> size >> n;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  rotate(arr, size, n);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  delete[] arr;
  return 0;
}