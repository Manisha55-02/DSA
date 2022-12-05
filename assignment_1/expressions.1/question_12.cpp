#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,d,mm,hh,ss;
    cin>>s;
    ss=s%60;
    d=(s/86400)%60;
    hh=(s/3600)%60;
    mm=(s/60)%60;
    cout<<d<<":"<<hh<<":"<<mm<<":"<<ss;

}