class Solution{
public:
    bool traverse(int node, int parent, vector<int> adj[], vector<bool> &vis){
        vis[node] = true;
        
        for(auto it : adj[node]){
                if(vis[it] && it!=parent) {
                    return true;
                }
                if(!vis[it]){
                    if(traverse(it, node, adj, vis)) return true;