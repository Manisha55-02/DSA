#include <bits/stdc++.h>
using namespace std;
int main(){
  char col;
  int row;
  cin>>col>>row;
  if(col=='a'|| col=='c'|| col=='e'|| col=='g'){
    if(row%2 == 1) cout<<"black";
    else cout<<"white";
  }
  if(col=='b'|| col=='d'|| col=='f'|| col=='h'){
    if(row%2== 0) cout<<"black";
    else cout<<"white";
  }


}