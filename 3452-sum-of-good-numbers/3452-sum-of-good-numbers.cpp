class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            bool a = true;
            bool b = true;

            if(i - k >= 0) {
                if(nums[i - k] >= nums[i]) {
                    b = false;
                }
            }

            if(i + k < n) {
                if(nums[i + k] >= nums[i]) {
                    a = false;
                }
            }

            if(a && b) {
                ans += nums[i];
            }
        }

        return ans;
    }
};