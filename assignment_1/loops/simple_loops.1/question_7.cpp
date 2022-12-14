#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    double guess;
    guess=x/2;
    while(abs(guess*guess-x)>=pow(10,-12)){
        guess=(guess + int(x)/guess)/2;
    }
    cout<<guess;
}