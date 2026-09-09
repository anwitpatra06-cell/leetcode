class Solution {
public:
    vector<int> rev(int x) {
        vector<int> v;

        while (x != 0) {
            v.push_back(x % 10);
            x = x / 10;
        }

        reverse(v.begin(), v.end());

        return v;
    }

    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> k = rev(nums[i]);

            for (int j = 0; j < k.size(); j++) {
                ans.push_back(k[j]);
            }
        }

        return ans;
    }
};