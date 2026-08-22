class Solution {
   public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        int N = grid.size();
        int M = grid[0].size();
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        vector<vector<int>> dist(N, vector<int>(M, 1e9));
        dist[source.first][source.second] = 0;

        pq.push({0, {source.first, source.second}});
        while (!pq.empty()) {
            int d = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;

            pq.pop();

            // check neighbour if valid
            vector<int> delrow = {-1, 0, 1, 0};
            vector<int> delcol = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++) {
                int newx = x + delrow[i];
                int newy = y + delcol[i];
                if(newx<0 || newy<0 || newx>=N || newy>=M) continue;
                if (grid[newx][newy]) {
                    if(d+1< dist[newx][newy]) {
                        pq.push({d+1, {newx, newy}});
                        dist[newx][newy] = d+1;
                    }
                }
            }
        }

        if(dist[destination.first][destination.second]>=1e9) return -1;
        return dist[destination.first][destination.second];
    }
};