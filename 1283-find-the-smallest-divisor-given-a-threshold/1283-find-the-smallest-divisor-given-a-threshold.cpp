class Solution {
public:
    int smallestDivisor(vector<int>& nums, int th) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int st = 1;
        int ans;
        int end = nums[n - 1];
        while (st <= end) {
            int mid = (st + end) / 2;
            int sum=0;

            for (int i = 0; i < n; i++) {

                sum += (nums[i] + mid - 1) / mid;
            }
            if (sum <= th) {
                ans=mid;
                end = mid - 1;
            } else {
                st = mid + 1;
                ;
            }
        }
        return ans;
    }
};