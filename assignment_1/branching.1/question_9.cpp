#include <bits/stdc++.h>
using namespace std;
int main(){
  int year;
  cin>>year;
  if(year%400==0) cout<<"leap year";
  else{
    if(year%100==0) cout<<"Not a leap year";
    else if(year%4==0) cout<<"Leap year";
    else cout<<"Not a leap year";
  }

}