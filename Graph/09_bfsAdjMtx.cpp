#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;

    int adj[n][n]={0};

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter value for u & v : "<<endl;
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}