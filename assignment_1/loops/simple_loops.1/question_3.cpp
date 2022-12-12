#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
while(n>0){
  int r;
  r=n%10;
  sum=sum+r;
  n=n/10;

}
    cout<<"sum of the digits in given number n:"<<sum;

    }
