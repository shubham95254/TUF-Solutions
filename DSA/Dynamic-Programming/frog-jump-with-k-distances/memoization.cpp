class Solution {
   public:
    int minEnergy(int idx, vector<int>& heights, int k, vector<int>& energy) {
        if (idx == 0) return 0;
        if(energy[idx]!=-1) return energy[idx];
        int mini = 1e9;
        for (int i = 1; i <= k; i++) {
            if (idx - i >= 0)
                mini = min(mini, abs(heights[idx] - heights[idx - i]) +
                                     minEnergy(idx - i, heights, k, energy));
        }
        return energy[idx] = mini;
    }
    int frogJump(vector<int>& heights, int k) {
        int n = heights.size();
        vector<int> energy(n, -1);
        energy[0] = 0;

        return minEnergy(n - 1, heights, k, energy);
    }
};
