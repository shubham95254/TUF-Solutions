class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        //we will use prefixsum+hashmap(unordered_map) to store previous elements in prefix sum, with their indexes
        int n = nums.size();

        unordered_map<int, int> preSumMap;
        int maxLen = 0, sum = 0;

        for(int i=0; i<n; i++) {
            sum+=nums[i];

            int diff = sum-k;

            if(diff==0){
                maxLen = max(maxLen, i+1);
            }
            else{
                if(preSumMap.find(diff)!=preSumMap.end()){
                    maxLen = max(maxLen, i-preSumMap[diff]);
                }
            }
            //if this sum not present, insert in hashmap
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};
