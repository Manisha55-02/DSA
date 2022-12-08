#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int wave_length;
    cin>>wave_length;
    if(wave_length>=380 &&wave_length<=449) cout<<"violet";
    else if(wave_length>=450 &&wave_length<=494) cout<<"blue";
    else if(wave_length>=495 &&wave_length<=569) cout<<"green";
    else if(wave_length>=570 &&wave_length<=589) cout<<"yellow";
    else if(wave_length>=590 &&wave_length<=619) cout<<"orange";
    else if(wave_length>=620 &&wave_length<=750) cout<<"red";
    else cout<<"wavelength entered is outside of visible spectrum";
}