class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        if(n<2) return 0;
        int profit = 0, buy = 0;
        for(int i=1; i<n; i++){
            if(arr[buy]>arr[i]) {
                buy = i;
                continue;
            }
            profit = max(profit, arr[i]-arr[buy]);
        }
        return profit;
    }
};

