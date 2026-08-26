class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int ans=0;
        for (auto& query : queries) {
            int l = query[0];
            int r = query[1];
            int k = query[2];
            int v = query[3];

            for (int idx = l; idx <= r; idx += k) {
                nums[idx] = (1LL * nums[idx] * v) % (1000000000+7);
            }
        }
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};