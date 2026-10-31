
class Solution {
public:
    long long maximumTotalSum(vector<int>& m) {
        sort(m.begin(), m.end());

        int n = m.size();
        long long sum = 0;
        int prev = INT_MAX;

        for (int i = n - 1; i >= 0; i--) {
            int x = min(m[i], prev - 1);

            if (x <= 0) return -1;

            sum += x;
            prev = x;
        }

        return sum;
    }
};
