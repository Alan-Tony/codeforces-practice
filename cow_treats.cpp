#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

// Wrong answer on test case 3 (gave up)

int main(){

    ulli n, num;
    cin>>n;

    ulli count=0;
    vector<ulli> cow;
    vector<ulli> counts;

    bool in[100010]={false};
    for(ulli i=0; i<n; i++){
        cin>>num;
        cow.push_back(num);

        if(in[num-1])
            count--;
        else
            count++;
        counts.push_back(count);

        in[num-1] = !in[num-1];
    }

    vector<ulli> sus;
    for(ulli i=n-1; i>0; i--){

        if(cow[i]==cow[i-1] && counts[i]==0)
            sus.push_back(cow[i]);
    }

    sort(sus.begin(), sus.end());

    for(auto s: sus)
        cout<<s<<"\n";

    return 0;
}