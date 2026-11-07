class Solution {
public:
    bool isprime(int x) {
        if (x <= 1) return false;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }

        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (isprime(nums[i])) {
                a.push_back(i);
            }
        }

        return *max_element(a.begin(), a.end()) -
               *min_element(a.begin(), a.end());
    }
};