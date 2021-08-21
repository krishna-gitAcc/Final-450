#include <bits/stdc++.h>
using namespace std;

// // using extra space
// void subsequence(string str, vector<string> &output) {
//   if (str.length() == 0) {
//     string ans = "";
//     output.push_back(ans);
//     return;
//   }
//   subsequence(str.substr(1), output);
//   int l = output.size();
//   for (int i = 0; i < l; i++) {
//     string temp = str[0] + output[i];
//     output.push_back(temp);
//   }
// }

// without using extra space
void subsequence(string str, string output) {
  int l = str.length();
  if (l == 0) {
    cout << output << endl;
    return;
  }
  subsequence(str.substr(1), output);
  subsequence(str.substr(1), output + str[0]);
  return;
}

int main() {
  string str;
  cin >> str;
  string output = "";
  subsequence(str, output);
  cout << endl;
  return 0;
}