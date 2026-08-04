class Solution{
public:
    void traverse(int x, int y, vector<vector<char>> &grid,vector<vector<bool>> &vis, int n, int m, vector<int> &travxy) {
        vis[x][y] = true;

        for(auto i:travxy){
            for(auto j:travxy){

                if(i==0&&j==0) continue;

                if ((x+i)>=0 && (x+i)<n && (y+j)>=0 && (y+j)<m){
                    if(grid[x+i][y+j]=='1' && !vis[x+i][y+j]){
                        traverse(x+i, y+j, grid, vis, n, m ,travxy);
                    }
                }

            }
        }
    }
    int numIslands(vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int count = 0;
        vector<int> travxy = {-1, 0, 1};

        for(int i=0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                
                if (!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    traverse(i, j, grid, vis, n, m, travxy);
                }
            }
        }
        return count;
    }
};
