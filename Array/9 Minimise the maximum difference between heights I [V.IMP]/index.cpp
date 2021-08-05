#include <iostream>
#include <algorithm>
using namespace std;

int minthemaxheightdiff(int * arr, int &n, int&k){
    sort(arr, arr+n);
    int result = arr[n-1] - arr[0];
    int minele;
    int maxele;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=k && arr[n-1]>=k)
        {
            /* code */
        }

    }

}

int main() {
  int n, k;
  cin >> n >> k;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << minthemaxheightdiff(arr, n, k) << endl;
  delete[] arr;
  return 0;
}