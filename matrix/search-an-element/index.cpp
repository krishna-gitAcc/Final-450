#include <bits/stdc++.h>
using namespace std;

bool searchinmtx(int **mtx, int &m, int &n, int &key) {
  int row = m - 1;
  bool ans = false;
  for (int i = 1; i < m; i++) {
    if (key < *mtx[i]) {
      row = i - 1;
    }
  }
  for (int i = 0; i < n; i++) {
    if (mtx[row][i] == key) {
      ans = true;
      return ans;
    }
  }
  return ans;
}

int main() {
  int m, n, key;
  cin >> m >> n >> key;
  int **mtx = new int *[m];
  for (int i = 0; i < m; i++) {
    mtx[i] = new int[n];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }
  cout << searchinmtx(mtx, m, n, key);
}