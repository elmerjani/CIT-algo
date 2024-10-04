#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &v, int low, int high) {
    int left = 0, right = v.size()-1;
    int best = -1;  
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] >= low && v[mid] <= high) {
            best = v[mid];  
            left = mid + 1; 
        }
        else if (v[mid] < low) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return best;
}

int main() {
    int a, b;
    cin >> a >> b;
    int d = __gcd(a, b);
    vector<int> divisors;

    /* If x divides a and b then x divides gcd(a,b) */
    for (int i = 1; i * i <= d; i++) {
        if (d % i == 0) {
            if (a % i == 0 && b % i == 0) divisors.push_back(i);
            int x = d / i;
            if (i != x && a % x == 0 && b % x == 0) divisors.push_back(x); 
        }
    }

    int n = divisors.size();
    sort(divisors.begin(), divisors.end()); 

    int t;
    cin >> t;
    while (t--) {
        int low, high;
        cin >> low >> high;
        cout<<binary_search(divisors,low,high)<<"\n";
        
        
    }

    return 0;
}
