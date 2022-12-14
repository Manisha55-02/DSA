#include <bits/stdc++.h>
using namespace std;
int main(){
    string msg, res ="";
    int shft, pos;
    char ch, tmp;
    cin>>msg>>shft;
    for(int i=0;i<msg.length();i++){
        ch= msg[i];
        if(ch>='a' && ch<='z'){
            pos = ch - 'a';
           pos = (pos + shft )%26;
           res = 'a'+pos;
           cout<<res;
        
        }
        else if(ch>='A' && ch<='Z'){
            pos = ch - 'A';
           pos = (pos + shft )%26;
           res = 'A'+pos;
           cout<<res;
           
        } 
         
        else {
            cout<<ch;
        }
        }
        
        
        
        
     
    }
     
    


