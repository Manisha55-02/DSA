#include <bits/stdc++.h>
using namespace std;
int main(){
    int bin,weight=1,sum=0,rem;
    cin>>bin;
    while(bin!=0){
      rem=bin%10;
      sum=sum+rem*weight;
      bin=bin/10;
      weight=weight*2;

    }
    cout<<sum;

    }
