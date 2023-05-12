#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t;
    cin>>t;

    long long int score=0, n, num;
    while(t--){

        cin>>n;
        score=0;
        for(long long int i=0; i<n; i++){

            cin>>num;
            if(num<=-1)
                score--;
            else
                score+=num;
        }
        cout<<score<<"\n";
    }

    return 0;
}