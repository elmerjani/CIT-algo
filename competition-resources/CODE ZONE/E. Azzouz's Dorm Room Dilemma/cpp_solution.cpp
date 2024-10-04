#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, b1;
    cin >> a1 >> b1;
    vector<int> p2(2), p3(2);
    cin >> p2[0] >> p2[1] >> p3[0]>>p3[1];
    for(int i = 0; i <2; i++){
        for(int j = 0; j <2; j++){
            if((p2[i] + p3[j] <= a1 && max(p2[1-i], p3[1-j]) <= b1) || (p2[i] + p3[j] <= b1 && max(p2[1-i],p3[1-j]) <= a1)){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

}