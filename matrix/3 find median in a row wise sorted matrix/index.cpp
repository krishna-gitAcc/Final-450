#include <bits/stdc++.h>
using namespace std;

// using naive method
void median1(int **mtx, int &m, int &n) {
  vector<int> v;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      v.push_back(mtx[i][j]);
    }
  }
  sort(v.begin(), v.end());
  cout << v[(m * n) / 2] << endl;
  return;
}

// better method using binary search as all the row is sorted
void median2(int **mtx, int &m, int &n) {
  // range of median
  int min = INT_MAX, max = INT_MIN;
  for (int i = 0; i < m; i++) {
    if (min > mtx[i][0]) {
      min = mtx[i][0];
    }
    if (max < mtx[i][n - 1]) {
      max = mtx[i][n - 1];
    }
  }
  int d = (m * n + 1) / 2;
  while (min < max) {
    int mid = min + (max - min) / 2;
    int place = 0;
    for (int i = 0; i < m; i++) {
      place += upper_bound(mtx[i], mtx[i]+n, mid) - mtx[i];
    }
    if (place < d) {
      min = mid + 1;
    } else
      max = mid;
  }
  cout<<min<<endl;
}

int main() {
  int m, n;
  cin >> m >> n;
  int **mtx = new int *[m];
  for (int i = 0; i < m; i++) {
    mtx[i] = new int[n];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }

  median1(mtx, m, n);
  median2(mtx, m, n);

  for (int i = 0; i < m; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;

  return 0;
}