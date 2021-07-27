#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> v1, vector<int> v2, int n1, int n2) {
  vector<int> ans;

  int i = 0, j = 0;

  while (i < n1 && j < n2) {
    if (v1[i] < v2[j]) {
      i++;
    } else {
      if (v1[i] > v2[j]) {
        j++;
      } else {
        ans.push_back(v1[i]);
        i++;
        j++;
      }
    }
  }

  return ans;
}

vector<int> unionset(vector<int> v1, vector<int> v2, int n1, int n2) {
  vector<int> ans;
  int i = 0;
  int j = 0;
  while (i < n1 && j < n2) {
    if (v1[i] < v2[j]) {
      ans.push_back(v1[i]);
      i++;
    } else {
      if (v1[i] > v2[j]) {
        ans.push_back(v2[j]);
        j++;
      } else {
        ans.push_back(v1[i]);
        i++;
        j++;
      }
    }
  }
  while (i < n1) {
    ans.push_back(v1[i]);
    i++;
  }
  while (j < n2) {
    ans.push_back(v2[j]);
    j++;
  }

  return ans;
}

int main() {
  int n1, n2;
  vector<int> arr1, arr2, ist, uni;
  cin >> n1 >> n2;
  for (int i = 0; i < n1; i++) {
    int data;
    cin >> data;
    arr1.push_back(data);
  }
  for (int i = 0; i < n2; i++) {
    int data;
    cin >> data;
    arr2.push_back(data);
  }

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  // for (int i = 0; i < arr1.size(); i++) {
  //   cout << arr1[i] << " ";
  // }
  cout << endl;

  ist = intersection(arr1, arr2, n1, n2);
  uni = unionset(arr1, arr2, n1, n2);

  for (int i = 0; i < ist.size(); i++) {
    cout << ist[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < uni.size(); i++) {
    cout << uni[i] << " ";
  }
  cout << endl;
  return 0;
}
// int main() {
//   int n;

//   vector<int> v;
//   cin >> n;
//   // v.push_back(100);
//   // v.push_back(2);
//   // v.push_back(12);
//   cout << v.size() << endl;
//   for (int i = 0; i < n; i++) {
//     // v.push_back(i);
//     int input;
//     cin >> input;
//     v.push_back(input);
//   }

//   for (int i = 0; i < v.size(); i++) {
//     cout << v[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }