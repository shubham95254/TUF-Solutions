class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0 ;i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        for(int i=0 ;i<nums.size(); i++) {
            int toFind = target-nums[i];
            if(mp.find(toFind)!=mp.end() && mp[toFind]!=i){
                return {mp[toFind], i};
            }
        }
        return {-1,-1};
    }
};