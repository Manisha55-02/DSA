#include <bits/stdc++.h>
using namespace std;
string  encrpytWithCaesar(string msg,int shft){
    string res ="",tmp="";
    int  pos;
    char ch;
     for(int i=0;i<msg.length();i++){
        ch= msg[i];
        if(ch>='a' && ch<='z'){
           pos = ch - 'a';
           pos = (pos + shft )%26;
           tmp = ('a'+pos);
           res += tmp;
           return tmp;
        
        }
        else if(ch>='A' && ch<='Z'){
            pos = ch - 'A';
           pos = (pos + shft )%26;
           tmp= ('A'+pos);
           res+=tmp;
           return tmp;
           
        } 
         
        else {
            tmp=ch;
            res+=tmp;
            return tmp;
            
        }
        }
        
        

}
int main(){
    string msg;
    int shft;
    cin>>msg>>shft;
    cout<<encrpytWithCaesar(msg,shft);
    
        }
        
        
        
        
     
    
     
    


