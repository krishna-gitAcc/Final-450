#include <bits/stdc++.h>
using namespace std;

void minstep(vector<int> v, int n) {
  int count = 0;
  int i = 0;
  while (i < n - 1) {
    if (v[i]) {
      int max = 0;
      int index = 0;
      for (int j = 1; j <= v[i] && j + i < n; j++) {
        if (v[i + j] + i + j > max) {
          max = v[i + j] + i + j;
          index = j;
        }
      }
      cout << i + index << endl;
      i += index;
      count++;

    } else {
      cout << -1 << endl;
      return;
    }
  }

  cout << count << endl;
  return;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  minstep(v, n);
  return 0;
}