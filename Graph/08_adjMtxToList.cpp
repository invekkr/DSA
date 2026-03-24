#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> convertToAdjList(vector<vector<int>> &adjMat) {
    int V = adjMat.size();              // Number of vertices
    vector<vector<int>> adjList(V);     // Create adjacency list

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(adjMat[i][j]==1){
                adjList[i].push_back(j);
            }
        }
    }
    return adjList;
}

int main() {
    // adjacency matrix for undirected graph
    vector<vector<int>> adjMat = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {0, 1, 0, 0}
    };

    vector<vector<int>> adjList = convertToAdjList(adjMat);

    // Print adjacency list
    cout << "Adjacency List Representation:\n";
    for (int i = 0; i < adjList.size(); i++) {
        cout << i << " -> ";
        for (auto node : adjList[i]) {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
