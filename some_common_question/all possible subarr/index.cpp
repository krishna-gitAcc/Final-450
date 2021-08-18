#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  vector<string> v;
  for (int i = 0; i < str.length(); i++) {
    for (int j = 1; j <= str.length() - i; j++) {
      string substring = "";
      for (int k = 0; k < j; k++) {
        cout << str[k + i];
        substring += str[k];
      }
      cout << endl;
      v.push_back(substring);
    }
  }
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}