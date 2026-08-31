class Solution {
public:

    const long long MOD = 1e9 + 7;

    long long power(long long x, long long y) {
        long long ans = 1;

        while (y > 0) {
            if (y % 2 == 1)
                ans = (ans * x) % MOD;

            x = (x * x) % MOD;
            y /= 2;
        }

        return ans;
    }

    long long decode(long long num) {
        int w;
        long long d;

        int x = 0;
        int y = 0;

        w = num % 10;
        d = num / 10;

        vector<int> a;

        while (d != 0) {
            a.push_back(d % 10);
            d /= 10;
        }

        reverse(a.begin(), a.end());

        // Build x
        for (int i = 0; i < w; i++) {
            x = x * 10 + a[i];
        }

        // Build y
        for (int i = w; i < a.size(); i++) {
            y = y * 10 + a[i];
        }

        return power(x, y);
    }

    int sumDecoded(vector<long long>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans = (ans + decode(nums[i])) % MOD;
        }

        return ans;
    }
};