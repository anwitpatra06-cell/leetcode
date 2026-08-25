class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;
        // int a = 0;
        // int b = n - 2;
        for (int i = n - 1; i >= 2; i--) {
            int a = 0;
            int b = i - 1;
            while (a < b) {
                if (nums[a] + nums[b] > nums[i]) {
                    count+=b-a;
                    b--;
                } 
                else {
                    a++;
                }
            }
        }
        return count;
    }
};