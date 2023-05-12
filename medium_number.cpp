#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    int a, b, c, mx, mn;

    while(t--){

        cin>>a>>b>>c;
        mx = a>b ? a>c ? a : c : b>c ? b:c;
        mn = a<b ? a<c ? a : c : b<c ? b:c;
        cout<< a+b+c-mx-mn<<"\n";
    }

    return 0;
}