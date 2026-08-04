class Solution{
public:
    void traverse(int node, vector<vector<int>>&adj, vector<bool>&vis, int n) {
        vis[node] = true;
        for(int i=0; i<n; i++){
            if(adj[node][i] && !vis[i])
                traverse(i, adj, vis, n);
        }
    }
    int numProvinces(vector<vector<int>> adj) {
        int n = adj.size();
        vector<bool>vis(n, false);
        int count = 0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                count++;
                traverse(i, adj, vis, n);
            }
        }
        return count;
    }
};
