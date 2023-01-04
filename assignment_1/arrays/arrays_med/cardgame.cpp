//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

string* createDeck(){
  //string deck[52]; locally declaring,it should not sit in stack but we need to access in heap section in the process and this can be done by using 'new' 
  string* deck[52] = new string[52];
  string values = "23456789TAJQK";//values on the card
  string suits = "shdc";//spade,heart....
  int i=0;
  for(auto v: values){//for each loop
    for(auto s: suits){
        string tmp = "";
        tmp = tmp + v + s;
        cout<<tmp<<" ";
        deck[i++] = tmp;

    }
  }
  return deck;
}
void swap(string deck[52],int i,int j]){
    string tmp = deck[i];
    deck[i] = deck[j];
    deck[j] = tmp;
}
void shuffle(string deck[52]){
    srand(time(0));
    for(int i=0;i<52;i++){
        int rind = rand()%52;
        swap(deck,i,rind);

    }

}
void display(string deck[52]){
    for(int i=0;i<52;i++){
        cout<<deck[i]<<" ";
    }
    cout<<endl;

}
int main(){
string* deck =createDeck();
display(deck);
shuffle(deck);
int k=0,n;
for(int i=0;i<n;i++){
    cout<<"player"<<k++<<deck;
}
for(int i=0;i<52;i++){
    cout<<deck[i]<<" ";
}
}