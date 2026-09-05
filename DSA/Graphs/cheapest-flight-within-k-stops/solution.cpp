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
        pq.push({-1, {0, src}});

        while(!pq.empty()){
            piii p = pq.top();
            pq.pop();
            int s = p.first;
            int c= p.second.first;
            int n = p.second.second;
            if(s==K) break;

            for(auto it:adj[n]){
                if(c+it.second<dist[it.first]){
                    dist[it.first] = c+it.second;
                    pq.push({s+1, {dist[it.first],it.first}});
                }
            }
        }
        return ((dist[dst]<1e9)?dist[dst]:-1);
        
    }
};
