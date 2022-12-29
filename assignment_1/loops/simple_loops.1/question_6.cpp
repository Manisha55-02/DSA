#include <bits/stdc++.h>
using namespace std;
int main(){
    string msg, res ="",tmp="";
    int shft, pos;
    char ch;
    cin>>msg>>shft;
    for(int i=0;i<msg.length();i++){
        ch= msg[i];
        if(ch>='a' && ch<='z'){
           pos = ch - 'a';
           pos = (pos + shft )%26;
           tmp = ('a'+pos);
           res += tmp;
           cout<<tmp;
        
        }
        else if(ch>='A' && ch<='Z'){
            pos = ch - 'A';
           pos = (pos + shft )%26;
           tmp= ('A'+pos);
           res+=tmp;
           cout<<tmp;
           
        } 
         
        else {
            tmp=ch;
            res+=tmp;
            cout<<tmp;
            
        }
        }
        
        
        
        
     
    }
     
    


