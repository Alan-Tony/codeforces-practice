#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    int countA=0, countD=0;
    for(auto c:s){
        if(c=='A')
            countA++;
        else
            countD++;
    }

    if(countA > countD)
        cout<<"Anton";
    else if(countD > countA)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}