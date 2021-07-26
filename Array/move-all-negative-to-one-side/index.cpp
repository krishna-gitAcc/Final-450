#include <bits/stdc++.h>
using namespace std;

void movenegativeaside(int *arr, int size) {
  int lo = 0, hi = size - 1;
  for (int i = 0; i <= hi; i++) {
    if (arr[i] < 0) {
      swap(arr[i], arr[lo]);
      lo++;
    } else {
      swap(arr[i], arr[hi]);
      hi--;
      i--;
    }
  }
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  movenegativeaside(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}