#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string str) {
  int l = str.length();
  if (l <= 1) {
    return true;
  }
  if (str[0] != str[l - 1]) {
    return false;
  }
  return checkpalindrome(str.substr(1, l - 2));
}

string longestsubstr(string str) {
  string ans;
  int mxsize = INT_MIN;
  int l = str.length();
  for (int i = 0; i < l; i++) {
    for (int j = 1; j <= l - i; j++) {
      string temp = str.substr(
          i, j); // using the substr function from string class of stl
      //   for (int k = 0; k < j; k++) {
      //     temp += str[i + k];
      //   } // generating the substr manually
      //   cout << temp << endl;
      if (checkpalindrome(temp)) {
        if (j > mxsize) {
          mxsize = j;
          ans = temp;
        }
      }
    }
  }

  return ans;
}

int main() {
  string str;
  cin >> str;
  //   int l = str.length();
  //   cout << checkpalindrome(str) << endl;
  cout << longestsubstr(str) << endl;
  return 0;
}