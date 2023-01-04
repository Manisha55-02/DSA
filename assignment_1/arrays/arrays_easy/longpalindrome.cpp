#include <bits/stdc++.h>
using namespace std;
int findLengthOfLongPal(string s){
    int freq[52]={0};
    for(auto c:s){
        if(c>='a' && c<='z')
            ++freq[c-'a'+6];
        else
            ++freq[c-'A'];
    }
    int count=0;
    bool isOddExists = false;
    for(int i=0;i<52;i++){
        if(freq[i]%2==0)
            count+=freq[i];
        else{
            isOddExists = true;
            count+=freq[i]-1;
            
        }
    }
    if(isOddExists){
        ++count;
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    cout<<findLengthOfLongPal(s);
    //how testcases are made
    string s1="abcc";
    assert(findLengthOfLongPal(s1)==3);
    string s2="aabbbcc";
    assert(findLengthOfLongPal(s2)==7);
    string s3="";
    assert(findLengthOfLongPal(s3)==0);
    string s4="bb";
    assert(findLengthOfLongPal(s4)==3);

}