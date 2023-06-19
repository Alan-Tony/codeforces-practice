//https://codeforces.com/problemset/problem/1833/D

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;

int main(){

    ulli t;
    cin>>t;

    lli n, P[2001];
    lli amax, amax2, l, r, i;

    while(t--){

        cin>>n;
        for(i=0; i<n; i++){
            cin>>P[i];
            if(P[i]==n)
                amax=i;
            if(P[i]==n-1)
                amax2=i;
        }

        if(n==1){
            cout<<1<<"\n";
            continue;
        }

        if(amax==0)
            amax=amax2;

        if(amax==n-1 && P[0]>P[n-2])
            l=r=n-1;
        else{
            l=r=amax-1;
            while(l>0 && P[l-1]>P[0])
                l--;
        }

        //Operation

        i=0;
        while(r+1+i<=n-1)
            cout<<P[r + 1 + i++]<<" ";

        i=0;
        while(r-i>=l)
            cout<<P[r - i++]<<" ";

        i=0;
        while(i<l)
            cout<<P[i++]<<" ";

        cout<<"\n";
    }

    return 0;
}