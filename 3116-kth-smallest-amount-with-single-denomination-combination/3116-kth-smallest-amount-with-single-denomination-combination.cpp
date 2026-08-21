class Solution {
public:

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    long long count(long long n, vector<int>& coins) {
        int m = coins.size();
        long long ans = 0;

        // Every non-empty subset of coins
        for (int mask = 1; mask < (1 << m); mask++) {

            long long L = 1;
            int bits = 0;
            bool valid = true;

            for (int i = 0; i < m; i++) {
                if (mask & (1 << i)) {
                    bits++;

                    L = lcm(L, coins[i]);

                    // L is already bigger than n
                    if (L > n) {
                        valid = false;
                        break;
                    }
                }
            }

            if (!valid)
                continue;

            if (bits % 2 == 1)
                ans += n / L;
            else
                ans -= n / L;
        }

        return ans;
    }

    long long findKthSmallest(vector<int>& coins, int k) {

        sort(coins.begin(), coins.end());

        long long st = 1;
        long long x = 1LL * coins[0] * k;

        while (st < x) {

            long long mid = st + (x - st) / 2;

            if (count(mid, coins) >= k) {
                x = mid;
            }
            else {
                st = mid + 1;
            }
        }

        return st;
    }
};