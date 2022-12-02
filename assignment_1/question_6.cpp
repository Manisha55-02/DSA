#include <iostream>
using namespace std;
int main(){
    int meal_cost;
    double tax,tip,grand_total;
    cin>>meal_cost;
    tax=meal_cost*0.181;
    tip=0.05*meal_cost;
    grand_total=tax+tip;
    cout<<"tax paid= "<<tax<<endl;
cout<<"tip paid= "<<tip<<endl;
cout<<"total paid= "<<grand_total;

    


}