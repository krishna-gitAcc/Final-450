#include <bits/stdc++.h>
using namespace std;

void reversearr(int *arr, int n) {
  for (int i = 0; i < (n - 1) / 2; i++) {
    swap(arr[i], arr[n - 1 - i]);
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  reversearr(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  { /* code */ }

  return 0;
}