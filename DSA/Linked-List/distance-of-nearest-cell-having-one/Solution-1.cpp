class Solution{
public:
    vector<vector<int>> nearest(vector<vector<int>> grid){
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> minDist(n,vector<int>(m, 0));
        
        queue<vector<int>> q;
       for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            if(grid[i][j]==1){
                q.push({i, j, 0});
            } 
        }
       }

        int nrow[] = {0, 0, -1, 1};
        int ncol[] = {1, -1, 0, 0};
        while(!q.empty()) {
            vector<int> ele = q.front();
            q.pop();
            int i = ele[0], j = ele[1], dist = ele[2];
            for(int k=0; k<4; k++) {
                if((i+nrow[k])>=0 && (i+nrow[k])<n && (j+ncol[k])>=0 & (j+ncol[k])<m){
                    if(grid[i+nrow[k]][j+ncol[k]]==0 && minDist[i+nrow[k]][j+ncol[k]] == 0){
                        q.push({i+nrow[k], j+ncol[k], dist+1});
                        minDist[i+nrow[k]][j+ncol[k]]=dist+1;
                    }
                } 
                
            }
        }

        return minDist;


    }
};