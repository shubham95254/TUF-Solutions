class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans;
      int n = nums.size();
      ans.push_back(nums[n-1]);
      int maxi = nums[n-1];
      for(int i=n-2; i>=0; i--) {
        if(maxi<nums[i]){
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};