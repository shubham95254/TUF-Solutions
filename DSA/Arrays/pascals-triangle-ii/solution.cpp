class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int> ans;
        r--;
        int num = 1;
        ans.push_back(num);
        int numerator = r;
        for(int den=1; den<=r/2; den++) {
            num*=numerator;
            num/=den;
            numerator--;
            ans.push_back(num);
        }
        int n = ans.size();
        if(r%2==1) ans.push_back(ans.back());
        for(int i=n-2; i>=0; i--){
            ans.push_back(ans[i]);
        }
        return ans;
    }
};