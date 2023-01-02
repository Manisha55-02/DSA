#include <bits/stdc++.h>
using namespace std;

string getUserMove(){
    string move;
    cin>>move;
    return move;
}
string getComputerMove(){
    srand(time(0));
    int num = 1+rand()%3;
    if(num==1) return "rock";
    else if(num==2) return "paper";
    else return "scissors";
}
int getResult(){
    string str1=getUserMove();
    string str2=getComputerMove();
    if((str1=="rock" && str2=="rock") || (str1=="paper" && str2=="paper") || (str1=="scissors" && str2=="scissors")) return -1;
    else if((str1=="rock" && str2=="scissors") || (str1=="scissors" && str2=="paper") || (str1=="paper" && str2=="rock")) return 1;
    else return 0;
 
}

int main(){
//cout<<getUserMove();


     cout<<getResult();


    

 
}