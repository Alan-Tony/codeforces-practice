#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int b, known_box_1=0, unknown_box_1=0, box_0=0, box_2=0, total=0;
        for(int i=0; i<n; i++){

            cin>>b;
            if(b==1){

                 if(!box_0){     //Buy new box
                    total++;
                }
                else{   //Consume an empty box
                    box_0--;
                }
                unknown_box_1++;
            }
            else{

                known_box_1 += unknown_box_1;
                
                if(known_box_1>2){

                    if(known_box_1%2){
                        box_0 += (known_box_1-1)/2;
                        known_box_1 = 1;
                    }
                    else{
                        box_0 += known_box_1/2-1;
                        known_box_1 = 2;
                    }
                }

                unknown_box_1=0;
            }
        }

        cout<<total<<"\n";
    }

    return 0;
}