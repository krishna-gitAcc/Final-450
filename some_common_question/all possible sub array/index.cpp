#include <bits/stdc++.h>
using namespace std;

void subarr(int *arr, vector<vector<int>> &v, int n) {
  if (n == 0) {
    vector<int> sv;
    for (int i = 0; i < sv.size(); i++) {
      cout << sv[i] << " ";
    }
    cout << endl;

    v.push_back(sv);
    return;
  }
  subarr(arr, v, n - 1);
  int size = v.size();
  for (int i = 0; i < size; i++) {
    vector<int> sv(v[i]);
    sv.push_back(arr[n - 1]);
    for (int i = 0; i < sv.size(); i++) {
      cout << sv[i] << " ";
    }
    cout << endl;
    v.push_back(sv);
  }
  return;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vector<vector<int>> v; // all subarray containing arr
  subarr(arr, v, n);
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  delete[] arr;
  return 0;
}