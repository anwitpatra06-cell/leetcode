class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;
        vector<int>ans;
        int n=nums.size();
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        int remaining = nums.size();
        while (remaining > 0) {
            for (auto& p : freq) {
                if (p.second > 0) {
                    ans.push_back(p.first);
                    p.second--;
                    remaining--;
                }
            }
        }
        return ans;
    }
};