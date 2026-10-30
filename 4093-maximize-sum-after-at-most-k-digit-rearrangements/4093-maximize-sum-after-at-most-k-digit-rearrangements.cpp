class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        vector<int> v;

        for (int x : nums) {
            sum += x;

            string s = to_string(x);
            sort(s.rbegin(), s.rend());

            int mx = stoi(s);
            v.push_back(mx - x);
        }

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < k; i++) {
            sum += v[i];
        }

        return sum;
    }
};