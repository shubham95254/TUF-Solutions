class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num , count = 0, n = nums.size();
        for(int i=0;i<n; i++){
            if(count==0) {
                count++;
                num = nums[i];
            } else {
                if(nums[i]==num) count++;
                else count--;
            }
        }
        if(count==0) return -1;

        //check if given number is majorityElement or not
        count=0;
        for(auto it:nums){
            if(it==num) count++;
        }
        if(count>(n/2)) return num;
    }
};