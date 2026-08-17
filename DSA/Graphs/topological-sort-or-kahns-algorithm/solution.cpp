class Solution{
public:
    void traverse(int node, stack<int>& st, vector<bool>& vis, vector<int> adj[]){
        vis[node] = true;
        for(auto it:adj[node]) {
            if(!vis[it]) traverse(it, st, vis, adj);
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<int> adj[]){
        stack<int> st;
        vector<bool> vis(V, false);
        vector<int> ans;
        for(int i=0; i<V; i++) {
            if(!vis[i]) traverse(i, st, vis, adj);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
