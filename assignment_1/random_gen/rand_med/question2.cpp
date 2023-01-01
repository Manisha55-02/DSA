#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string randomLicencePlate(){
    char res;
    string plate="";
    srand(time(0));
     int len=6+rand()%(8-6);
     cout<<len<<endl;
     if(len==6){
        for (int i=0;i<3;i++){
            res = 'A'+rand()%('z'-'A');   
            plate+=res;
            cout<<plate;
     }
        for(int j=3;j<6;j++){
        res=rand()%10;
        plate+=res;
        cout<<plate;
       }
    
     }

     if(len==7){
        for (int i=0;i<4;i++){
            res = rand()%10;
           
     }
      for (int i=4;i<7;i++){
            res = 'A'+rand()%('z'-'A');
          
            }
     
     }
     cout<<res;;

    }
	
int main(){
   
	cout<<randomLicencePlate();
}
