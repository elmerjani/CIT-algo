#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    while(n>=1){
        cout<<n<<" ";
        if(n==1){
            break;
        }
        else if(n%2==0){
            n/=2;
        }
        else{
            n=3*n+1;
        }
    }
}