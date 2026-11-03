class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        const int MOD = 1e9 + 7;

        vector<int> p(n);
        p[0] = 1;

        for (int k = 1; k < n; k++) {
            p[k] = (2LL * p[k - 1]) % MOD;
        }

        int i = 0, j = n - 1;
        long long c = 0;

        while (i <= j) {
            if ((long long)nums[i] + nums[j] <= target) {
                c = (c + p[j - i]) % MOD;
                i++;
            }
            else {
                j--;
            }
        }

        return c;
    }
};