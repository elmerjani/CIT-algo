#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;


int main(){
    int n;
    cin>>n;
    if(n<=1){
        cout<<n<<"\n";
        return 0;
    }
    long long f0 = 0, f1 = 1;
    for(int i= 2; i<=n ; i++){
        long long tmp = f0 + f1;
        f0 = f1;
        f1 = tmp;
        f0%=MOD;
        f1%=MOD;
        
    } 
    cout<<f1<<"\n";
}