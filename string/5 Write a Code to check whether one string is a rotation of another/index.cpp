#include <bits/stdc++.h>
using namespace std;

// using stl
bool checkrotationstr(string &str1, string &str2) {
  bool ans = false;
  queue<char> q1;
  queue<char> q2;
  int l1 = str1.length();
  int l2 = str2.length();
  if (l1 != l2) {
    return false;
  }
  for (int i = 0; i < l1; i++) {
    q1.push(str1[i]);
  }
  for (int i = 0; i < l2; i++) {
    q2.push(str2[i]);
  }
  for (int i = 0; i < l1; i++) {
    char temp = q1.front();
    q1.pop();
    q1.push(temp);
    if (q1 == q2) {
      ans = true;
      break;
    }
  }
  return ans;
}

bool checkrotation(string &str1, string &str2) {
  bool ans = false;
  int l = str1.length();
  int i = 0;
  while (i < l) {
    string temp = "";
    for (int j = 0, k = i; j < l; j++, k++) {
      k = k % l;
      temp += str1[k];
    }
    if (temp == str2) {
      ans = true;
      break;
    }

    i++;
  }

  return ans;
}

int main() {
  string str1, str2;
  cin >> str1 >> str2;
  cout << checkrotationstr(str1, str2) << endl;
  return 0;
}