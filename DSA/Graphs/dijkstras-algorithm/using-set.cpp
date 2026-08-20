class Solution {
   public:
    vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {
        // make adj vector
        vector<pair<int, int>> adj[V];
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        vector<int> dist(V, 1e9);
        set<pair<int, int>> st;
        dist[S] = 0;
        st.insert({0, S});

        while (!st.empty()) {//st.empty exists
            auto it = *st.begin();//to get first element in set
            int ele = it.second;
            int d = it.first;
            
            st.erase(it);

            for (auto it : adj[ele]) {
                int v = it.first;
                int wt = it.second;
                if (d + wt < dist[v]) {
                    if(dist[v]!=1e9) st.erase({dist[v],v});
                    st.insert({d + wt, v});
                    dist[v] = d + wt;
                }
            }
        }
        return dist;
    }
};