class Solution {
public:
    int pascalTriangleI(int r, int c) {
        if(r==1) return 1;
        r--;
        c--;

        if(c>r/2) c = r-c;

        long long ans = 1;
        for(int i = 0; i<c; i++) {
            ans*=r--;
        }

        while(c--) {
            // ans*=r;
            ans /=(c+1);
            // r--;
        }
        return (int)ans;

    }
};