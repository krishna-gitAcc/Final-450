#include <bits/stdc++.h>
using namespace std;

class headNode {
public:
  int val;
  int r;
  int c;
};

class minhead {
private:
  vector<headNode> v;

public:
  void push(headNode data) {
    v.push_back(data);
    int n = v.size();
    int ci = n - 1;
    int pi = (ci - 1) / 2;
    while (ci > 0 && v[pi].val > v[ci].val) {
      headNode temp = v[pi];
      v[pi] = v[ci];
      v[ci] = temp;
      ci = pi;
      pi = (ci - 1) / 2;
    }
  }
  void pop() {
    int n = v.size();
    v[0] = v[n - 1];
    v.pop_back();
    int pi = 0;
    int lci = 2 * pi + 1;
    int rci = 2 * pi + 2;
    while (lci < n - 1) {
      int mi = pi;
      if (v[lci].val < v[mi].val) {
        mi = lci;
      }
      if (rci < n - 1) {
        if (v[rci].val < v[mi].val) {
          mi = rci;
        }
      }
      if (pi == mi) {
        break;
      }
      headNode temp = v[pi];
      v[pi] = v[mi];
      v[mi] = temp;
      pi = mi;
      lci = 2 * pi + 1;
      rci = 2 * pi + 2;
    }
  }
  headNode getmin() {
    if (!v.empty()) {
      return v[0];
    } else {
      headNode data;
      data.val = INT_MAX;
      data.c = INT_MAX;
      data.r = INT_MAX;
      return data;
    }
  }
};

int findkthsmallest(int **mtx, int n, int k) {
  int ans;
  minhead h;
  for (int i = 0; i < n; i++) {
    headNode data;
    data.val = mtx[0][i];
    data.r = 0;
    data.c = i;
    h.push(data);
  }
  headNode hr; // get the min from a min heap
  for (int i = 0; i < k; i++) {
    headNode hr = h.getmin();
    h.pop();
    headNode data;
    data.val = (hr.r < (n - 1)) ? mtx[hr.r + 1][hr.c] : INT_MAX;
    data.c = hr.c;
    data.r = hr.r + 1;
    h.push(data);
    ans = hr.val;
  }

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

  cout << findkthsmallest(mtx, n, k) << endl;

  for (int i = 0; i < n; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;
  return 0;
}