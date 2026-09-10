class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        if(n == 2 && nums[n-1]==nums[n-2] && nums[n-2]==1){
            return true;
        }
        if(n<3){
            return false;
        }
           

        if(nums[n-1] != nums[n-2])
            return false;

        for(int i = 0; i < n-2; i++) {
            if(nums[i+1] - nums[i] != 1)
                return false;
        }

        return true;
    }
};