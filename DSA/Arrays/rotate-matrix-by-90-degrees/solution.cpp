class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n<2) return ;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++){
                if(i>j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }

        for(int j=0; j<n/2; j++) {
            for(int i =0; i<n; i++) {
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }
};