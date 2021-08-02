#include <bits/stdc++.h>
using namespace std;

void median(int ** mtx, int&m, int&n){
    
}

int main() {
  int m, n;
  cin >> m >> n;
  int **mtx = new int *[m];
  for (int i = 0; i < m; i++) {
    mtx[i] = new int *[n];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }

  median(arr, m, n);

  for (int i = 0; i < m; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;

  return 0;
}