class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int c = 0;

        if(n == 1) return 1;

        // First element
        if(nums[0] >= nums[1]) c++;

        // Last element
        if(nums[n-1] >= nums[n-2]) c++;

        // Middle elements
        for(int i = 1; i < n-1; i++) {
            if(2LL * nums[i] >= nums[i-1] + nums[i+1]) {
                c++;
            }
        }

        return c;
    }
};