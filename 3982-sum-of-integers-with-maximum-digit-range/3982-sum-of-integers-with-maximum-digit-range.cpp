class Solution {
public:
    int digrange(int x) {
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        while (x > 0) {
            maximum = max(maximum, x % 10);
            minimum = min(minimum, x % 10);
            x = x / 10;
        }
        return maximum - minimum;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<int> r;
        int ans = 0, mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            r.push_back(digrange(nums[i]));
        }
        for (int i = 0; i < r.size(); i++) {
             mx = max(mx, r[i]);
        }
        for (int i = 0;i < r.size(); i++) {
            if (r[i] == mx) {
                ans += nums[i];
            }
        }
        return ans;
    }
};