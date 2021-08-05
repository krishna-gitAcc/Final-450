#include <bits/stdc++.h>
using namespace std;

int indexwithmax1(int **arr, int &m, int &n) {
  int max = 0;
  int index = -1;
  for (int i = 0; i < m; i++) {
    int no1 = n - (upper_bound(arr[i], arr[i] + n, 0) - arr[i]);
    if (no1 > max) {
      index = i;
      max = no1;
    }
  }
  return index;
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
  cout << indexwithmax1(mtx, m, n) << endl;

  for (int i = 0; i < m; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;

  return 0;
}