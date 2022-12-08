#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"*make sure you give input string having 3 uppercase letters followed by 3 digits! "<<"\n";
    cin>>s;
    if(s.length()==6 ){
       if((s[0]=='A'|| s[0]=='B'|| s[0]=='C'|| s[0]=='D'|| s[0]=='E'|| s[0]=='F'|| s[0]=='G'|| s[0]=='H'|| s[0]=='I'|| s[0]=='J'|| s[0]=='K'|| s[0]=='L'|| s[0]=='M'|| s[0]=='N'|| s[0]=='O'|| s[0]=='P'|| s[0]=='Q'|| s[0]=='R'|| s[0]=='S'|| s[0]=='T'|| s[0]=='U'|| s[0]=='V'|| s[0]=='W'||s[0]=='X'|| s[0]=='Y'|| s[0]=='Z')){
          if((s[1]=='A'|| s[1]=='B'|| s[1]=='C'|| s[1]=='D'|| s[1]=='E'|| s[1]=='F'|| s[1]=='G'|| s[1]=='H'|| s[1]=='I'|| s[1]=='J'|| s[1]=='K'|| s[1]=='L'|| s[1]=='M'|| s[1]=='N'|| s[1]=='O'|| s[1]=='P'|| s[1]=='Q'|| s[1]=='R'|| s[1]=='S'|| s[1]=='T'|| s[1]=='U'|| s[1]=='V'|| s[1]=='W'||s[1]=='X'|| s[1]=='Y'|| s[1]=='Z')){
            if((s[2]=='A'|| s[2]=='B'|| s[2]=='C'|| s[2]=='D'|| s[2]=='E'|| s[2]=='F'|| s[2]=='G'|| s[2]=='H'|| s[2]=='I'|| s[2]=='J'|| s[2]=='K'|| s[2]=='L'|| s[2]=='M'|| s[2]=='N'|| s[2]=='O'|| s[2]=='P'|| s[2]=='Q'|| s[2]=='R'|| s[2]=='S'|| s[2]=='T'|| s[2]=='U'|| s[2]=='V'|| s[2]=='W'||s[2]=='X'|| s[2]=='Y'|| s[2]=='Z')){
                if(s[3]=='1'|| s[3]=='2'|| s[3]=='3'|| s[3]=='4'|| s[3]=='5'|| s[3]=='6'|| s[3]=='7'|| s[3]=='8'|| s[3]=='9'|| s[3]=='0')
                    {
                      if(s[4]=='1'|| s[4]=='2'|| s[4]=='3'|| s[4]=='4'|| s[4]=='5'|| s[4]=='6'|| s[4]=='7'|| s[4]=='8'|| s[4]=='9'|| s[4]=='0'){
                        if(s[5]=='1'|| s[5]=='2'|| s[5]=='3'|| s[5]=='4'|| s[5]=='5'|| s[5]=='6'|| s[5]=='7'|| s[5]=='8'|| s[5]=='9'|| s[5]=='0'){
                            cout<<"Older style licence plate";
                        }
                        else cout<<"follow the correct order";
                      }
                      else cout<<"follow the correct order";
                    }
                    else cout<<"follow the correct order";
                
            }
            else cout<<"follow the correct order";
          }
          else cout<<"follow the correct order";
       }
       else cout<<"follow the correct order";
    }
       else cout<<"Invalid licence plate";

//similarily for licence plate having 4 digits followed by 3 uppercase letters
      
       
}  

