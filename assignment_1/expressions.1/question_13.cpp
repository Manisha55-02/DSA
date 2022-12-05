#include <iostream> 
using namespace std; 
int main( ) 
{ 
	int n; 
	cout<<"Enter a 4 digit number: "; 
	cin>>n; 
	cout<<n/1000+(n/100)%10+(n/10)%10+n%10; 
} 