#include <bits/stdc++.h>
using namespace std;

bool checkpalindrom(string &str) {
  int n = str.length();
  for (int i = 0; i < n / 2; i++) {
    if (str[i] != str[n - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string str;
  cin >> str;
  cout << checkpalindrom(str) << endl;
  return 0;
}