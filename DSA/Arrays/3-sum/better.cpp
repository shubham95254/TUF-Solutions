class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // x+y=-z
        vector<vector<int>> ans;
        int n = nums.size();
        set<vector<int>> s;
        for (int i = 0; i < n - 2; i++) {
            unordered_set<int> st;
            for (int j = i + 1; j < n; j++) {
                // hashset having data between i and j
                if (st.find(-(nums[i] + nums[j])) != st.end()) {
                    vector<int> triplet = {nums[i], nums[j],
                                           -(nums[i] + nums[j])};
                    sort(triplet.begin(), triplet.end());
                    s.insert(triplet);
                }
                st.insert(nums[j]);
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};