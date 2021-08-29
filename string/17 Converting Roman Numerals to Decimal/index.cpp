#include<bits/stdc++.h>
using namespace std;

int converttodeciaml(string str){
  int ans = 0;
  int l = str.length();
  for (int i = 0; i < l; i++) {
    if (str[i] == 'I') {
      if (i != l - 1 && str[i + 1] != 'I') {
        ans--;
      } else
        ans++;
    } else if (str[i] == 'V') {
      ans += 5;
    } else if (str[i] == 'X') {
      if (i != l - 1 && str[i + 1] == 'L' || str[i + 1] == 'C') {
        ans -= 10;
      } else
        ans += 10;
    } else if (str[i] == 'L') {
      ans += 50;
    } else if (str[i] == 'C') {
      if (i != l - 1 && str[i + 1] == 'D' || str[i + 1] == 'M') {
        ans -= 100;
      } else
        ans += 100;
    } else if (str[i] == 'D') {
      ans += 500;
    } else if (str[i] == 'M') {
      ans += 1000;
    }
  }
  return ans;
}

int main(){
    string roman;
    cin>>roman;
    cout << converttodeciaml(roman) << endl;
    return 0;
}


