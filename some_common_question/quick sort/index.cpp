
#include
using namespace std;

// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
//   return;
// }

void quicksort(int *arr, int si, int ei) {
  if (si >= ei) {
    return;
  }
  int pi = arr[si];
  int count = 0;
  for (int i = si; i <= ei; i++) {
    if (arr[i] < pi) {
      count++;
    }
  }
  // cout << count << endl;
  swap(arr[si], arr[si + count]);
  int i = si, j = si + count + 1;
  while (i < (si + count) && j <= ei) {
    if (arr[i] < arr[si + count]) {
      i++;
    } else if (arr[j] >= arr[si + count]) {
      j++;
    } else {
      swap(arr[i], arr[j]);
      i++;
      j++;
    }
  }
  // for (int i = si; i <= ei; i++) {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;
  quicksort(arr, si, si + count - 1);
  quicksort(arr, si + count + 1, ei);
  return;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  quicksort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}