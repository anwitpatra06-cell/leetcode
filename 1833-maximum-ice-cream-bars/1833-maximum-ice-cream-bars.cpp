class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        int mx = 0;

        for (int x : costs) {
            mx = max(mx, x);
        }

        vector<int> freq(mx + 1, 0);

        for (int x : costs) {
            freq[x]++;
        }

        int ans = 0;

        for (int p = 1; p <= mx; p++) {

            if (freq[p] == 0)
                continue;

            long long tp = 1LL * freq[p] * p;

            if (tp <= coins) {
                coins -= tp;
                ans += freq[p];
            }
            else {
                ans += coins / p;
                break;
            }
        }

        return ans;
    }
};