class Solution{
	public:
    int f(int ind, int totalrem, vector<int>&coins, vector<vector<int>>&dp){
        if(ind<0) return 100000;
        if(totalrem==0) return 0;
        
        if(dp[ind][totalrem]!=-1) return dp[ind][totalrem];

        int take = 100000;
        if(coins[ind]<=totalrem) take = f(ind, totalrem-coins[ind], coins, dp)+1;
        int nottake = f(ind-1, totalrem, coins, dp);

        cout << "f(" <<ind<<","<<totalrem<< ") " << take << " " << nottake<<endl;
        return dp[ind][totalrem]= min(take, nottake);

    }
	int MinimumCoins(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1, -1));
        int ans = f(coins.size()-1, amount, coins, dp);
        
        if(ans>1000) return -1;
        else return ans;
    }
};