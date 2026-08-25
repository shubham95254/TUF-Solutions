class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPdt = INT_MIN;
        int prefix = 1, suffix = 1;
        for(int i=0 ;i<nums.size(); i++) {
            if(prefix==0) prefix=1;
            prefix*=nums[i];
            maxPdt = max(maxPdt, prefix);
        }
        for(int i=nums.size()-1 ;i>=0; i--) {
            if(suffix==0) suffix=1;
            suffix*=nums[i];
            maxPdt = max(maxPdt, suffix);
        }
        return maxPdt;
    }
};