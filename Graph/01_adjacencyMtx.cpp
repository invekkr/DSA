#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Enter number of Nodes and Edges"<<endl;
    int nodes, edges;
    cin>>nodes>>edges;
    int adj[nodes+1][nodes+1] = {0};
    // Now will loop till the number of edges
    for(int i=1;i<=edges;i++){
        int u,v;
        cout<<"Enter values for node u & v"<<endl;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    // print the adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (int i = 1; i <= nodes; i++) {          // rows
        for (int j = 1; j <= nodes; j++) {      // columns
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}