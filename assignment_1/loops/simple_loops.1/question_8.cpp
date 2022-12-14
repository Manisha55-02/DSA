#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Celsius "<<"Fahrenheit "<<endl;
    for(int tmptr=0;tmptr<=100;tmptr++){
        if(tmptr%10==0){
            cout<<tmptr<<"         "<<%2d<<tmptr*9/5+32<<endl;
        }
    }
}