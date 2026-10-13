
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        int mid = n / 2;

        for (int i = 0; i < mid; i++) {
            ans -= 1LL * nums[i] * nums[i];
        }

        for (int i = mid; i < n; i++) {
            ans += 1LL * nums[i] * nums[i];
        }

        return ans;
    }
};

