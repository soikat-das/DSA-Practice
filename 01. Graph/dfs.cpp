#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void dfs(int node, vector<int>adj[], vector<int>&visited, vector<int>&result){
            visited[node] = 1;
            result.push_back(node);

            for(auto it: adj[node]) {
                if(!visited[it]) {
                    dfs(it,adj,visited,result)
                }
            }
        }
        vector<int> dfsOfGraph(int V, vector<int> adj[]) {
            vector<int> visited(V, 0);
            vector<int> result;
            int start = 0;
            dfs(start, adj, visited, result);
            return result;
        }
};


int main() {
    int V = 5;  // Number of vertices
    vector<int> adj[V];

    // Example graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    Solution obj;
    vector<int> dfsResult = obj.dfsOfGraph(V, adj);

    // Print the DFS result
    for (int i : dfsResult) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}