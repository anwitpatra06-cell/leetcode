class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n - 1; i++) {
            int j = i;

            if (nums[i + 1] > nums[i]) {
                while (j + 1 < n && nums[j + 1] > nums[j]) {
                    j++;
                }
                ans = max(ans, j - i + 1);
            }
            else if (nums[i + 1] < nums[i]) {
                while (j + 1 < n && nums[j + 1] < nums[j]) {
                    j++;
                }
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};