class Solution{
public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        queue<pair<int, int>> q;

        // First row
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1) {
                q.push({0, j});
                vis[0][j] = true;
            }
        }

        // Last row
        if (n > 1) {
            for (int j = 0; j < m; j++) {
                if (grid[n - 1][j] == 1 && !vis[n - 1][j]) {
                    q.push({n - 1, j});
                    vis[n - 1][j] = true;
                }
            }
        }

        // First and last column
        for (int i = 1; i < n - 1; i++) {
            if (grid[i][0] == 1 && !vis[i][0]) {
                q.push({i, 0});
                vis[i][0] = true;
            }

            if (m > 1 && grid[i][m - 1] == 1 && !vis[i][m - 1]) {
                q.push({i, m - 1});
                vis[i][m - 1] = true;
            }
        }

        int nrow[] = {0, 0, -1, 1};
        int ncol[] = {1, -1, 0, 0};

        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int ni = i + nrow[k];
                int nj = j + ncol[k];

                if (ni >= 0 && ni < n &&
                    nj >= 0 && nj < m &&
                    grid[ni][nj] == 1 &&
                    !vis[ni][nj]) {

                    q.push({ni, nj});
                    vis[ni][nj] = true;
                }
            }
        }
        int countLand = 0;
        // Unvisited O's are surrounded
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j]==1) {
                    countLand++;
                }
            }
        }

        return countLand;
    }
};
