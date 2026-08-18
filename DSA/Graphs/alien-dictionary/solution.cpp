class Solution {
   public:
    string findOrder(string dict[], int N, int K) {
        queue<int> q;
        vector<bool> vis(K, false);
        string order = "";
        vector<unordered_set<int>> adj(
            K);  // make a set inside vector, so that no duplicates come

        // make graph
        for (int i = 0; i < N - 1; i++) {
            int ind = 0;
            while (dict[i][ind] == dict[i + 1][ind]) ind++;
            if (ind < min(dict[i].size(), dict[i + 1].size())) {
                adj[dict[i][ind]-'a'].insert(
                    dict[i + 1][ind]-'a');  // use insert since Uset, inset number , not char
            }
        }

        // do toposort of this graph
        // get indegree
        vector<int> indegree(K, 0);  // initialise with 0 not -1
        for (int i = 0; i < K; i++) {
            for (auto it : adj[i]) {
                indegree[it]++;
            }
        }

        for (int i = 0; i < K; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int ele = q.front();
            q.pop();

            vis[ele] = true;
            order+='a'+ ele;
            for (auto it : adj[ele]) {
                if(--indegree[it]==0) q.push(it);
            }
        }
        //check if toposort possible or not, and also, push the not visited ones in ans
        for(int i=0; i<K; i++) {
            if(!vis[i]){
                if(indegree[i]==0)
                    order+='a'+ i;
                else {
                    order = "";
                    return order;
                }
            }
        }
        return order;


    }
};
