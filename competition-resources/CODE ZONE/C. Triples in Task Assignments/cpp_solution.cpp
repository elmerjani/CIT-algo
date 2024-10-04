#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> freq(n+1,0);
  for(int i=0;i<n;i++){
    int ai;
    cin>>ai;
    freq[ai]++;
  }
  
  for(int i=1;i<=n;i++){
    if(freq[i]>=3){
      cout<<i<<"\n";
      return ;
    }
  }
  cout<<-1<<"\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
