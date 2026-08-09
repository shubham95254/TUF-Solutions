class Solution {
  public:
     void traverse(int node, vector<int>& ans, vector<vector<int>>& adjList, int V, vector<bool>& vis) {
        // mark node as visited
        vis[node] = true;
        ans.push_back(node);
        
        // go to neighbors and traverse those not visited
        for(auto it : adjList[node]) {
            if(!vis[it]) {
                traverse(it, ans, adjList, V, vis);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<vector<int>> edges) { // Renamed parameter mentally to 'edges'
        // 1. Build the Adjacency List from the Edge List
        vector<vector<int>> adjList(V);
        for(auto edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]); // Assuming it is an undirected graph
        }
        
        vector<int> ans;
        // 2. ALWAYS use V for the size of your visited array!
        vector<bool> vis(V, false);
        
        traverse(0, ans, adjList, V, vis);
        return ans;
    }
    
    vector<int> bfsOfGraph(int V, vector<vector<int>> edges) {
        // 1. Build the Adjacency List from the Edge List
        vector<vector<int>> adjList(V);
        for(auto edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]); // Assuming undirected
        }
        
        vector<int> ans;
        // 2. ALWAYS use V for the size!
        vector<bool> vis(V, false);
        queue<int> q;
        
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            ans.push_back(element);
            
            for(auto it : adjList[element]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = true;
                }
            }
        }
        return ans;
    }
};