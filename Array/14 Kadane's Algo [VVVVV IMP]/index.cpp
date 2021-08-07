#include <bits/stdc++.h>
using namespace std;

int kadensalgo(int *arr, int n) {
  int glmax = INT_MIN;
  int currmax = 0;
  for (int i = 0; i < n; i++) {
    currmax += arr[i];
    if (currmax > glmax) {
      glmax = currmax;
    }
    if (currmax < 0) {
      currmax = 0;
    }
  }
  return glmax;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << kadensalgo(arr, n) << endl;

  delete[] arr;
  return 0;
}