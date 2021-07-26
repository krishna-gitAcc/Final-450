#include <bits/stdc++.h>
using namespace std;

pair<int, int> max_min(int *arr, int size) {
  pair<int, int> p;
  p.first = INT_MIN;
  p.second = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (p.first < arr[i]) {
      p.first = arr[i];
    }
    if (p.second > arr[i]) {
      /* code */
      p.second = arr[i];
    }
  }
  return p;
}

int main() {
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    /* code */
    cin >> arr[i];
  }
  pair<int, int> p = max_min(arr, size);
  cout << p.first << " " << p.second << endl;
  return 0;
}