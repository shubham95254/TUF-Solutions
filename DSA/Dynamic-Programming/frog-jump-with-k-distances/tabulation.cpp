class Solution {
public:
    int frogJump(vector<int>& heights, int k) {
        int n = heights.size();
        vector<int> energy(n, -1);
        energy[0] =0;
        for(int i=1; i<n; i++) {
            int mini = 1e9;
            for(int j=1; j<=k; j++) {
                if(i-j>=0) mini = min(mini, abs(heights[i]  - heights[i-j]) + energy[i-j]);
            }
            energy[i] = mini;
        }
        return energy[n-1];
    }
};
