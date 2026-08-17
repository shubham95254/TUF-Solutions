class Solution {
   public:
    bool isCyclic(int V, vector<int> adj[]) {
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
            if (indegree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int ele = q.front();
            q.pop();
            vis[ele] = true;
            for (auto it : adj[ele]) {
                if (!vis[it]) {
                    indegree[it]--;
                    if (indegree[it] == 0) q.push(it);
                }
            }
        }

        // check if all visited or not
        for (int i = 0; i < V; i++) {
            if (!vis[i]) return true;
        }
        return false;
    }
};
