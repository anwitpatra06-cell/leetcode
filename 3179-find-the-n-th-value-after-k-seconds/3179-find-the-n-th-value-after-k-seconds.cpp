class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> a(n, 1);
        const int MOD = 1e9 + 7;

        for(int i = 0; i < k; i++) {
            vector<int> b(n);
            long long sum = 0;

            for(int j = 0; j < n; j++) {
                sum = (sum + a[j]) % MOD;
                b[j] = sum;
            }

            a = b;
        }

        return a[n-1];
    }
};