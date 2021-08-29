#include <bits/stdc++.h>
using namespace std;

////using unordered_map
// string smallestWindow(string s, string p) {
//   unordered_map<char, int> pm; // pattern map;
//   for (int i = 0; i < p.size(); i++) {
//     pm[p[i]]++;
//   }
//   int l = p.size();
//   int n = s.size();
//   for (int i = l; i <= n; i++) {
//     for (int j = 0; j <= n - l; j++) {
//       string temp = s.substr(j, i);
//       unordered_map<char, int> m;
//       for (int k = 0; k < temp.size(); k++) {
//         m[temp[k]]++;
//       }
//       unordered_map<char, int>::iterator it;
//       bool eq = true;
//       for (it = pm.begin(); it != pm.end(); it++) {
//         if (m[it->first] != it->second) {
//           eq = false;
//           break;
//         }
//       }
//       if (eq) {
//         return temp;
//       }
//     }
//   }
//   return "-1";
// }

// using sliding windows
string smallestWindow(string s, string p) {

}

int main() {
  string str, pat;
  cin >> str >> pat;
  cout << smallestWindow(str, pat);
  return 0;
}