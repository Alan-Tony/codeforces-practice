#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    int n, k;
    while(t--){

        cin>>n>>k;
        string st="abc";

        vector<int> X(k, 0), C(k, 0);
        int i=0;
        while(i<k)
            cin>>X[i++];

        i=0;
        while(i<k)
            cin>>C[i++];

        int abc_counter=3, prev_c=3, prev_x=3;
        char curr='d';
        i=0;
        while(i<k){

            if(i && X[i-1]>3){

                prev_c=C[i-1];
                prev_x=X[i-1];
            }

            if( X[i]>3 && C[i]-prev_c > X[i]-prev_x ||
                X[i]<=3 && X[i]!=C[i]){
                st="NO";
                n=2;
                break;
            }

            if(X[i]>3){

                int j=0; 
                while(j++ < C[i]-prev_c)
                    st+=curr;

                // Add abc's as remaining characters
                while(st.length() < X[i])
                    st+= 97 + abc_counter++ % 3;

                curr++;
            }

            i++;
        }

        if(st != "NO")
            cout<<"YES\n";
        cout<<st.substr(0,n)<<"\n";
    }

    return 0;

}