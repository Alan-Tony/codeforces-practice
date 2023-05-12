#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    int n;
    vector<int> A;
    while(t--){

        cin>>n;
        priority_queue<int, vector<int>, greater<int>> min_heap;
        priority_queue<int> max_heap;
        A = vector<int>(n, 0);
        for(int i=0; i<n; i++){
            cin>>A[i];
            min_heap.push(A[i]);
            max_heap.push(A[i]);
        }

        int lo=0, hi=n-1;
        bool done=false;
        while(lo<=hi && !done){
            
            done=true;
            if(A[lo] == max_heap.top()){
                lo++;
                max_heap.pop();
                done=false;
            }
            if(A[lo] == min_heap.top()){
                lo++;
                min_heap.pop();
                done=false;
            }
            if(A[hi] == max_heap.top()){
                hi--;
                max_heap.pop();
                done=false;
            }
            if(A[hi] == min_heap.top()){
                hi--;
                min_heap.pop();
                done=false;
            }
        }

        if(lo>hi)
            cout<<"-1\n";
        else
            cout<<lo+1<<" "<<hi+1<<"\n";
    }

    return 0;
}