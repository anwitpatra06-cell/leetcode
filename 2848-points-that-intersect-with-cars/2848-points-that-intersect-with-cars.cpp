class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int x=nums[i][0];x<=nums[i][1];x++){
                    s.insert(x);
                }
            }
        }
        return s.size();
    }
};