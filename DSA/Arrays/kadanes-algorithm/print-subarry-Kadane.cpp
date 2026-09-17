class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algo
        int n = nums.size();
        int maxi = INT_MIN, sum = 0;
        int start = 0, end = 0, ind = 0;

        for(int i=0; i<n; i++) {
            if(sum<0) {
                sum = 0;
                ind = i;
            }
            sum+=nums[i];
            if(maxi<sum){
                maxi = sum;
                start = ind;
                end = i;
            }
        }
        //print maxSubArray
        for(int i=start; i<=end; i++) {
            cout << nums[i] << " " ;
        }
        cout << endl;
        return maxi;
    }
};