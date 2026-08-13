class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        for(int j = k; j < nums.size(); j++) {
            sum += nums[j] - nums[j-k];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};