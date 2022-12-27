#include <bits/stdc++.h>
using namespace std;
string  encrpytWithCaesar(string msg,int shft){
    string res ="";
    int  pos;
    char ch;
    for(int i=0;i<msg.length();i++){
        ch= msg[i];
        if(ch>='a' && ch<='z'){
            pos = ch - 'a';
           pos = (pos + shft )%26;
           res = 'a'+pos;
           return res;
        
        }
        else if(ch>='A' && ch<='Z'){
            pos = ch - 'A';
           pos = (pos + shft )%26;
           res = 'A'+pos;
           return res;
           
        } 
         
        else {
            return "fuck";
        }
        }
        
        

}
int main(){
    string msg;
    int shft;
    cin>>msg>>shft;
    cout<<encrpytWithCaesar(msg,shft);
    
        }
        
        
        
        
     
    
     
    


