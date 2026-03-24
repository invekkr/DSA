#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter number of Nodes and Edges: ";
    int nodes, edges;
    cin >> nodes >> edges;

    // Declare adjacency list
    vector<int> adj[nodes + 1]; // 1-based indexing

    // Input edges for directed graph
    for (int i = 1; i <= edges; i++) { 
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print adjacency list
    cout << "\nAdjacency List: Directed Graph\n";
    for (int i = 1; i <= nodes; i++) {
        cout << i << " -> ";
        for (auto it : adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
