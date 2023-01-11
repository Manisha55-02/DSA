#include <fstream>
#include <iostream>
using namespace std;
//Check a matrix if it has the parity property.
int main()
{
    //ifstream cin("error_correction.txt");
    int n;
    while(cin>>n)
    {
        if(n==0)    break;
        int r[100]={0},c[100]={0};  //each row and column sum
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int num;
                cin>>num;
                if(num==1)
                {
                    r[i]++;c[j]++;
                }
            }
        int ro=0,co=0;
        for(int i=0;i<n;i++)
        {
            if(r[i]%2==1)
            {
                if(ro!=0)
                {
                    ro=-1;break;    //more than one odd sum in rows
                }
                ro=i+1; //odd sum in rows
            }
            if(c[i]%2==1)
            {
                if(co!=0)
                {
                    co=-1;break;    //more than one odd sum in columns
                }
                co=i+1; //odd sum in columns
            }
        }
        if(ro==co&&ro==0) cout<<"OK"<<endl;
        if(ro>0&&co>0) printf("Change bit (%d,%d)\n",ro,co);
        if(ro<0||co<0) cout<<"Corrupt"<<endl;
    }
    return 0;
}