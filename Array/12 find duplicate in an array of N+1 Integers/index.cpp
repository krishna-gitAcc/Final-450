#include <bits/stdc++.h>
using namespace std;

// using make negative the number ;
int findduplicate(int *arr, int &n) {
  int ans;
  for (int i = 0; i < n; i++) {
    int cur = abs(arr[i]);
    if (arr[cur] < 0) {
      ans = cur;
      break;
    } else {
      arr[cur] *= -1;
    }
  }
  for (int i = 0; i < n; i++) {
    arr[i] = abs(arr[i]);
  }

  return ans;
}

int findduplicate1(int *arr, int &n) {
  int ans;
  for (int i = 0; i < n; i++) {
    if (i == arr[i] - 1)
      continue;
    else {
      if (arr[i] == arr[arr[i] - 1]) {
        ans = arr[i];
        break;
      } else {
                swap(arr[i], arr[arr[i]-1]);
                i--;
      }
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << findduplicate(arr, n) << endl;
  cout << findduplicate1(arr, n) << endl;

  delete[] arr;
  return 0;
}