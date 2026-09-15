class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n+1);
        //populate list
        for(auto it:times){
            adj[it[0]].push_back({it[1], it[2]});
        }

        //initialise for dijkstra
        vector<int> dist(n+1, 1e8);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dist[k] = 0;
        pq.push({0, k});

        //iterate
        while(!pq.empty()) {
            int ele = pq.top().second;
            int d = pq.top().first;

            pq.pop();

            for(auto it:adj[ele]){
                if(dist[it.first]>d+it.second){
                    //update
                    dist[it.first] = d+it.second;
                    pq.push({dist[it.first], it.first});
                }
            }
        }
        int maxi = 0;
        for(int i=0; i<n; i++){
            maxi = max(maxi, dist[i+1]);
        }
        // return maxi;
        //edge case - if none found, return -1;
        return ((maxi>=1e8)?-1:maxi);

    }
};