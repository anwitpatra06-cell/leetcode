class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>t=grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=(j+rowShift[i]+n)%n;
                t[i][j]=grid[i][x];
            }
        }
        vector<vector<int>>ans=t;
            for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=(i+colShift[j]+n)%n;
                ans[i][j]=t[x][j];
            }
        }
        return ans;
    }
};