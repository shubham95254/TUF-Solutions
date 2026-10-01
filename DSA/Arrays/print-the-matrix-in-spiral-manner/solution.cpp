class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        // ans.push_back(matrix[0][0]);
        int toPrint=0;
        int m = matrix.size(), n = matrix[0].size();
        int rowi = 0, coli = 0, colj = n-1, rowj = m-1;

        while(coli<=colj && rowi<=rowj){
            if(toPrint==0){
                for(int j = coli; j<=colj; j++) {
                    ans.push_back(matrix[rowi][j]);
                }
                rowi++;
            } else if(toPrint==1){
                for(int i=rowi; i<=rowj; i++) {
                    ans.push_back(matrix[i][colj]);
                }
                colj--;
            } else if(toPrint==2){
                for(int j = colj; j>=coli; j--) {
                    ans.push_back(matrix[rowj][j]);
                }
                rowj--;
            } else if(toPrint==3){
                for(int i=rowj; i>=rowi; i--) {
                    ans.push_back(matrix[i][coli]);
                }
                coli++;
            }
            toPrint++;
            toPrint%=4;
        }
        return ans;

    }
};