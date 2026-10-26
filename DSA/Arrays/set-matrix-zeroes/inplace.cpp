class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // unordered_set<int> rows, cols;
        bool firstRowZero = false, firstColZero = false;
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==1 && n==1) return ;
        

        for(int i=0; i<m; i++) {
            for (int j=0; j<n;j++){
                if(matrix[i][j]==0) {
                    if(i!=0){
                        matrix[i][0] = 0;
                    } else{
                        firstRowZero = true;
                    }
                    if(j!=0){
                        matrix[0][j] = 0;
                    } else{
                        firstColZero = true;
                    }
                }
            }
        }

        for(int i=1; i<m; i++) {
            for(int j =1; j<n; j++) {
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(firstColZero){
            for(int i=0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }
        if(firstRowZero){
            for(int j=0; j<n; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};