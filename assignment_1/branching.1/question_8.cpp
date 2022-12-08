#include <bits/stdc++.h>
using namespace std;
int main(){
    string month;
    int day;
    cin>>month>>day;
    if(month=="december"){
        if(day>=22) cout<<"Capricorn";
        else cout<<"Sagittarius";
    }
    else if(month=="january"){
        if(day<=19) cout<<"Capricorn";
        else cout<<"Aquarius";
    }
    if(month=="february"){
        if(day<=18) cout<<"Aquarius";
        else cout<<"Pisces";
    }
    else if(month=="march"){
        if(day<=20) cout<<"Pisces";
        else cout<<"Aries";
    }
    if(month=="april"){
        if(day<=19) cout<<"Aries";
        else cout<<"Taurus";
    }
    else if(month=="may"){
        if(day<=20) cout<<"Taurus";
        else cout<<"Gemini";
    }
    if(month=="june"){
        if(day<=20) cout<<"Gemini";
        else cout<<"Cancer";
    }
    else if(month=="july"){
        if(day<=22) cout<<"Cancer";
        else cout<<"Leo";
    }
    if(month=="august"){
        if(day<=22) cout<<"Leo";
        else cout<<"Virgo";
    }
    else if(month=="september"){
        if(day<=22) cout<<"Virgo";
        else cout<<"Libra";
    }
    if(month=="october"){
        if(day<=22) cout<<"Libra";
        else cout<<"Scorpio";
    }
    else if(month=="november"){
        if(day<=21) cout<<"Scorpio";
        else cout<<"Sagittarius";
    }
}
    
