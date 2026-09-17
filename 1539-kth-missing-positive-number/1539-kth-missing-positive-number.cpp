class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int st = 1;
        int n = arr.size();
        int end = arr[n - 1] + k;

        while (st <= end) {
            int mid = (st + end) / 2;

            int cnt = 0;

            // Count elements present up to mid
            for (int i = 0; i < n; i++) {
                if (arr[i] <= mid) {
                    cnt++;
                }
            }

            // Missing numbers up to mid
            int missing = mid - cnt;

            if (missing < k) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return st;
    }
};