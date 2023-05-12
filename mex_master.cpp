#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    vector<int> A, B, C;
    while(t--){

        int n;
        cin>>n;

        int num, count0=0;
        bool only1s0s=true;
        bool no1s=true;
        for(int i=0; i<n; i++){
            cin>>num;
            if(num == 0)
                count0++;
            else if(num==1)
                no1s=false;
            else
                only1s0s = false;
        }

        if(2*count0 > n+1){

            if(!only1s0s || no1s)
                cout<<"1\n";
            else
                cout<<"2\n";
        }
        else
            cout<<"0\n";

    }

    return 0;
}