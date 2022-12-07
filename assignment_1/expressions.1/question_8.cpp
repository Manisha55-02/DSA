#include <bits/stdc++.h>
using namespace std;
int main(){
     int r=4,i1,i2,i3,t=1;
     int p;
     cin>>p;
     //compound intrest=interst to interst
     i1=(p*t*r)/100;
     cout<<i1<<"\n";//interst for 1st year
     cout<<"total amount paid for 1st yr:"<<p+i1<<"\n";//total amount paid after 1st year
     i2=((p+i1)*t*r)/100;
     cout<<i2<<"\n";//interst for 2nd year
     cout<<"total amount paid for 2nd yr:"<<p+i2+i1<<"\n";//total intrest paid after 2nd year
     i3=((p+i2+i1)*t*r)/100;
     cout<<i3<<"\n";//interst for 3rd year
     cout<<"total amount paid for 3rd yr:"<<p+i3+i2+i1;//total intrest paid after 3rd year


    }