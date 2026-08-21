class Solution {
   public:
    void shortestDistance(vector<vector<int>>& matrix) {
        int V = matrix.size();
        vector<vector<int>> dist(V,vector<int>(V, 1e8));
        // convert all -1 to 1e8
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (matrix[i][j] != -1) dist[i][j] = matrix[i][j];
            }
        }

        // now do floyd warshall
        for (int k = 0; k < V; k++) {
            for (int i = 0; i < V; i++) {
                for (int j = 0; j < V; j++) {
                    dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }

        //check if -ve cycle
        for(int i=0; i<V; i++) {
            if(dist[i][i]<0){
                //negative edge cycle present
            }
        }

        //just for return type, doing this
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][j] <1e8) matrix[i][j] = dist[i][j];
            }
        }
        
    }
};