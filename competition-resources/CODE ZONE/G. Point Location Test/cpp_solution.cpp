#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        long long a=x3-x1, b=y2-y1, c=x2-x1, d=y3-y1;
        long long ans=a*b-c*d;
        if(ans==0){
            cout<<"TOUCH"<<"\n";
        }
        else if(ans>0){
            cout<<"RIGHT"<<"\n";
        }
        else {
            cout<<"LEFT"<<"\n";
        }
    }
}