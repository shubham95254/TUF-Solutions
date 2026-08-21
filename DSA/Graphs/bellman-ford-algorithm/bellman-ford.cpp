class Solution {
   public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // initialise
        vector<int> dist(V, 1e9); //since INT_MAX + someting-> out of bound
        dist[S] = 0;

        for (int i = 0; i < V;
             i++) {  // took i=V-1, just to check if -ve cycle is present or not

            //per iteration
            for(auto it:edges){
                int u = it[0];
                int v = it[1];
                int wt = it[2];

                //relaxation of edges
                if(dist[u]<1e9 && dist[u]+wt<dist[v]){ // dist[u]<1e9 for if reachable or
                    dist[v] = dist[u]+wt;
                    if(i==V-1) {
                        vector<int> negative(1, -1);
                        return negative;//checked if negative cycle present
                    }
                }
            }
        }
        return dist;
    }
};
