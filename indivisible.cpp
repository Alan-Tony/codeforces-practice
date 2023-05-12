#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    int n;

    while(t--){

        cin>>n;
        
        if(n == 1)
            cout<<"1\n";
        else if(n%2==0){

            for(int i=2; i<=n; i+=2)
                cout<<i<<" "<<i-1<<" ";
            cout<<"\n";
        }
        else
            cout<<"-1\n";
    }

    return 0;
}