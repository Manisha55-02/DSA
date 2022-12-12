#include <bits/stdc++.h>
using namespace std;
int main(){
      string alpha;
      int count_consonants=0,count_vowels=0;
      cin>>alpha;
      for(int i=0;i<alpha.length();i++){
        if(alpha[i]=='A'|| alpha[i]=='E'|| alpha[i]=='I'|| alpha[i]=='O'|| alpha[i]=='U'|| alpha[i]=='a'|| alpha[i]=='e'|| alpha[i]=='i'|| alpha[i]=='o'|| alpha[i]=='u') {
                count_vowels=count_vowels+1;
        }
        else {
         count_consonants=count_consonants+1;

        }
        
      } 

      cout<<"no. of vowels:"<<count_vowels<<"\n";
      cout<<"no. of consonants:"<<count_consonants;
    
    }