class Solution{
public:
    bool traverse(int node, vector<bool>& vis, vector<bool>& pathvis, vector<int> adj[]){
        vis[node] =true;
        pathvis[node] =true;
        for(auto it:adj[node]) {
            if(!vis[it]){
                if(traverse(it, vis, pathvis, adj)) return true;
            }
            if(vis[it] && pathvis[it]){
                return true;
            }
        }
        pathvis[node]= false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> vis(V, false), pathvis(V, false);
        for(int i=0; i<V; i++) {
            if(!vis[i]){
                if(traverse(i, vis, pathvis, adj)) return true;
            }
        }
        return false;
    }
};
