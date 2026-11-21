class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        long long sum = 0;
        for(int x : nums)
            sum += x;

        double avg = (double)sum / nums.size();

        unordered_set<int> s(nums.begin(), nums.end());

        for(int i = 1; ; i++) {
            if(i > avg && s.find(i) == s.end())
                return i;
        }
    }
};