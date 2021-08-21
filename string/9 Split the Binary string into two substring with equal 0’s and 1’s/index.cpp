#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int l = str.length();
  int count = 0;
  int count0 = 0;
  int count1 = 0;
  for (int i = 0; i < l; i++) {
    if (str[i] == '0') {
      count0++;
    } else {
      count1++;
    }
    if (count0 == count1) {
      count++;
    }
  }
  if (count > 0) {
    cout << count << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}