class Solution {
   public:
    vector<int> topoSort(int V, vector<vector<int>> adj) {
        vector<int> ans;
        queue<int> q;
        vector<bool> vis(V, false);
        vector<int> indegree(
            V, 0);  // silly mistake - cannot initialise with -1, as we are
                    // doing ++ every time, initialise with 0

        // indegree array maker
        for (int i = 0; i < V; i++) {
            for (auto it : adj[i]) indegree[it]++;
        }

        // add nodes with 0 indegree to queue
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                q.push(i);
                ans.push_back(i);
            }
        }

        while (!q.empty()) {
            int ele = q.front();
            q.pop();
            vis[ele] = true;
            for (auto it : adj[ele]) {
                if (!vis[it]) {
                    indegree[it]--;
                    if (indegree[it] == 0) {
                        q.push(it);
                        ans.push_back(it);
                    }
                }
            }
        }

        // check if all visited or not
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                ans.clear();
                break;
            }
        }
        return ans;
    }

    vector<int> findOrder(int N, vector<vector<int>> arr) {
        vector<vector<int>> adj(N);
        for (auto it : arr) {
            adj[it[1]].push_back(it[0]);
        }
        // topo sort
        return topoSort(N, adj);
    }
};
