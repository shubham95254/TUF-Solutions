class Solution{
public:
    bool traverse(vector<int> adj[], vector<bool> &vis, queue<pair<int, int>> &q){
        while(!q.empty()){
            int element = q.front().first;
            int parent = q.front().second;
            q.pop();
            // ans.push_back(element);
            
            for(auto it : adj[element]){
                if(vis[it] && it!=parent) {
                    // cout << it << " " << element << "  "<< parent <<endl; 
                    return true;
                }
                if(!vis[it]){

                    q.push({it, element});
                    vis[it] = true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        

        vector<bool> vis(V, false);
        queue<pair<int, int>> q; // {node, parent}
        
        for(int i=0; i<V; i++) {
            if(!vis[i]){
                q.push({i, -1});
                vis[i] = true;
                if(traverse(adj, vis, q)) return true;
            }
        }
        return false;
        
    }
};