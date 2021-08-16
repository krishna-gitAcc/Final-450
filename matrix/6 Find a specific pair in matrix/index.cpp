#include <bits/stdc++.h>
using namespace std;

int fns(int **mtx, int n) {
  int ans = INT_MIN;
  int **mxmtx = new int *[n];
  for (int i = 0; i < n; i++) {
    mxmtx[i] = new int[n];
  }
  mxmtx[n - 1][n - 1] = mtx[n - 1][n - 1];
  int maxv = mtx[n - 1][n - 1];
  for (int i = n - 2; i >= 0; i--) {
    if (mtx[n - 1][i] > maxv) {
      maxv = mtx[n - 1][i];
    }
    mxmtx[n - 1][i] = maxv;
  }
  maxv = mtx[n - 1][n - 1];
  for (int i = n - 2; i >= 0; i--) {
    if (mtx[i][n - 1] > maxv) {
      maxv = mtx[i][n - 1];
    }
    mxmtx[i][n - 1] = maxv;
  }
  for (int i = n - 2; i >= 0; i--) {
    for (int j = n - 2; j >= 0; j--) {
      if (mxmtx[i + 1][j + 1] - mtx[i][j] > ans) {
        ans = mxmtx[i + 1][j + 1] - mtx[i][j];
      }
      mxmtx[i][j] = max(mtx[i][j], max(mxmtx[i][j + 1], mxmtx[i + 1][j]));
    }
  }

  for (int i = 0; i < n; i++) {
    delete[] mxmtx[i];
  }
  delete[] mxmtx;

  return ans;
}

int main() {
  int n;
  cin >> n;
  int **mtx = new int *[n];
  for (int i = 0; i < n; i++) {
    mtx[i] = new int[n];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }

  cout<<fns(mtx, n)<<endl;
  for (int i = 0; i < n; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;

  return 0;
}