class Solution {
   public:
    bool traverse(int node, int colour, vector<vector<int>>& adj,
                  vector<int>& vis) {
        vis[node] = colour;
        for (auto it : adj[node]) {
            if (vis[it] == colour) return false;
            if (vis[it] == -1) {
                if (traverse(it, (colour + 1) % 2, adj, vis)) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(int V, vector<vector<int>> edges) {  // 0-> Green, 1 ->
                                                          // blue

        // convert to adjlist
        vector<vector<int>> adj(V);
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<int> vis(V, -1);
        for (int i = 0; i < V; i++) {
            if (vis[i] == -1 && !traverse(i, 0, adj, vis)) return false;
        }
        return true;
    }
};
