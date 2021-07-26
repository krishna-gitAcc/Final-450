#include <bits/stdc++.h>
using namespace std;

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
  return 0;
}