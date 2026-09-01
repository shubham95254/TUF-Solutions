class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return;
        int i = 0, j;
        while(i<n && nums[i]!=0) i++;
        if(i>=n-1) return;
        j = i+1;
        while(j<n){
            if(nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
        
    }
};