class Solution{
public:
    int minimumMultiplications(vector<int> &arr,
                               int start, int end) {
        int n = arr.size();
        int MOD = 1e5;
        vector<int> dist(1e5+1, INT_MAX);
        dist[start] = 0;
        queue<pair<int, int>> q;
        q.push({0, start});

        //base case forgot to add
        if(start==end) return 0;

        while(!q.empty()) {
            auto [step, ele] = q.front();
            q.pop();

            //check neighbours
            for(auto it:arr){
                int neighbour = (ele*it)%MOD;
                if(dist[neighbour]>step+1){
                    dist[neighbour] = step+1;
                    q.push({dist[neighbour], neighbour});
                }
                if(neighbour==end) return dist[neighbour];
            }
        }
        return -1;
    }
};
