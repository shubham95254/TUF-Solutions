#define piii pair<int, pair<int, int>>

class Solution {
   public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> cost(n, vector<int>(n, 1e9));
        cost[0][0] = grid[0][0];
        priority_queue <piii, vector<piii>, greater<piii>> pq;
        pq.push({grid[0][0], {0,0}});
        vector<int> dirx = {0, 0, 1, -1};
        vector<int> diry = {1, -1, 0, 0};

        while(!pq.empty()) {
            int c = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;

            pq.pop();

            for(int k=0; k<4; k++) {
                int newi = i+dirx[k];
                int newj = j+diry[k];
                //check if valid and need to push in pq or not
                if(newi>=0 && newi<n && newj>=0 && newj<n){
                    if(cost[newi][newj]>max(c, grid[newi][newj])){
                        //update and push
                        cost[newi][newj] = max(c, grid[newi][newj]);
                        pq.push( { cost[newi][newj], {newi, newj} } );
                    }
                }
            }
        }
        return cost[n-1][n-1];
    }
};
