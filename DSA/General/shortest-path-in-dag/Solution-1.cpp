class Solution {
    public:
    vector < int > shortestPath(int N, int M, vector < vector < int >> & edges) {
        vector<vector<pair<int, int>>> adj(N);
        for (auto it : edges) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<pair<int, int>> q;
        vector<int> dist(N, -1);

        q.push({0, 0});
        dist[0] = 0; //must update distance, while pushing in queue

        while (!q.empty()) {
            int ele = q.front().first;
            int eleDist = q.front().second;
            q.pop();

            for (auto it : adj[ele]) {
                if (dist[it.first] == -1 || dist[it.first] > eleDist + it.second) {
                    q.push({it.first, eleDist + it.second});
                    dist[it.first] = eleDist+it.second; //must update distance, while pushing in queue
                }
            }
        }

        return dist;
    }
};

