class Solution {
   public:
    void sortZeroOneTwo(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (auto it : nums) {
            mpp[it]++;
        }
        int i = 0;
        for (int val = 0; val < 3; val++) {
            if (mpp.find(val) != mpp.end()) {
                int countVal = mpp[val];
                while (countVal--) {
                    nums[i++] = val;
                }
            }
        }
    }
};