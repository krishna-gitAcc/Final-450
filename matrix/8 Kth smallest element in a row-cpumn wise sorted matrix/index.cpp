#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int **mtx, int n, int k) {
  int ans;
    


  return ans;
}

int main() {
  int n, k;
  cin >> n >> k;
  int **mtx = new int *[n];
  for (int i = 0; i < n; i++) {
    mtx[i] = new int[n];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }

  cout << kthsmallest(mtx, n, k) << endl;

  for (int i = 0; i < n; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;

  return 0;
}