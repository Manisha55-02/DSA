#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string rollDice(){
	int face, f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
	srand(time(0));
	for(int i=0;i<5;i++){
		face=(rand()%6+1);
		if(face==1)++f1;
		else if(face==2)++f2;
		else if(face==3)++f3;
		else if(face==4)++f4;
		else if(face==5)++f5;
		else if(face==6)++f6;

	}
	if(f1==5||f2==5||f3==5||f4==5||f5==5||f6==5) return "Yahoo";
	else return "Try again";
}
int main(){
	cout<<rollDice();
}
