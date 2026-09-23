class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        int total = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }

        int tar = total - x;

        if (tar < 0) {
            return -1;
        }

        int sum = 0;
        int l = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            while (sum > tar) {
                sum -= nums[l];
                l++;
            }

            if (sum == tar) {
                ans = max(ans, i - l + 1);
            }
        }

        if (ans == -1) {
            return -1;
        }

        return n - ans;
    }
};