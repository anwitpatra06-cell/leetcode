
class Solution {
public:
    int sum(int x) {
        int s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> v = nums;

        sort(v.begin(), v.end(), [&](int a, int b) {
            if (sum(a) == sum(b)) {
                return a < b;
            }
            return sum(a) < sum(b);
        });

        unordered_map<int, int> curr;

        for (int i = 0; i < n; i++) {
            curr[nums[i]] = i;
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == v[i]) {
                continue;
            }

            int j = curr[v[i]];

            curr[nums[i]] = j;
            curr[v[i]] = i;

            swap(nums[i], nums[j]);

            ans++;
        }

        return ans;
    }
};
