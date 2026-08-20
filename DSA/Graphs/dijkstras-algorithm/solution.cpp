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
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;  // make min heap, not max heap
        dist[S] = 0;
        pq.push({0, S});

        while (!pq.empty()) {
            int ele = pq.top().second;
            int d = pq.top().first;

            pq.pop();//don't forget to do it

            for (auto it : adj[ele]) {
                int v = it.first;
                int wt = it.second;
                if (d + wt < dist[v]) {
                    pq.push({d + wt, v});
                    dist[v] = d + wt;
                }
            }
        }
        return dist;
    }
};