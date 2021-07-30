#include <bits/stdc++.h>
using namespace std;

string roman(int &num) {
  string ans = "";
  vector<string> r = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                      "XL", "X",  "IX", "V",  "IV", "I"};
  vector<int> n = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  for (int i = 0; i < n.size(); i++) {
    while (num >= n[i]) {
      ans += r[i];
      num -= n[i];
    }
  }

  return ans;
}

int main() {
  int num;
  cin >> num;
  cout << roman(num) << endl;
  // string a = "krishna";
  // string b = "krishna";
  // string c = a+b;
  // cout<<c<<endl;
  return 0;
}