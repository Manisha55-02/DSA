#include <bits/stdc++.h>
using namespace std;
int main(){
     int r=4,t;
     float ci;
     int dep_money;
     cin>>dep_money>>t;
     while(t--){
     ci=dep_money*pow((1+0.04),t);
     cout<<ci<<endl;
     }
     
    }