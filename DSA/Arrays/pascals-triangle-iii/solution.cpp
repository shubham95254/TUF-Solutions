class Solution {
public:
    vector<int> printRow(int r) {
        vector<int> ans(r);
        ans[0] = 1;
        for(int i=1; i<r; i++){
            ans[i] = ans[i-1]*(r-i)/i;
        }
        return ans;
    }

    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            vector<int> temp = printRow(i+1);
            ans.push_back(temp);
        }
        return ans;
    }
};