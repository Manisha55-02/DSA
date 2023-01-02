#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char randomLicencePlate(){
    char res;
    srand(time(0));
     int len=6+rand()%(8-6);
     cout<<len<<endl;
     if(len==6){
        for (int i=0;i<=2;i++){
            res = 'A'+rand()%('z'-'A');   
            cout<<res;
     }
        for(int i=3;i<=5;i++){
        int res1=rand()%10;
        cout<<res1;
       }
    
     }
    else if(len==7){
        for (int i=0;i<=3;i++){
       int res1=rand()%10;
        cout<<res1;
     }
        for(int i=4;i<=6;i++){
         res = 'A'+rand()%('z'-'A');    
            cout<<res;
       }
    
     }


    }
	
int main(){
   
	randomLicencePlate();
}
