#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    float s=(s1+s2+s3)/2;
    float x=s*(s-s1)*(s-s2)*(s-s3);
    cout<<"Area of a triangle= "<<sqrt(x);
}