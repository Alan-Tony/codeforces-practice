#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> A(n, 0), B(n, 0);
        for(int i=0; i<n; i++)
            cin>>A[i];

        for(int i=0; i<n; i++)
            cin>>B[i];

        bool start=false;
        int fc, lc;
        for(int i=0; i<n; i++){
            if(A[i]!=B[i]){
                if(!start){
                    fc=i;
                    start=true;
                }
                lc=i;
            }
        }

        while(fc>0 && B[fc-1]<=B[fc])
            fc--;

        while(lc<n-1 && B[lc+1]>=B[lc])
            lc++;

        cout<<fc+1<<" "<<lc+1<<"\n";
    }

    return 0;
}