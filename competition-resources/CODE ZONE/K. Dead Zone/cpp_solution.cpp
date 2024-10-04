#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n>>k;
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    int left = 0, curr = 0, best = 1;
    for(int i=0;i<k;i++){
        curr+=h[i];
    }
    int minimum = curr;
    for(int i=k;i<n;i++){
        curr+=(h[i]-h[left]);
        left++;
        if(curr<minimum){
            best = left+1;
            minimum = curr;
        }
    }
    cout<<best<<endl;
    

}