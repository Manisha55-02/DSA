#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string randomPassword(){
    char res;
    string password="";
    srand(time(0));
     int len=7+rand()%(10-7);
        for (int i=0;i<=len;i++){
            res = 33+rand()%(122-33);
            password+=res;
     }
     return password;

    }
	
int main(){
   
	cout<<randomPassword();
}
