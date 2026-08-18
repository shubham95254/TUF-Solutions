class Solution {
   public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N, int M) {
        vector<vector<int>> adj(N);
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        queue<pair<int, int>> q;
        // vector<int> dist(N, INT_MAX);
        vector<int> dist(N, -1);

        // start traversing
        q.push({0, 0});
        dist[0] = 0; //must update distance, while pushing in queue

        while (!q.empty()) {
            int ele = q.front().first;
            int eleDist = q.front().second;
            q.pop();

            // dist[ele] = eleDist;
            for (auto it : adj[ele]) {
                if (dist[it] == -1 || dist[it] > eleDist + 1) {
                    q.push({it, eleDist + 1});
                    dist[it] = eleDist+1; //must update distance, while pushing in queue
                }
            }
        }

        return dist;
    }
};
