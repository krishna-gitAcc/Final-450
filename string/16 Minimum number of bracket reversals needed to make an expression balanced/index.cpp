#include <bits/stdc++.h>
using namespace std;

int minreverse(string str) {
  if (str.length() % 2 != 0) {
    return -1;
  }
  int l = str.length();
  stack<char> st;
  for (int i = 0; i < l; i++) {
    if (str[i] == '{') {
      st.push(str[i]);
    } else {
      if (st.size() > 0) {
        if (st.top() == '{') {
          st.pop();
        } else {
          st.push(str[i]);
        }
      } else {
        st.push(str[i]);
      }
    }
  }

  if (st.size() == 0) {
    return 0;
  }
  if (st.size() % 2 != 0) {
    return -1;
  }
  int ssize = st.size();

  int count = 0;
  for (int i = 0; i < ssize; i++) {
    if (st.top() == '{') {
      count++;
      st.pop();
    }
  }
  return ssize / 2 + count % 2;
  //   return 10;
}

int main() {
  string str;
  cin >> str;
  cout << minreverse(str) << endl;
  return 0;
}