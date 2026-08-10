class Solution{
public:
    int orangesRotting(vector<vector<int>> &grid) {
       int n = grid.size();
       int m = grid[0].size();
       vector<vector<int>> vis(n,vector<int>(m, 0));
       queue<vector<int>> q;
       int maxtime = 0;
       int totalcount = 0, count = 0;
       for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            if(grid[i][j]==2){
                vis[i][j] = 2;
                q.push({i, j, 0});
            } 
            else if(grid[i][j]==1){
                totalcount++;
            }
        }
       }

        int nrow[] = {0, 0, -1, 1};
        int ncol[] = {1, -1, 0, 0};
        while(!q.empty()) {
            vector<int> ele = q.front();
            q.pop();
            int i =ele[0], j = ele[1], mins = ele[2];
            for(int k=0; k<4; k++) {
                if((i+nrow[k])>=0 && (i+nrow[k])<n && (j+ncol[k])>=0 & (j+ncol[k])<m){
                    if(vis[i+nrow[k]][j+ncol[k]]==0 && grid[i+nrow[k]][j+ncol[k]] == 1){
                        q.push({i+nrow[k], j+ncol[k], mins+1});
                        vis[i+nrow[k]][j+ncol[k]]=2;
                        count++;
                        maxtime = max(maxtime, mins+1);
                    }
                } 
                
            }
        }

        if(count!=totalcount) {
            cout << count << " " << totalcount<<endl;
            return -1;
        }
        return maxtime;


       
    }
};