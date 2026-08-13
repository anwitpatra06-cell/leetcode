class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {

        const long long MOD = 1000000007;

        long long unit = k;
        long long opp = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (unit >= nums[i]) {
                unit -= nums[i];
            }
            else {
                long long need =
                    (nums[i] - unit + k - 1LL) / k;

                opp += need;

                unit += need * k;
                unit -= nums[i];
            }
        }

        long long ans = opp % MOD;

        ans = ans * ((opp + 1) % MOD) % MOD;

        ans = ans * 500000004 % MOD;

        return ans;
    }
};