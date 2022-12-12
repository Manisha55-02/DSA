#include <bits/stdc++.h>
using namespace std;
int main(){
  int num;
  string say;
for(int num=1;num<=100;num++){
          if(num%3==0 && num%5==0) {
            cout<<"FizzBuzz"<<",";
      }
      else if(num%5==0){
        cout<<"Buzz"<<",";
      }
      else if(num%3==0) {
        cout<<"Fizz"<<",";
        
    }
    else cout<<num<<",";
        
      }
      

}


    
    
