#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 2e3;
vector<int> adj[MAXN+1];
 
int depth(int start){
    stack<pair<int,int> > s ;
    s.push({start,1});
    int maxDepth = 0;
    while(!s.empty()){
        int node = s.top().first, currDepth = s.top().second;
        s.pop();
        maxDepth = max(maxDepth, currDepth);
        for (int v :adj[node]){
            s.push({v,currDepth+1});
        }
    }
    return maxDepth;   
}
 
int main(){
    int n;
    cin >> n;
    vector<int> boss(n+1);
    for(int i=1; i<=n; i++){
        cin >> boss[i];
        if(boss[i] != -1){
            adj[boss[i]].push_back(i);
        }
    }
    int maxDepth = 0;
    for(int i=1;i<=n;i++){
        if(boss[i] == -1){
            maxDepth = max(maxDepth, depth(i));
            
        }
    }
    cout<<maxDepth<<"\n";
 
}