class Solution{
    public:
    int spanningTree(int V, vector<vector<int>> adj[]) {
       //prims
       //iniitalisation
       priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
       vector<bool> vis(V, false);
       int sum = 0;

        pq.push({0,0,-1});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int wt = it[0];
            int node = it[1];
            int parent = it[2];

            if(vis[node]) continue;
            //add edge if not present, in mst
            //add sum
            sum+=wt;
            vis[node] = true;
            for(auto it:adj[node]){
                int nNode = it[0];
                int nWt = it[1];

                if(!vis[nNode]) pq.push({nWt, nNode, node});
            }

        }

       return sum;
    }
};
