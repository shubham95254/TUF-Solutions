class Solution {
   public:
    bool isBipartite(int V, vector<vector<int>> edges) {
        // convert to adjlist
        vector<vector<int>> adj(V);
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<int> vis(V, -1);
        queue<pair<int, int>> q;  // node, colour

        for (int i = 0; i < V; i++) {
            if (vis[i] == -1) {
                q.push({i, 0});
                while (!q.empty()) {
                    int ele = q.front().first;
                    int colour = q.front().second;
                    vis[ele] = colour;
                    q.pop();

                    for (auto it : adj[ele]) {
                        if (vis[it] == colour) return false;
                        if (vis[it] == -1) {
                            q.push({it, (colour + 1) % 2});
                        }
                    }
                }
            }
        }
        return true;
    }
};