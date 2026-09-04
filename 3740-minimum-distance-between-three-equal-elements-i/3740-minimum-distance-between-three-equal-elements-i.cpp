class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> m;
        int ans=INT_MAX;
        int n=nums.size();
        for (int i = 0; i < n; i++) {
            m[nums[i]].push_back(i);
        }
        for (auto x : m) {
            vector<int> indices = x.second;

             for (int p = 2; p < indices.size(); p++) {
                int i = indices[p - 2];
                int j = indices[p - 1];
                int k = indices[p];

                ans = min(ans,
                    abs(i - j) + abs(j - k) + abs(k - i)
                );
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};