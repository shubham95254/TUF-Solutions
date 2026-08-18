class Solution {
   public:
    bool traverse(int node, vector<bool>&vis, vector<bool>&pathVis, vector<bool>&isSafe, vector<int>adj[]){
        vis[node]=true;
        pathVis[node]=true;

        for(auto it:adj[node]){
            if(!vis[it]){
                if(!traverse(it, vis, pathVis, isSafe, adj)) return false;
            }
            else if(vis[it] && pathVis[it]){
                return false;
            }
            else if(vis[it] && !pathVis[it]){
                if(!isSafe[it]) return false;
            }
        }
        isSafe[node]=true;
        pathVis[node] = false;
        return true;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<bool> vis(V, false), pathVis(V, false), isSafe(V, false);
        for(int i=0 ;i<V; i++) {
            if(!vis[i]){
                traverse(i, vis, pathVis, isSafe, adj);
            }
        }
        vector<int> ans;
        for(int i=0; i<V;i++) {
            if(isSafe[i]) ans.push_back(i);
        }
        return ans;
    }
};