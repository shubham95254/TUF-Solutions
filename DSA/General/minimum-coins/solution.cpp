class Solution{
	public:
    int f(int ind, int totalrem, vector<int>&coins, vector<vector<int>>&dp){
        // if(ind<0) return 100000;
        // if(totalrem==0) return 0;

        dp[0][0] = 0;
        for(int j=1; j<=totalrem; j++){
            dp[0][j] = (j%coins[0]==0)? j/coins[0] : 1e9;
        }
        
        // if(dp[ind][totalrem]!=-1) return dp[ind][totalrem];
        for(int i=1; i<=ind; i++) {
            dp[i][0] = 0;
            for(int j=1; j<=totalrem; j++) {
                int take = 100000;
                if(coins[i]<=j) take = 1+dp[i][j-coins[i]];
                int nottake = dp[i-1][j];

                // cout << "f(" <<ind<<","<<totalrem<< ") " << take << " " << nottake<<endl;
                dp[i][j]= min(take, nottake);
            }
        }
        return dp[ind][totalrem];


    }
	int MinimumCoins(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1, -1));
        int ans = f(coins.size()-1, amount, coins, dp);
        
        if(ans>1000) return -1;
        else return ans;
    }
};