#include <bits/stdc++.h>
using namespace std;

// //naive method
// int kmp(string str) {
//   int ans = 0;
//   int l = str.length();
//   for(int i=1; i<l;i++){
//     if(str.substr(0,i) == str.substr(l-i, i)){
//       ans = i;
//     }
//   }

//   return ans;
// }

// using kmp algo
int kmp(string str) {
  int l = str.length();
  int n = 0;
  int i = 0;
  int lps[l];
  lps[0] = 0;
  i++;
  while (i < l) {
    if (str[i] == str[n]) {
      n++;
      lps[i] = n;
      i++;
    } else if (n > 0) {
      n = lps[n - 1];
    } else {
      lps[i] = n;
      i++;
    }
  }
  return lps[l - 1];
}

int main() {
  string str;
  cin >> str;
  cout << kmp(str) << endl;
  return 0;
}
