#include <bits/stdc++.h>
using namespace std;

// using stl set
int kthsmallestusingset(int *arr, int n, int k) {
  // use only when all the element of arr in unique
  set<int> s(arr, arr + n);
  set<int>::iterator it = s.begin();
  advance(it, k - 1);
  return *it;
}

// using stl priority_queue/heap
int kthsmallestheap(int *arr, int n, int k) {
  priority_queue<int> pq;

  for (int i = 0; i < k; i++) {
    /* code */
    pq.push(arr[i]);
  }
  for (int i = k; i < n; i++) {
    /* code */
    if (pq.top() > arr[i]) {
      pq.pop();
      pq.push(arr[i]);
    }
  }
  return pq.top();
}

// using sorting method
int kthsmallestsort(int *arr, int n, int k) {
  sort(arr, arr + n);
  return arr[k - 1];
}

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << kthsmallestheap(arr, n, k) << endl;
  cout << kthsmallestsort(arr, n, k) << endl;
  cout << kthsmallestusingset(arr, n, k) << endl;
  return 0;
}