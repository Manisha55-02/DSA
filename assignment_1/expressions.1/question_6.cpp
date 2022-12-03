#include <bits/stdc++.h>
using namespace std;
int main(){
    int meal_cost;
    double tax,tip,grand_total;
    cin>>meal_cost;
    tax=meal_cost*0.181;
    tip=0.05*meal_cost;
    grand_total=tax+tip+meal_cost;
    cout<<fixed<<setprecision(2)<<"tax paid="<<tax<<endl;
cout<<fixed<<setprecision(2)<<"tip paid="<<tip<<endl;
cout<<fixed<<setprecision(2)<<"grand_total="<<grand_total;

    


}