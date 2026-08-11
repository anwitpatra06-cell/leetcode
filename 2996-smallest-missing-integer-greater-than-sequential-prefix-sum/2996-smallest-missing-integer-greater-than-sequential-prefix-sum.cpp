class Solution {
public:
    int missingInteger(vector<int>& nums) {
        long long sum=nums[0];
        int i = 1;
        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            i++;
        }
        unordered_set<long long> st(nums.begin(), nums.end());

        long long x = sum;
        while (st.find(x) != st.end()) {
            x++;
        }
        return x;
    }
};