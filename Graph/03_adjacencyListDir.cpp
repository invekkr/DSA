#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter number of Nodes and Edges: ";
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> adj[nodes+1];

    for(int i=0;i<edges;i++){
        int u, v;
        cout << "Enter directed edge (u -> v): ";
        cin >> u >> v;
        adj[u].push_back(v);  // only one direction
    }

    // Print adjacency list
    cout << "\nAdjacency List (Directed Graph):\n";
    for (int i = 1; i <= nodes; i++) {
        cout << i << " -> ";
        for (auto it : adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
return 0;
}