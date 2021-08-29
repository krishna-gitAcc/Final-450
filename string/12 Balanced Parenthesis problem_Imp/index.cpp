#include <bits/stdc++.h>
using namespace std;

bool parenthesischeck(string str) {
  stack<char> par;
  int l = str.length();
  int i = 0;
  while (i < l) {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
      par.push(str[i]);
    } else {
      char t = str[i];
      if (par.size() == 0) {
        return 0;
      } else {
        switch (t) {
        case '}':
          if (par.top() != '{') {
            return false;
          } else {
            // cout<<par.top()<<endl;
            par.pop();
          }
          break;
        case ')':
          if (par.top() != '(') {
            return false;
          } else {
            // cout<<par.top();
            par.pop();
          }
          break;
        default:
          if (par.top() != '[') {
            return false;
          } else {
            // cout<<par.top();
            par.pop();
          }
        }
      }
    }
    i++;
  }
  if (par.size() == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string str;
  cin >> str;
  cout << parenthesischeck(str) << endl;
  return 0;
}