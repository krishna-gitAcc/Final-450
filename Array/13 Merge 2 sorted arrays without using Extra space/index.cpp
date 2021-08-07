#include <bits/stdc++.h>
using namespace std;

void sortarr(vector<int> &v1, vector<int> &v2) {
  // first use insertion sort
  int m = v1.size();
  int n = v2.size();
  for (int i = n - 1; i >= 0; i--) {
    int last = v1[m - 1];
    int j = m - 2;
    while (v1[j] > v2[i] && j >= 0) {
      v1[j + 1] = v1[j];
      j--;
    }
    if (j != m - 2 || last > v2[i]) {
      v1[j + 1] = v2[i];
      v2[i] = last;
    }
  }

  return;
}

void sortarr1(vector<int> &v1, vector<int> &v2) {
  int m = v1.size();
  int n = v2.size();
  int i = 0, j = 0, k = m - 1;
  while (i < m && j < n && k >= 0) {
    if (v1[i] < v2[j]) {
      i++;
    } else {
      swap(v2[i], v1[k]);
      j++;
      k--;
    }
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  return;
}

void sortarr2(vector<int> &v1, vector<int>&v2){
  int m = v1.size();
  int n = v2.size();
  int i = 0;
  while(i<m){
    if(v1[i]>v2[0]){
      swap(v1[i], v2[0]);
      sort(v2.begin(), v2.end());
    }
    i++;
  }
  return;
}

int main() {
  int m, n;
  cin >> m >> n;
  vector<int> v1(m);
  for (int i = 0; i < m; i++) {
    cin >> v1[i];
  }
  vector<int> v2(n);
  for (int i = 0; i < n; i++) {
    cin >> v2[i];
  }
  sortarr2(v1, v2);

  for (int i = 0; i < m; i++) {
    cout << v1[i] << " ";
  }
  for (int i = 0; i < n; i++) {
    cout << v2[i] << " ";
  }
  cout << endl;

  return 0;
}