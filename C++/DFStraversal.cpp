#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component) {
    component.push_back(node);
    visited[node] = true;

    // Recursive call for all connected nodes
    for (auto i : adj[node]) {
        if (!visited[i]) {
            dfs(i, visited, adj, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {

    // Prepare adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // To store all components
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    // Initialize visited map for all vertices
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    // Traverse all vertices
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, visited, adj, component);

            // Store the connected component
            ans.push_back(component);
        }
    }
    return ans;
}

int main() {
    // Example usage
    int V = 5, E = 4;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {3, 4}, {2, 3}};

    vector<vector<int>> result = depthFirstSearch(V, E, edges);

    for (const auto &component : result) {
        for (int node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
