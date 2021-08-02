#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> count;
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    count[str[i]]++;
  }
  map<char, int>::iterator it = count.begin();
  for (; it != count.end(); it++) {
    if (it->second > 1) {
      cout << it->first << " " << it->second << endl;
    }
  }

  return 0;
}