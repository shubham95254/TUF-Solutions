class Solution{
public:
    bool traverse(int node, int parent, vector<int> adj[], vector<bool> &vis){
        vis[node] = true;
        
        for(auto it : adj[node]){
                if(vis[it] && it!=parent) {
                    return true;
                }
                if(!vis[it]){
                    if(traverse(it, node, adj, vis)) return true;
                    
                }
        }
        return false;

    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        
        for(int i=0; i<V; i++) {
            if(!vis[i]){
                if(traverse(i, -1, adj, vis)) return true;
            }
        }
        return false;
    }
};