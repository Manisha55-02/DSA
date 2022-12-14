#include <bits/stdc++.h>
using namespace std;
int main(){
  int weight=1,sum=0,n,rem;
 string bin;
 cin>>bin;
 char ch;
 n=bin.length();
 for(int i=n-1;i<=0;i--){
    ch=bin[i];
  rem=ch*weight;
  sum =sum+rem;
  weight =weight*2;
   cout<<sum;
  
 }


    }
