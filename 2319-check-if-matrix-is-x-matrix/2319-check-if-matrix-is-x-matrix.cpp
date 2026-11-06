class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        bool b=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i || j==n-i-1){
                    if(grid[i][j]==0){
                        b=false;
                        break;
                    }
                }
                else{
                    if(grid[i][j]!=0){
                        b=false;
                        break;
                    }
                }
            }
        }
        return b;
    }
};