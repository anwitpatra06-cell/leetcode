class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> freq(50000, 0);

        // Find frequency
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        // Find highest frequency
        int degree = 0;

        for (int i = 0; i < n; i++) {
            degree = max(degree, freq[nums[i]]);
        }

        int ans = n;

        // Check every element having highest frequency
        for (int x = 0; x < 50000; x++) {

            if (freq[x] == degree) {

                int first = -1;
                int last = -1;

                for (int i = 0; i < n; i++) {
                    if (nums[i] == x) {

                        if (first == -1) {
                            first = i;
                        }

                        last = i;
                    }
                }

                int length = last - first + 1;

                ans = min(ans, length);
            }
        }

        return ans;
    }
};