#include<bits/stdc++.h>
using namespace std;

// //nave method
// bool checkpalindrom(string str){
//     if(str.length()<2){
//         return true;
//     }
//     int l = str.length();
//     if(str[0]!=str[l-1]){
//         return false;
//     }
//     return checkpalindrom(str.substr(1,l-2));
// }

// int mkspalindrom(string str){
//     int l = str.length();
//     int mxp = 0;
//     for (int i = 1; i <= l; i++)
//     {
//         if(checkpalindrom(str.substr(0,i))){
//             mxp = i;
//         }
//     }
//     return l-mxp;

// }



//using kmp algorithm i.e lps array

int mkspalindrom(string str){
    int l = str.length();
    string rstr = str;
    reverse(rstr.begin(), rstr.end());
    string temp = str+"$"+rstr;
    int len = 0;
    int i = 1;
    int lps[2*l+1];
    lps[0]=0;
    while(i<2*l+1){
        if(temp[i]==temp[len]){
            len++;
            lps[i]=len;
            i++;
        }else if(len>0){
            len= lps[len-1];
        }else{
            lps[i]=len;
            i++;
        }
    }
    return l - lps[2*l];
}

int main(){
    string str;
    cin>>str;
    cout<<mkspalindrom(str);
    return 0;
}