class Solution {
public:
	int findCity(int n, int m, vector<vector<int>>& edges,
	             int distanceThreshold) {
		vector<vector<int>> dist(n, vector<int>(n, 1e9));
        //fill with 0 and edges
        for(int i=0; i<n; i++) dist[i][i] = 0;
        for(auto it:edges){
            dist[it[0]][it[1]] = it[2];
            dist[it[1]][it[0]] = it[2];
        }

        //flloyd warshal algo
        for(int k = 0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j = i+1; j<n; j++) {
                    if(dist[i][j]> (dist[i][k]+dist[k][j])){
                        //update
                        dist[i][j] = dist[i][k]+dist[k][j];
                        dist[j][i] = dist[i][j];
                    }
                }
            }
        }

        int reqCity = -1;
        int maxCount = INT_MAX;

        for(int i=0; i<n; i++) {
            int count = 0;
            for(int j=0; j<n; j++) {
                if(dist[i][j]<=distanceThreshold) count++;
            }
            if(count<=maxCount){
                reqCity = i;
                maxCount = count;
            }
        }
        return reqCity;

	}
};
