class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long m = nums[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] <= m) {
                m += nums[i];
            } else {
                m = nums[i];
            }
        }

        return m;
    }
};