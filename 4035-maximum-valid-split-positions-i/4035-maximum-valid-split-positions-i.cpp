class Solution {
public:
    int maxValidSplits(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        // remove = -1 means: don't remove anything
        for (int remove = -1; remove < n; remove++) {

            // Create array after removing one element
            vector<int> arr;

            for (int i = 0; i < n; i++) {
                if (i != remove) {
                    arr.push_back(nums[i]);
                }
            }

            int m = arr.size();

            // Length 1 has no valid split
            if (m < 2)
                continue;

            // Prefix GCD
            vector<int> pref(m);

            pref[0] = arr[0];

            for (int i = 1; i < m; i++) {
                pref[i] = gcd(pref[i - 1], arr[i]);
            }

            // Suffix GCD
            vector<int> suff(m);

            suff[m - 1] = arr[m - 1];

            for (int i = m - 2; i >= 0; i--) {
                suff[i] = gcd(suff[i + 1], arr[i]);
            }

            // Count valid splits
            int score = 0;

            for (int i = 0; i < m - 1; i++) {

                // Left  = arr[0 ... i]
                // Right = arr[i+1 ... m-1]

                if (pref[i] == suff[i + 1]) {
                    score++;
                }
            }

            // Keep maximum score
            ans = max(ans, score);
        }

        return ans;
    }
};