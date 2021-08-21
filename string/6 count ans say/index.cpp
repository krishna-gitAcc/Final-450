#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
  if (n == 1) {
    string ans = "1";
    return ans;
  }
  string subans = countAndSay(n - 1);
  string ans = "";
  int l = subans.length();
  for (int i = 0; i < l;) {
    char c = subans[i];
    int count = 1;
    i++;
    while (subans[i] == c && i < l) {
      count++;
      i++;
    }
    ans = ans + to_string(count) + c;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << countAndSay(n) << endl;
  return 0;
}