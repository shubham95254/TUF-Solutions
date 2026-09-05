#define vi vector<int> 
class Solution
{
public:
    int MinimumEffort(vector<vector<int>> &heights)
    {
        int N = heights.size();
        int M = heights[0].size();

        priority_queue<vi, vector<vi>, greater<vi>> pq; //min heap
        vector<vector<int>> costs(N, vector<int>(M, 1e8));

        costs[0][0] = 0;
        pq.push({0,0,0});

        vector<int> nrow = {1, 0, -1, 0};
        vector<int> ncol = {0, 1, 0, -1};


        while(!pq.empty()) {
            int c = pq.top()[0];
            int i = pq.top()[1];
            int j = pq.top()[2];
            pq.pop();

            for(int k=0; k<4; k++){
                int newi = i+nrow[k];
                int newj = j+ncol[k];

                if(newi<0 || newi>=N || newj<0 || newj>=M) continue;

                //calculate cost for new
                int newcost = max(c, abs(heights[newi][newj]-heights[i][j]));
                if(newcost<costs[newi][newj]){
                    costs[newi][newj] = newcost;
                    pq.push({newcost, newi, newj});
                }
            }
        }

        return costs[N-1][M-1];
    }
};

