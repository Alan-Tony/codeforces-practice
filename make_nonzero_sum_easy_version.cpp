//https://codeforces.com/problemset/problem/1753/A1

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){

    int t;
    cin>>t;

    int n, num, i, p_count;
    bool A[200001];
    int P[200001][2];
    while(t--){

        cin>>n;
        for(i=0; i<n; i++){
            cin>>num;
            A[i]= num==1;
        }

        if(n%2){
            cout<<"-1\n";
            continue;
        }

        p_count=0;
        for(i=0; i< n/2; i++){

            if(A[2*i] ^ A[2*i+1])
                P[p_count++][1]= P[p_count][0]= (P[p_count++][1]= P[p_count][0]= 2*i+1) + 1;
            else{
                P[p_count++][1]= (P[p_count][0]= 2*i+1) + 1;
            }
        }

        cout<<p_count<<"\n";
        for(i=0; i<p_count; i++)
            cout<<P[i][0]<<" "<<P[i][1]<<"\n";
    }
}
