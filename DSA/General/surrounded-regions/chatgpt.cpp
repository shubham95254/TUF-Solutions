class Solution {
public:
    vector<vector<char>> fill(vector<vector<char>> mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        queue<pair<int, int>> q;

        // First row
        for (int j = 0; j < m; j++) {
            if (mat[0][j] == 'O') {
                q.push({0, j});
                vis[0][j] = true;
            }
        }

        // Last row
        if (n > 1) {
            for (int j = 0; j < m; j++) {
                if (mat[n - 1][j] == 'O' && !vis[n - 1][j]) {
                    q.push({n - 1, j});
                    vis[n - 1][j] = true;
                }
            }
        }

        // First and last column
        for (int i = 1; i < n - 1; i++) {
            if (mat[i][0] == 'O' && !vis[i][0]) {
                q.push({i, 0});
                vis[i][0] = true;
            }

            if (m > 1 && mat[i][m - 1] == 'O' && !vis[i][m - 1]) {
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
                    mat[ni][nj] == 'O' &&
                    !vis[ni][nj]) {

                    q.push({ni, nj});
                    vis[ni][nj] = true;
                }
            }
        }

        // Unvisited O's are surrounded
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]) {
                    mat[i][j] = 'X';
                }
            }
        }

        return mat;
    }
};