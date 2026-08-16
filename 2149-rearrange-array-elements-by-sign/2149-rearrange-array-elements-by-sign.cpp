class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);
        int j = 0;
        int z = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans[j] = nums[i];
                j = j + 2;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                ans[z] = nums[i];
                z = z + 2;
            }
        }
        return ans;
    }
};