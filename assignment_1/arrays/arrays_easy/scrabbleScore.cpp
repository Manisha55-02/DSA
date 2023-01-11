#include <bits/stdc++.h>
using namespace std;

int wordScore(string s){
    char letter[] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int Letterpoints[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int points=0;
    for(int i=0;i<s.length();i++){
   
        for(int j=0;j<26;j++){
            if(s[i]==letter[j])
                points+=Letterpoints[j];
                
        }
    }
   return points;

}
int main(){
    string s;
    cin>>s;
    cout<<wordScore(s);
}