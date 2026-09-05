#define piii pair<int, pair<int, int>>

class Solution{
public:
    int CheapestFlight(int n, vector<vector<int>> &flights,
                       int src, int dst, int K) {
        //make adj list
        vector<vector<pair<int, int>>> adj(n);
        for(auto it:flights){
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dist(n, 1e9);
        dist[src] = 0;
        priority_queue<piii, vector<piii>, greater<piii>> pq;
        pq.push({0, {0, src}});

        while(!pq.empty()){
            piii p = pq.top();
            pq.pop();
            int stops = p.first;
            int cost= p.second.first;
            int node = p.second.second;
            if(stops>K) break;

            for(auto it:adj[node]){
                if(cost+it.second<dist[it.first]){
                    dist[it.first] = cost+it.second;
                    pq.push({stops+1, {dist[it.first],it.first}});
                }
            }
        }
        return ((dist[dst]<1e9)?dist[dst]:-1);
        
    }
};
