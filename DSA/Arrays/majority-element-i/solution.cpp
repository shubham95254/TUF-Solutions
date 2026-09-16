class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute - for each element in arr, check its count
        //better - use hashmap for frequency count
        //optimal - use Moore's Voting Algorithm

        int num , count = 0, n = nums.size();
        //Moore's Voting Algorithm
        for(int i=0;i<n; i++){
            if(count==0) {
                count++;
                num = nums[i];
            } else {
                if(nums[i]==num) count++;
                else count--;
            }
        }
        if(count==0) return -1; //no element can be in majority

        //check if given number is majorityElement or not
        count=0;
        for(auto it:nums){
            if(it==num) count++;
        }
        if(count>(n/2)) return num;
        return -1;
    }
};
//TC - O(N)
//SC - O(1)