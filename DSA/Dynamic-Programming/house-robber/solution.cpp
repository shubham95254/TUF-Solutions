class Solution {
public:
    int findMax(int idx, int start, vector<int>&money, vector<int>&dp){
        if(idx<start) return 0;

        if(dp[idx]!=-1) return dp[idx];

        int take = money[idx]+findMax(idx-2, start, money, dp);
        int notTake = findMax(idx-1, start, money, dp);

        return dp[idx] = max(take, notTake);
    }
    int houseRobber(vector<int>& money) {
        int n = money.size();
        if(n==1) return money[0];
        vector<int> dp(n+1, -1), dp2(n+1, -1);
        return max(findMax(n-1, 1, money, dp), findMax(n-2, 0, money, dp2));
    }
};