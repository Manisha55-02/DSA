#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
using namespace std;

bool cmp(int first,int second){
    return second<first; // for ascending f<s and for descending s<f

}
int main(){
    int a[]={10,5,3,90,37,89};
    int n =  sizeof(a)/ sizeof(int);
    sort(a,a+n,greater<int>()); //using arrays
    sort(a,a+n,cmp);
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> v{10,5,3,90,37,89};//using vector
    sort(v.begin(),v.end(),cmp);
    for(auto x:v){
        cout<<x<<" ";

    }
    cout<<endl;

    list<int>lst{10,5,3,90,37,89};//using list
    lst.sort(cmp);
    for(auto x:v){
        cout<<x<<" ";

    }
    cout<<endl;

}