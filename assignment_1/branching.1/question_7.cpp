#include <bits/stdc++.h>
using namespace std;
int main(){
    string month;
    int day;
    cout<<"please check that you are entering correct details of month and day :"<<"\n";
    cin>>month>>day;
    if(month=="december"){
        if(day>=21) cout<<"winter";
        else cout<<"fall";
    }
    else if(month=="january" || month=="february"){
        cout<<"winter";
    }
    else if(month=="march"){
        if(day<20) cout<<"winter";
    }
    if(month=="march"){
        if(day>=20) cout<<"spring";
        else cout<<"winter";
    }
    else if(month=="april" || month=="may"){
        cout<<"spring";
    }
    else if(month=="june"){
        if(day<20) cout<<"spring";
        
    }
    if(month=="june"){
        if(day>=21) cout<<"fall";
        else cout<<"summer";
    }
    else if(month=="october" || month=="november"){
        cout<<"fall";
    }
    else if(month=="december"){
        if(day<20) cout<<"fall";
    }




}