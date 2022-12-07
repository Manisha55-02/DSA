#include <bits/stdc++.h>

using namespace std;

int main()
{
    string month;
    cin>>month;
    if(month=="january" ||month=="march" ||month=="may"||month=="july"||month=="august"||month=="october"||month=="december")
    { cout<<"31 days";
    }
    else if(month=="april"||month=="june"||month=="september"||month=="november") {
        cout<<"30 days";
    }
    else 
    {cout<<"28 or 29 days";
    }
}