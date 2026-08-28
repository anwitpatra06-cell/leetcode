class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,mn=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0 || i==n-1){
                mn=max(count,mn);
                count=0;
            }
        }
        return mn;
    }
};