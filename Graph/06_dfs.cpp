#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], vector<int>vis){
    vis[node]=1;
    cout<<node<<" ";

    for(auto ngh : adj[node]){
        if(!vis[ngh]){
            dfs(ngh,adj,vis);
        }
    }
    
}
int main(){
    int n,e;
    cout<<"Enter value for nodes and edges : "<<endl;
    cin>>n>>e;

    vector<int>adj[n+1];
    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter nodes u-v "<<endl;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=e;i++){
        cout<<i<<" -> ";
        for(auto it : adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    vector<int> visited(n+1,0);
    dfs(1,adj,visited);

return 0;
}