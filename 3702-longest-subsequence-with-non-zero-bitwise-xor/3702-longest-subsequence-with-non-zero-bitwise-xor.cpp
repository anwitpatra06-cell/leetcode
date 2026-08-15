class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool allZero = true;
        int c = 0;
        for (int num : nums) {
            if (num != 0) {
                allZero = false;
                break;
            }
        }

        if (allZero)
            return 0;
        for (int i = 0; i < nums.size(); i++) {
            c = c ^ nums[i];
        }
        if (c > 0) {
            return nums.size();
        }
        return nums.size() - 1;
    }
};