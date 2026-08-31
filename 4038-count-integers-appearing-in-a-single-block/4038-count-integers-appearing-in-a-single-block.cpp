class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> first, last, freq;
        int n=nums.size();
        int count=0;
        for (int i = 0; i < n; i++) {
            if (!first.count(nums[i]))
                first[nums[i]] = i;

            last[nums[i]] = i;
            freq[nums[i]]++;
        }

        for (auto& [x, f] : freq) {
            if (last[x] - first[x] + 1 == f)
                count++;
        }

        return count;
    }
};

