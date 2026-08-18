class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();

        for (int j = 0; j <= n - k; j++) {
            unordered_set<int> seen;

            for (int i = j; i < j + k; i++) {
                seen.insert(nums[i]);
            }

            for (int x : seen) {
                freq[x]++;
            }
        }

        int ans = -1;

        for (auto it : freq) {
            if (it.second == 1) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};