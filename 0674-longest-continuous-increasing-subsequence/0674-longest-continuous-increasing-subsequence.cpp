class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int diff=1;
        int mn=1;
        for(int j=0;j<n-1;j++){
            if(nums[j+1]>nums[j]){
                diff=j-i+2;
                mn=max(mn,diff);
            }
            else if(nums[j+1]<=nums[j]){
                i=j+1;
            }
        }
        return mn;
    }
};