#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,q,r;
    cin>>q;
    string res="";
    while(q>0){
        r=q%2;
        string tmp=to_string(r);
        res=tmp+res;
        q=q/2;
        cout<<res;


    }
    

}