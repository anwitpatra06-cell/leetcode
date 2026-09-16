class Solution {
public:
    const long long MOD = 1000000007;

    long long C(int n, int k) {
        vector<long long> dp(k + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = min(i, k); j >= 1; j--) {
                dp[j] = (dp[j] + dp[j - 1]) % MOD;
            }
        }

        return dp[k];
    }

    int numberOfSets(int n, int k) {
        return C(n + k - 1, 2 * k);
    }
};