class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n  = nums.size();
        if(n<=1) return n;
        int count = 1;
        int i = 0, j = 1;
        while(j<n){
            if(nums[i]!=nums[j]){
                i++;count++;
                nums[i] = nums[j];
            }
            j++;
        }
        return count;

    }
};