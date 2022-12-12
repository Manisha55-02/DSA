#include <bits/stdc++.h>
using namespace std;
int main(){
    string bin;
    cin>>bin;
    for(int i=0;i<=bin.length();i++){
      bin[i]=bin[i]*pow(2,i+1);
 
    }
    cout<<bin;
    

    }
