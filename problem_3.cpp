#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s ,int i , int j){
    if(i >= j)return true;
    if(s[i] != s[j])return false;
    return isPalindrome(s , i + 1 , j - 1);
}
bool isRotatedPalindrome(string s){
  
    for(int i=0;i<s.size();i++){
        if(isPalindrome(s , 0 , s.size() - 1))return true;
        s = s.back() + s; //this adds the last character of string to the front
        s.pop_back(); //removes the last character of the string
    }
    return false;
}
int main() {
    string s;
    cin>>s;
    string ans = "";
    if(isRotatedPalindrome(s))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}