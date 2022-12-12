#include <bits/stdc++.h>
using namespace std;
int main(){
    string msg;
    int shft;
    cin>>msg>>shft;
    for(int i=0;i<=msg.length();i++){
        int msg[i];
        if(msg[i]>=65 && msg[i]<=90){
            msg[i]=msg[i]+shft;
        }

     cout<<char(msg);
    }
     
    

}
