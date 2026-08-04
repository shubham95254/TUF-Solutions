class Solution{
    public:
    void traverse(int x, int y, vector<vector<int>> &image,vector<vector<bool>> &vis, int n, int m, vector<int> &travxy, int newColor ,int startColor) {
        vis[x][y] = true;
        image[x][y] = newColor;

        for(auto i:travxy){

                if ((x+i)>=0 && (x+i)<n ){
                    if(image[x+i][y]==startColor && !vis[x+i][y]){
                        traverse(x+i, y, image, vis, n, m ,travxy, newColor, startColor);
                    }
                }
                if ((y+i)>=0 && (y+i)<m){
                    if(image[x][y+i]==startColor && !vis[x][y+i]){
                        traverse(x, y+i, image, vis, n, m ,travxy, newColor, startColor);
                    }
                }
        }
    }



    vector<vector<int>> floodFill(vector<vector<int>> &image,
                                  int sr, int sc, int newColor) {
        
        int n = image.size();
        int m = image[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vector<int> travxy = {-1, 1};
        traverse(sr, sc, image, vis, n, m, travxy, newColor, image[sr][sc]);

        return image;
    }
};
