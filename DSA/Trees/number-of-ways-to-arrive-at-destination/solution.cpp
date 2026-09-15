class Solution{
public:
    int MOD = 1e9+7;
    int countPaths(int n, vector<vector<int>> &roads) {
        vector<vector<pair<int, int>>> adj(n);
        for(auto it:roads){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        vector<long long> dist(n, LLONG_MAX), ways(n, 0); //use long long as dist may exceed

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        dist[0] = 0; ways[0] = 1;
        pq.push({0,0}); //dist, node, count

        while(!pq.empty()) {
            int ele = pq.top()[1];
            int time = pq.top()[0];
            // int count = pq.top()[2];
            pq.pop();

            for(auto it:adj[ele]) {
                if(dist[it.first]>time+it.second){
                    //update
                    dist[it.first] = time+it.second;
                    ways[it.first] = ways[ele]%MOD;
                    pq.push({dist[it.first], it.first});
                } else if(dist[it.first]== time+it.second){
                    ways[it.first] = (ways[it.first]+ways[ele]%MOD)%MOD;
                }
            }

        }
        return ways[n-1];
    }
};