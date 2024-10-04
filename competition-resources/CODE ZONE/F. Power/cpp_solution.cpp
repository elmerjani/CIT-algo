#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long binpow(long long a, long long b) {
    long long ans = 1;
    while(b>0){
        if(b%2==1){
            ans *= a;
            ans %= MOD;
        }
        a *= a;
        a %= MOD;
        b/=2;
    }
    return ans;
}

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long result = binpow(a, b);
        cout<< result << endl;
    }

    return 0;
}