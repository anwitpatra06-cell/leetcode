class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int window = 2 * k + 1;

        vector<int> ans(n, -1);

        if (window > n)
            return ans;

        long long sum = 0;

        // First window
        for (int i = 0; i < window; i++) {
            sum += nums[i];
        }

        ans[k] = sum / window;

        // Move window
        for (int i = window; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - window];

            ans[i - k] = sum / window;
        }

        return ans;
    }
};