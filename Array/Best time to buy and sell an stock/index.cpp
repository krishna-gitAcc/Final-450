#include <bits/stdc++.h>
using namespace std;

// brotforce method
int maxprofit(int *arr, int &n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int max = INT_MIN;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > max) {
        max = arr[j];
      }
    }
    if (max > arr[i] && ans < max - arr[i]) {
      ans = max - arr[i];
    }
  }

  return ans;
}

// efficient way
int maxprofit1(int *arr, int &n) {
  int maxpro = 0;
  int minprice = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (minprice > arr[i]) {
      minprice = arr[i];
    }
    if (maxpro < arr[i] - minprice) {
      maxpro = arr[i] - minprice;
    }
  }
  return maxpro;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << maxprofit(arr, n) << endl;
  cout << maxprofit1(arr, n) << endl;

  return 0;
}