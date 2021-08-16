#include <iostream>
using namespace std;

// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
//   return;
// }

// void quicksort(int *arr, int si, int ei) {
//   if (si >= ei) {
//     return;
//   }
//   int pi = arr[si];
//   int count = 0;
//   for (int i = si; i <= ei; i++) {
//     if (arr[i] < pi) {
//       count++;
//     }
//   }
//   // cout << count << endl;
//   swap(arr[si], arr[si + count]);
//   int i = si, j = si + count + 1;
//   while (i < (si + count) && j <= ei) {
//     if (arr[i] < arr[si + count]) {
//       i++;
//     } else if (arr[j] >= arr[si + count]) {
//       j++;
//     } else {
//       swap(arr[i], arr[j]);
//       i++;
//       j++;
//     }
//   }
//   // for (int i = si; i <= ei; i++) {
//   //   cout << arr[i] << " ";
//   // }
//   // cout << endl;
//   quicksort(arr, si, si + count - 1);
//   quicksort(arr, si + count + 1, ei);
//   return;
// }

void merge(int *arr, int si, int ei) {
  int mid = (si + ei) / 2;
  int i = si;
  int j = mid + 1;
  int *newarr = new int[ei - si + 1];
  int k = 0;
  while (i <= mid && j <= ei) {
    if (arr[i] < arr[j]) {
      newarr[k] = arr[i];
      k++;
      i++;
    } else {
      newarr[k] = arr[j];
      k++;
      j++;
    }
  }
  while (i <= mid) {
    newarr[k] = arr[i];
    k++;
    i++;
  }
  while (j <= ei) {
    newarr[k] = arr[j];
    k++;
    j++;
  }
  for (int l = 0; l < k; l++) {
    arr[si + l] = newarr[l];
  }
  delete[] newarr;
}

void mergesort(int *arr, int si, int ei) {
  if (si >= ei) {
    return;
  }
  int mid = (si + ei) / 2;
  mergesort(arr, si, mid);
  mergesort(arr, mid + 1, ei);
  merge(arr, si, ei);
  return;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  mergesort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}