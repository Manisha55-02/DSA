#include <bits/stdc++.h>
using namespace std;
//finding max and min of i/p array
int main(){
    int size;
    cin>>size;
   

    int arr[size];//declaring array
    for(int i=0;i<size;i++){
        cin>>arr[i];//initializing array element
        }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;


    for(int i=0;i<size;i++){
        maxNo=max(maxNo,arr[i]);//if(arr[i]>maxNo) arr[i]=maxNo
        minNo=min(minNo,arr[i]);//if(arr[i]<minNo) arr[i]=minNo
    }
    cout<<maxNo<<" "<<minNo;
   
}