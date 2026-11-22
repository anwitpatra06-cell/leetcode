class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int n = nums.size();

        map<int, int> left, right;

        for (int x : nums) {
            right[x]++;
        }

        long long ans = 0;

        for (int j = 0; j < n; j++) {
            int mid = nums[j];

            // Remove current element from right
            right[mid]--;

            int target = mid * 2;

            // Count valid elements on left and right
            long long l = left[target];
            long long r = right[target];

            ans = (ans + l * r) % MOD;

            // Add current element to left
            left[mid]++;
        }

        return ans;
    }
};