#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter number of Nodes and Edges: ";
    int nodes, edges;
    cin >> nodes >> edges;
    vector<pair<int,int>> adj[nodes+1];

    for(int i=0;i<edges;i++){
        int u, v, wt;
        cout << "Enter directed edge (u -> v) & weight : ";
        cin >> u >> v>> wt;
        adj[u].push_back({v,wt});  // only one direction
    }

    // Print adjacency list
    cout << "\nAdjacency List (Directed Graph):\n";
    for (int i = 1; i <= nodes; i++) {
        cout << i << " -> ";
        for (auto it : adj[i]) {
            cout << it.first << "{ wt : "<<it.second<<" } ";
        }
        cout << endl;
    }
return 0;
}