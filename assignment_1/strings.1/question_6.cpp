#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s){
    int count=0;
    for(int i=0;i<=s.length();i++){
        if(s[i]>=0||s[i]<=9) count++;
    }
    for(int i=0;i<=s.length();i++){
        if(s[i]=='+'||s[i]=='-' && count>=1) return "valid";
        else return "Invalid";
    }
}
int main(){
    string s;
    cin>>s;
    cout<<isInteger(s);
  return 0;

}