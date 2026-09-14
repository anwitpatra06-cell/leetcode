class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();

        long long a = 0, b = 0;
        int cnt = 0;

        for (int i = 0; i < n / 2; i++) {
            a += nums[i];
        }

        for (int i = n / 2; i < n; i++) {
            b += nums[i];
        }

        for (int k = 0; k < n; k++) {
            if (a > b)
                cnt++;

            long long x = nums[k];
            long long y = nums[(k + n / 2) % n];

            a = a - x + y;
            b = b - y + x;
        }

        return cnt;
    }
};