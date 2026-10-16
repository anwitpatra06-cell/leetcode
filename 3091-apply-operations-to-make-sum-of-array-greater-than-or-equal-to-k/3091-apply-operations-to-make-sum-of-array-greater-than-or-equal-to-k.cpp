class Solution {
public:
    int minOperations(int k) {
        int ans = k - 1;

        for (int n = 1; n <= k; n++) {
            int x = (k + n - 1) / n;
            ans = min(ans, x + n - 2);
        }
        return ans;
    }
};