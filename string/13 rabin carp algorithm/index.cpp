#include <bits/stdc++.h>
using namespace std;
// using naive method
// void patternsearch(string str, string p) {
//   int l = p.length();
//   for (int i = 0; i < str.length(); i++) {
//     string temp = str.substr(i, l);
//     if (temp == p) {
//       cout << i << " ";
//     }
//   }
//   return;
// }

// rabin carp algorithm
void patternsearch(string str, string pat) {
  // it uses hasp value, like we gonna define a hash function, it is given by
  // robin carp
  int d = 256;
  int p = 0; // hash value of pattern
  int t = 0; // hash value of text to to be compare
  int m = pat.length();
  int l = str.length();
  int h = 1;
  int q = 101;
  for (int i = 0; i < m-1; i++) {
    h = (h * d) % q;
  }
  for (int i = 0; i < m; i++) {
    p = (d * p + pat[i]) % q;
    t = (d * t + str[i]) % q;
  }
  for (int i = 0; i <= l - m; i++) {
    if (p == t) {
      int j;
      for (j = 0; j < m; j++) {
        if (pat[j] != str[i + j]) {
          break;
        }
      }
      if (j == m) {
        cout << "Patter found at index: " << i << endl;
      }
    }
    if(i<l-m){
      t = (d*(t-str[i]*h)+str[m+i])%q;
      if(t<0){
        t=t+q;
      }
    }
  }
}

int main() {
  string str = "GEEKS FOR GEEKS", p = "GEEK";
  //   cin >> str >> p;
  patternsearch(str, p);
  cout << endl;
  return 0;
}