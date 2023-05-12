#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){

    lli n;
    cin>>n;
    lli num;
    vector<lli> A(n, 0);

    for(lli i=0; i<n; i++){
        cin>>A[i];
        A[i] -= (i+1);
    }
    
    sort(A.begin(), A.end());

    int median;
    if(n%2)
        median = A[n/2];
    else
        median = lli(round(
            (A[n/2] + A[n/2-1])/2.0
        ));

    lli sum=0;
    for(auto num: A)
        sum += abs(num-median);

    cout<<sum;

    return 0;
}