#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

const ll MOD=1e9+7;
 
vector<vector<ll>> multiply(const vector<vector<ll>>& A, const vector<vector<ll>>& B) {
    int n = A.size();
    vector<vector<ll>> C(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j] % MOD) % MOD;
            }
        }
    }
    return C;
}
 
 
vector<vector<ll>> matrixExpo(vector<vector<ll>>& A, ll power) {
    int n = A.size();
    vector<vector<ll>> result(n, vector<ll>(n, 0));
    
    
    for (int i = 0; i < n; i++) {
        result[i][i] = 1;
    }
 
    while (power > 0) {
        if (power % 2 == 1) {
            result = multiply(result, A);
        }
        A = multiply(A, A);
        power /= 2;
    }
 
    return result;
}
 
int main() {
    
    vector<vector<ll>> fibo0={{1,1},{1,0}};
    ll n;cin >> n;
    vector<vector<ll>> fibon=matrixExpo(fibo0,n);
    cout<<fibon[0][1]<<"\n";
}