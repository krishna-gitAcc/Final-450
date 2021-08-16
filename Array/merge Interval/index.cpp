#include <bits/stdc++.h>
using namespace std;

void(vector<pair<int, int>> &arr){
    int n =arr.size();
    
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> arr;
  for (int i = 0; i < n; i++) {
    pair<int, int> temp;
    cin >> temp.first;
    cin >> temp.second;
    arr.push_back(temp);
  }
  merginterval(arr);
//   for (int i = 0; i < n; i++) {
//     cout << arr[i].first << " " << arr[i].second << endl;
//   }

  return 0;
}