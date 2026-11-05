class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq;

        int n = nums.size();
        int c = 0;

        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        for(auto it : freq) {
            int f = it.second;

            if(f == 1) {
                return -1;
            }

            c += (f + 2) / 3;
        }

        return c;
    }
};