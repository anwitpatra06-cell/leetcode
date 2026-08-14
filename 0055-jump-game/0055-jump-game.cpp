class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size() - 1;
        int farthest = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > farthest) {
                return false;
            }
            farthest = max(farthest, i + nums[i]);
            if (farthest >= last) {
                return true;
            }
        }
        return true;
    }
};