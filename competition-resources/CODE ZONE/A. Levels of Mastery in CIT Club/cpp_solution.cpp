#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int score;
        cin >> score;
        if(score < 1400){
            cout<<"Level 4";
        }
        else if(score < 1600){
            cout<<"Level 3";
        }
        else if(score < 1900){
            cout<<"Level 2";
        }
        else {
            cout<<"Level 1";
        }
        cout<<"\n";

    }
    
}