#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <list>
#include <string>
using namespace std;

int KeyPressesForChar(char c){
    string KeyMapping[] = {" ",".,?!:","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    for(auto key:KeyMapping){
        int npress = 0;
        for(auto w:key){
            ++npress;
            if(w==c)
                return npress;

        }
    }
    return 0;
}
//Method1
int countKeyPresses1(string s){
    int count = 0;
    for(auto c:s){
        count+=KeyPressesForChar(toupper(c)); 
    }
    return count;
}
//method2
int countKeyPresses2(string s){
    int keypress[128] = {0};
    keypress['A']= 1;
    keypress['B']= 2;
//continue this process
    int count = 0;
    for(auto c:s){
        count+=keypress[toupper(c)]; 
    }
    return count;
}
//method3
int countKeyPresses3(string s){
unordered_map<char,int>keypress{{'A',1},{'B',2}};
//continue this process
for(auto e:keypress){
    cout<<e.first<<" "<<e.second<<endl;
}
    int count = 0;
    for(auto c:s){
        count+=keypress[toupper(c)]; 
    }
    return count;
}
//method4
int countKeyPresses4(string s){
    map<char,int>keypress{{'A',1},{'c',3},{'B',2}};
    for(auto e:keypress){
        cout<<e.first<<" "<<e.second<<endl;
    }
    int count = 0;
    for(auto c:s){
        count+=keypress[toupper(c)]; 
    }
    return count;
}
int main(){
    string s;
    //cin>>s; will not take spaces as i/p
    getline(cin,s);
    cout<<countKeyPresses4(s);
}