#include<bits/stdc++.h>
using namespace std;
void bfs(int start, vector<int> adj[], vector<int> &vis ){
    queue<int>q;
    vis[start]=1;
    q.push(start);

    while(!q.empty()){
        int temp = q.front();
        q.pop();

        cout<<temp<<" ";

        // traversing adjcaent node
        for(auto ngh : adj[temp]){
            if(!vis[ngh]){      // checking if that neighbor has already been traversed
                vis[ngh] = 1;
                q.push(ngh);
            }

        }
    }
}
int main(){
    int n,e;
    cout<<"Enter value for nodes & edges : "<<endl;
    cin>>n>>e;
    vector<int> adj[n+1];;

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter node values (u->v) "<<endl;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" -> ";
            for(auto it:adj[i]){
                cout<<it<<" ";
            }
            cout<<endl;
    }
    vector<int> visited(n+1,0);
    bfs(3,adj,visited);


return 0;
}