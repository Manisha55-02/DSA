#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Celsius"<<"\t"<<"Fahrenheit "<<endl;
    for(int tmptr=0;tmptr<=100;tmptr++){
        if(tmptr%10==0){
            cout<<tmptr<<"\t"<<tmptr*9/5+32<<endl;
        }
    }
}