class Solution {
   public:
    vector<int> eventualSafeNodes(int V, vector<int> adj1[]) {
        vector<int> ans;

        //IMP - here, we need to reverse all edges, since that will be required to check from where all edges coming to that node which has indegree 0(after flipping).
        vector<vector<int>> adj(V);
        for(int i=0; i<V; i++) {
            for(auto it:adj1[i]){
                adj[it].push_back(i);
            }
        }

        //now, continue toposort technique
        queue<int> q;
        vector<bool> vis(V, false);
        //initialise indegree with 0s
        vector<int> indegree(V, 0);

        for(int i=0; i<V; i++) {
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        for(int i=0; i<V; i++) {
            if(indegree[i]==0) q.push(i);
        }

        while(!q.empty()){
            int ele = q.front();
            q.pop();
            ans.push_back(ele);
            for(auto it:adj[ele]){
                if(--indegree[it]==0) q.push(it);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;



    }
};