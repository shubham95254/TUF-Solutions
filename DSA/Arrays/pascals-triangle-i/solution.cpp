class Solution {
public:
    int pascalTriangleI(int r, int c) {
        if(r==1) return 1;
        r--;
        c--;

        if(c>r/2) c = r-c;

        int ans = 1;
        for(int i = 1; i<=c; i++, r--) {
            ans*=r;
            ans/=i;
        }
        //this works, since for each r, rC1, rC2, ...., rCr all are integers
        return ans;

    }
};