#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDiceFor6(){
	int face,f6=0;
	srand(time(0));
	for(int i=0;i<10;i++){
		face=(rand()%6+1);
		if(face==6)
        ++f6;
		
		

	}
	return f6;
	
}
int main(){
   
	cout<<rollDiceFor6();
}
