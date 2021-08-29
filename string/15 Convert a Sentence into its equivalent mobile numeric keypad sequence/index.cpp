#include <bits/stdc++.h>
using namespace std;

string tokeypad(string str) {
  string ans = "";
  int l = str.length();
  int i = 0;
  while (i < l) {
    if (str[i] == ' ') {
      ans += to_string(0);
    } else if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') {
      switch (str[i]) {
      case 'A':
        ans += to_string(2);
        break;
      case 'B':
        ans += to_string(22);
        break;
      case 'C':
        ans += to_string(222);
      }

    } else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') {
      switch (str[i]) {
      case 'D':
        ans += to_string(3);
        break;
      case 'E':
        ans += to_string(33);
        break;
      case 'F':
        ans += to_string(333);
      }

    } else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') {
      switch (str[i]) {
      case 'G':
        ans += to_string(4);
        break;
      case 'H':
        ans += to_string(44);
        break;
      case 'I':
        ans += to_string(444);
      }

    } else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') {
      switch (str[i]) {
      case 'J':
        ans += to_string(5);
        break;
      case 'K':
        ans += to_string(55);
        break;
      case 'L':
        ans += to_string(555);
      }

    } else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') {
      switch (str[i]) {
      case 'M':
        ans += to_string(6);
        break;
      case 'N':
        ans += to_string(66);
        break;
      case 'O':
        ans += to_string(666);
      }

    } else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' ||
               str[i] == 'S') {
      switch (str[i]) {
      case 'P':
        ans += to_string(7);
        break;
      case 'Q':
        ans += to_string(77);
        break;
      case 'R':
        ans += to_string(777);
      case 'S':
        ans += to_string(7777);
      }

    } else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') {
      switch (str[i]) {
      case 'T':
        ans += to_string(8);
        break;
      case 'U':
        ans += to_string(88);
        break;
      case 'W':
        ans += to_string(888);
      }

    } else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' ||
               str[i] == 'Z') {
      switch (str[i]) {
      case 'W':
        ans += to_string(9);
        break;
      case 'X':
        ans += to_string(99);
        break;
      case 'Y':
        ans += to_string(999);
      case 'Z':
        ans += to_string(9999);
      }
    }
    i++;
  }
  return ans;
}

int main() {
  string str;
  getline(cin, str);
  cout << tokeypad(str) << endl;
  return 0;
}